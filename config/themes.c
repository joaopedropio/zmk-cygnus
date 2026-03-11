#include <theme/theme_loader.h>

const struct custom_theme custom_themes[] = {
    {
        .name = "dark",
        .background = 0x000000,
        .foreground = 0xFFFFFF,
        .accent = 0x00FFAA,
        .warning = 0xFF8800,
        .success = 0x00FF00,
    },
    {
        .name = "asts",
        .background = 0xFFFFFF,
        .foreground = 0x000000,
        .accent = 0x0066FF,
        .warning = 0xFF0000,
        .success = 0x008800,
    },
};

const size_t custom_themes_count = sizeof(custom_themes) / sizeof(custom_themes[0]);