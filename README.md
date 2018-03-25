# MicroIMG
---
A set of images and animations for a BBC:MicroBit 5x5 LED display, using the [Lancaster University micro:bit runtime](https://github.com/lancaster-university/microbit-dal)


## Contents
1. Overview
2. Requirements
3. Usage
4. Author & Contributors


## Overview
The Lancaster microbit runtime uses [MicroBitImage](https://lancaster-university.github.io/microbit-docs/data-types/image/) objects to print to micro:bit displays. These objects represent bitmaps, can be of any size and can change the brightness of each LED (note: these objects are a ```managed type```, so memory is managed for you (no need to delete.).

This library contains a bunch of these objects, pre-defined. In the header file you'll find comments documenting what each MicroBitImage object displays on a 5x5 MicroBit LED display.

The animations are a set of functions that use the pre-defined MicroBitImages and a MicroBitDisplay to print animations. These animations are blocking as they set the MicroBit passed to it to sleep between frames, however they're fairly quick and you can queue anything that might happen while the animation is playing (thanks to the wonderful DAL library).

These MicroBitImage objects are used by the [MicroBitDisplay](https://lancaster-university.github.io/microbit-docs/ubit/display/). See **Examples** under **Usage**.

Also know, that because of the the DAL is written, using this library will cause a lot of warnings when you build a project.


## Usage
If you're using the MicroBitImages, just pass them to a MicroBitDisplay function that requires one.
If you want to use the animations, just call them. _Note: check the parameters, they're not standard._

### Examples
If you don't want to type ```MicroIMG::``` all the time, add ```using namespace MicroIMG``` to the top of your file.

#### Images
* You could just print them: ```MicroBitDisplay.print(MicroIMG::img_tick);```
* You could scroll them: ```MicroBitDisplay.scroll(MicroIMG::img_tick);```
Basically treat them the way you'd treat any MicroBitImage.

### Animations
* Simply call the relevant function: ```MicroIMG::ani_flash(&uBit, MicroIMG::img_A, MicroIMG::img_blank, 5, 75);```


## Requirements
###### A BBC:MicroBit (preferably with a 5x5 LED Matrix display)
Really cheap on amazon.

###### A compatible build enviroment
**I've only compiled this with yotta projects targeting ```bbc-microbit-classic-gcc```**

| Build Environment | Documentation |
| ------------- |-------------|
| ARM mbed online | http://lancaster-university.github.io/microbit-docs/online-toolchains/#mbed |
| yotta  | http://lancaster-university.github.io/microbit-docs/offline-toolchains/#yotta |
_Note: I've only ever used the yotta build enviroment_

###### The [Lancaster University micro:bit runtime](https://github.com/lancaster-university/microbit-dal)
If you're using the **yotta** build, add ```"depedencies": "lancaster-university/microbit"``` to your ```module.json```.


## Author & Contributors
Alexander Collins (_alexander-collins@outlook.com_)

