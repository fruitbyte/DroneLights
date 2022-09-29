<h1 align="center">DroneLights</h1>
<h3 align="center">A really bright light for your drone</h3>
<p align="center"><img src="Manual/blink.gif"></p>

---

Drone lights help light up your aircraft for night flying and ease of observation in the daytime.

## Project Directory
- Manuals: PCB Datasheet & Assembly/Programming Info
- PCB: KiCad project files (KiCad 6.0+)
- Programming: Code for the ATTiny84A

## To Do
### Code
- [ ] Add different blink modes, toggled by signal pin beside power port/I2C/SPI

### PCB Rev B Notes
- [ ] Add a 5V fuse to protect sensitive components
- [ ] Add diode markings to silkscreen
- [ ] Fix incorrectly labelled MOSI/MISO silkscreen on programming pins
- [ ] Use proper header spacing on breakout pins so that headers can be soldered if desired
- [ ] Remove unnecessary components for compact version (programming, breakouts, unnecessary diodes, etc.)
