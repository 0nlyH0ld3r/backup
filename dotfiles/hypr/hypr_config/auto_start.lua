local apps = require("hypr_config.my_programs")


hl.on("hyprland.start", function()
    hl.exec_cmd(apps.terminal)
    hl.exec_cmd("nm-applet --indicator")
    hl.exec_cmd("~/./codigos/testes/bateria.c/battery-checker")
    hl.exec_cmd("blueman-applet")
    hl.exec_cmd("waybar & hyprpaper")
end)

