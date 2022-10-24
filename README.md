<h1 align="center">DroneLights</h1>
<h3 align="center">A really bright light for your drone</h3>
<p align="center"><img src="Manuals/blink.gif" style="width:80px;"></p>

---

Drone lights help light up your aircraft for night flying and ease of observation in the daytime. This specific drone light PCB also doubles as a simple breakout board for the ATTiny84A. This was built so that [UBC UAS](https://www.ubcuas.com/) can fly and test whenever the weather cooperates!

## Project Directory
- Manuals: PCB Assembly/Programming Info
- PCB: KiCad project files (KiCad 6.0+)
- Programming: Code for the ATTiny84A

## Features
- On/Off switch
- Breakout pins for ATtiny84A prototyping
- Labelled programming pins
- Programmable pin LED
- On indicator
- Reset and configurable pushbuttons
- Adjustable brightness and blink interval
- External input
- Zip-tie-able

## Warnings
Please build and test with caution. Do not look directly into the light at any point when testing. May cause eye damage.

## To Do
### Code
- [ ] Add different blink modes, toggled by signal pin beside power port/I2C/SPI
- [ ] Get rid of press and hold for mode switch (instead of delays in main loop, use millis function), use some form of debounce

### PCB Rev B Notes
- [ ] Add a 5V fuse to protect sensitive components
- [ ] Add diode markings to silkscreen
- [ ] Fix incorrectly labelled MOSI/MISO silkscreen on programming pins
- [ ] Use proper header spacing on breakout pins so that headers can be soldered if desired
- [ ] Remove unnecessary components for compact version (programming, breakouts, unnecessary diodes, etc.)
- [ ] Use a smaller toggle sliding switch for SW3
