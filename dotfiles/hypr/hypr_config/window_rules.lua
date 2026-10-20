suppressMaximizeRule = hl.window_rule({
	-- Ignore maximize requests from all apps. You'll probably like this.
	name = "suppress-maximize-events",
	match = { class = ".*" },

	suppress_event = "maximize",
})

hl.window_rule({
    name = "Floating Kitty",
    match = {
        class = "kitty",
        title = "kitty",
    },
    float = false,
    size = { 800, 450},
})

hl.window_rule({
    name = "Setting Zen Browser to WS 2",
    match = {
        class = "zen",
        title = "Library",
    },
    workspace = 2,
    float = true
})

hl.window_rule({
    name = "Setting Zen Browser to WS 2",
    match = {
        class = "zen",
    },
    workspace = 2
})

hl.window_rule({
    name = "Settin YT Music to WS 3",
    match = {
        class = "com.github.th-ch.youtube-music"
    },
    workspace = 3
})

hl.window_rule({
    name = "Setting Telegram to WS 4",
    match = {
        class = "org.telegram.desktop"
    },
    workspace = 4
})

hl.window_rule({
	-- Fix some dragging issues with XWayland
	name = "fix-xwayland-drags",
	match = {
		class = "^$",
		title = "^$",
		xwayland = true,
		float = true,
		fullscreen = false,
		pin = false,
	},

	no_focus = true,
})

hl.window_rule({
	name = "move-hyprland-run",
	match = { class = "hyprland-run" },

	move = "20 monitor_h-120",
	float = true,
})
