#include <libnotify/notification.h>
#include <libnotify/notify.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

void send_notification(const char *message)
{
	NotifyNotification *notif = notify_notification_new("[LOW BATTERY]", message, "battery");

	notify_notification_set_urgency(notif, NOTIFY_URGENCY_CRITICAL);
	notify_notification_set_timeout(notif, 30000);

	notify_notification_show(notif, NULL);

	g_object_unref(G_OBJECT(notif));
}

int is_valid_to_notify(int batt_cap)
{
	if (batt_cap > 30)
		return 0;

	FILE *batt_state_f = fopen("/sys/class/power_supply/BAT0/status", "r");

	assert(batt_state_f != NULL);

	char *buff_charging = "Charging";
	char buff_state[20];

	fgets(buff_state, 9, batt_state_f);

	if (strncmp(buff_state, buff_charging, strlen(buff_charging) - 1) == 0)
			return 0;

	return 1;
}

int main()
{
	int batt_capacity;
	char mensagem[100];

	notify_init("my_battery_monitor");

	while (1) {
		FILE *batt_cap_f = fopen("/sys/class/power_supply/BAT0/capacity", "r");
		assert(batt_cap_f != NULL);

		if (fscanf(batt_cap_f, "%d", &batt_capacity) != 1) {
			fclose(batt_cap_f);
			continue;
		}

		fclose(batt_cap_f);

		if (is_valid_to_notify(batt_capacity)) {
			snprintf(mensagem, sizeof(mensagem), "Current capacity: [%02d%%]",
				 batt_capacity);

			send_notification(mensagem);
		}

		sleep(90);
	}

	notify_uninit();
	return 0;
}
