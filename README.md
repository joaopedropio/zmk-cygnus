# Snake Cygnus

<img src="https://i.imgur.com/XlCqe1X.jpeg" width="100%" />

The configuration for my newest sweet daily driver [cygnus](https://github.com/juhakaup/keyboards/tree/main/Cygnus%20v1.0) keyboard with [snake dongle](https://github.com/joaopedropio/snake-dongle).

## Keymap explanation

Heavily inspired by [Miryoku](https://github.com/manna-harbour/miryoku) by *manna-harbour*. Every layer has something similiar to [home row mods](https://precondition.github.io/home-row-mods) but is triggered using combos. Holding ST or NE is like holding control. Holding RS or EI is like holding meta. Holding RT or NI is like holding alt. To change the base layer from Colemak to Qwerty simply press QWRT key on System layer as show on the diagram bellow. To change back to Colemak, press CLMK. This action do not persist between keyboard initializations.

## Complete diagram
<img src="https://raw.githubusercontent.com/joaopedropio/joaopedropio.github.io/old/swoop_layout_diagram.svg" width="100%" ></embed>

## ZMK Studio

The dongle build has `CONFIG_ZMK_STUDIO=y` on, so Studio can reach it over BLE
with nothing extra at build time. For a USB-serial connection instead, add the
`studio-rpc-usb-uart` snippet alongside `cdc-acm-console` - the two open
separate CDC ACM endpoints on the one port, so neither takes the other's:

```sh
-S "cdc-acm-console studio-rpc-usb-uart"
```

Studio locks itself after ten minutes idle or on disconnect; STUDIO on the
System layer's right thumb (`&studio_unlock`) unlocks it again. The physical
layout Studio draws the keymap against is borrowed from the Corne 5-column
board - Cygnus's own case files never wrote down real key coordinates, but its
matrix is deliberately wired the way a Corne's is, and the two share the same
shape (three rows of five a side, three curved thumb keys). See
`boards/shields/cygnus/cygnus_layout.dtsi` for the reasoning and where to
nudge a coordinate if a key's position on screen bothers you.