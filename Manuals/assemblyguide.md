# Manufacturing and Assembly Guide
Last updated: September 28, 2022

## Manufacturing
The manufacturing files (gerber and drill) of Rev A can be found in `PCB\Drone Lights\manufacturing_files.zip`. You should be able to upload these to an online manufacturer site and submit the order. These files can also be generated from the `Drone Lights.kicad_pcb` file.

## PCB Assembly

A bill of materials (`Manuals\BOM.pdf`) is available for your reference. You should also have the KiCad project open, as there are some errors in the silkscreen (to be fixed in next revision, will be noted in the instructions below).

### 1. Component Selection
You can add/remove features of this board as desired. Here are some groups of components you will need in order to get the board to work.

Basic drone light blink:
- D1 (pick either green, red, or white)
- R1
- MOSFET1
- U1
- C1

On/Off switch:
- Either connect SW3 __or__ JP1
    - JP1 is connected by soldering the pads together, which bypasses SW3
    - SW3 can be used as an on/off toggle if you have the drone powered but don't want the lights on

Reset button:
- [Optional] Connect SW1 and R2

Mode button:
- [Optional] Connect SW2 and R3

"On" LED:
- [Optional] Connect R4, JP2, and D3

Programming Connector:
- [Optional if you pre-program U1] Connect headers to J10

Programmable pin LED:
- [Optional] Connect R5, D2

### 2. Soldering Components
Some general advice: start by soldering all the SMD components and __make sure your LED polarity is correct or the board will not function__. This revision does not have markings on the silkscreen for polarity, so double check with the board file and the corresponding LED's datasheet (sorry!). Passive components such as the chip resistors and capacitor do not have polarity.

Next, connect all the required jumper pads.

Lastly, solder on the through-hole components. It is easiest to go from shortest/smallest components to largest. Make sure to pre-program U1 (the ATtiny84A) unless you are using the programming port.

### 3. Checks!

Check all solder connections before plugging anything in! Look for things like solder balls connecting adjacent pins, make sure the solder has reflowed properly to make good solder joints, and test continuity with a multimeter.

## Programming
Please note that the board programming pins have an error on the silkscreen:
- MO should be MISO
- MI should be MOSI

An easy guide for flashing the program onto the ATtiny can [found here](https://www.sparkfun.com/news/2237). This requires you to configure an Arduino to be used as an ISP. The "SS" pin in the tutorial is also the "RS" pin on the board's programming port.

Simple blink code with a brightness toggle can be found in `Programming\navlights\navlights.ino`. Note that brightness switching in this implementation requires the Mode button present on the board (see PCB Assembly). More info is in the code comments.

## Mechanical
There are 4 M3 holes on the corners of this PCB which can be used for mounting. They also have a smooth plane between them for you to attach two zipties width-wise to tie the board to your location of choice. Just make sure that if you are pressing the board up against a conductive surface, the contacts on the back of the board are properly insulated from potential shorts. 