#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct{
	char* name;
	float health;
	float regen_stamina;
	float damage;
	float speed;
	float defense;
} npc;

void wait(){
	for (int i = 0; i < 399999999; ++i){

	}
}

void regenerate(npc *player1, npc *player2){
	player1->speed += 5 * player1->regen_stamina;
	player2->speed += 5 * player2->regen_stamina;

	player1->health += 8 * ( player1->regen_stamina / player1->defense);
	player2->health += 8 * ( player2->regen_stamina / player2->defense);
}

void attack(npc *player1, npc *player2){
	if (player2->speed > player1->speed){
		player1->health -= player2->damage / player1->defense;
		player2->speed -= player2->damage / player2->regen_stamina * player1->defense;
		if (player1->health < 0){
			player1->health = 0;
		}
		printf("%s foi atacado por %s! HP restante de %s: %.0f\n\n\n\n", player1->name, player2->name, player1->name, player1->health);
	}
	else{
		if (player1->speed > player2->speed){
			player2->health -= player1->damage / player2->defense;
			player1->speed -= player1->damage / player1->regen_stamina * player2->defense;
			if (player2->health < 0){
				player2->health = 0;
			}
			printf("%s foi atacado por %s! HP restante de %s: %.0f\n\n\n\n", player2->name, player1->name, player2->name, player2->health);
		}
	}
};

int is_alive(npc *player1, npc *player2){
	if (player1->health == 0){
		printf("%s foi morto por %s", player1->name, player2->name);
		return 0;
	}
	if (player2->health == 0){
		printf("%s foi morto por %s", player2->name, player1->name);
		return 0;
	}
	return 1;
};

void combat_handler(npc *player1, npc *player2){
	attack(player1, player2);
	regenerate(player1, player2);
	wait();
};



int main(void){
	/* npc Joao = {"João", 100, 1.5, 50, 20, 1.4};
	npc Arthur = {"Arthur", 100, 1.8, 30, 30, 1.1};
	int vivo; */

	/* while(1){
		combat_handler(&Joao, &Arthur);
		vivo = is_alive(&Joao, &Arthur);
		if (!vivo){
			break;
		}
	} // while(1) */

	srand(time(NULL));
	float teste = (float)rand() / (float)RAND_MAX;
	printf("%.2f", (float)rand() / (float)RAND_MAX);
} // int main(void)

