return{

    hl.config({
        input = {
            kb_layout = "br",
            kb_variant = "",
            kb_model = "",
            kb_options = "caps:escape",
            kb_rules = "",

            follow_mouse = 1,

            sensitivity = 0, -- -1.0 - 1.0, 0 means no modification.

            touchpad = {
                natural_scroll = false,
                scroll_factor = 0.5,
            },
        },
    }),

    hl.gesture({
        fingers = 3,
        direction = "horizontal",
        action = "workspace",
    }),

    -- Example per-device config
    -- See https://wiki.hypr.land/Configuring/Advanced-and-Cool/Devices/ for more
    hl.device({
        name = "epic-mouse-v1",
        sensitivity = -1,
    }),
    hl.device({
        name = "at-translated-set-2-keyboard",
        enabled = true,
    }),

    hl.device({
        name = "synaptics-tm-3096-006",
        enabled = false,
    }),
}
