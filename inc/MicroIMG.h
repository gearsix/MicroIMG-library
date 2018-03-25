/*------------------------------------------
|	Project:		Challenge1-UFCFVK-15-2 
|	File:			MicroIMG.h
|	Authors:		Alexander Collins
|	Description:	A set of extern MicroBitImage img_s and animations for a 5x5 BBC:MicroBit LED display.
|	Date:			Jan-Feb, 2018
|-----------------------------------------*/
#ifndef _
#define _
//========
// MACROS
//========
// includes
#include "MicroBit.h"

namespace MicroIMG
{
    /*	- - - - -
        - - - - -
        - - - - -
        - - - - -
        - - - - -	*/
    extern MicroBitImage img_blank;

    /*	- 1 1 - -
        1 - - 1 -
        1 1 1 1 -
        1 - - 1 -
        1 - - 1 -	*/
    extern MicroBitImage img_A;

    /*	1 1 1 - -
        1 - - 1 -
        1 1 1 - -
        1 - - 1 -
        1 1 1 - -	*/
    extern MicroBitImage img_B;

    /*	- - 1 - -
        - 1 1 1 -
        - - 1 - -
        - - 1 - -
        - - 1 - -	*/
    extern MicroBitImage img_uparrow;

    /*	- - 1 - -
        - - 1 - -
        - - 1 - -
        - 1 1 1 -
        - - 1 - -	*/
    extern MicroBitImage img_downarrow;

    /*	- - - - -
        - - - 1 -
        1 1 1 1 1
        - - - 1 -
        - - - - -	*/
    extern MicroBitImage img_rightarrow;

    /*	- - - - -
        - 1 - - -
        1 1 1 1 1
        - 1 - - -
        - - - - -	*/
    extern MicroBitImage img_leftarrow;

    /*
        1 - - - -
        - 1 - - -
        - - 1 - -
        - - - 1 -
        - - - - 1	*/
    extern MicroBitImage img_rotation0;

    /*	- - 1 - -
        - - 1 - -
        - - 1 - -
        - - 1 - -
        - - 1 - -	*/
    extern MicroBitImage img_rotation1;

    /*	- - - - 1
        - - - 1 -
        - - 1 - -
        - 1 - - -
        1 - - - -	*/
    extern MicroBitImage img_rotation2;

    /*	- - - - -
        - - - - -
        1 1 1 1 1
        - - - - -
        - - - - -	*/
    extern MicroBitImage img_rotation3;

    /*	1 1 1 1 1
        1 - - - 1
        1 - - - 1
        1 - - - 1
        1 1 1 1 1	*/
    extern MicroBitImage img_square0;

    /*	- - - - -
        - 1 1 1 -
        - 1 - 1 -
        - 1 1 1 -
        - - - - -	*/
    extern MicroBitImage img_square1;

    /*	- - - - -
        - - - - -
        - - 1 - -
        - - - - -
        - - - - -	*/
    extern MicroBitImage img_centerdot;

    /*	- - - - -
        - - - - 1
        - - - 1 -
        1 - 1 - -
        - 1 - - -	*/
    extern MicroBitImage img_tick;

    /*	1 - - - 1
        - 1 - 1 -
        - - 1 - -
        - 1 - 1 -
        1 - - - 1	*/
    extern MicroBitImage img_cross;

    /* flashes two images 'flashes' times for 'speed' ms	*/
    extern void ani_flash(MicroBit *uBit, MicroBitImage img1, MicroBitImage img2, int flashes, unsigned long speed);

    /* shows a square getting bigger/smaller from center
    if ('reverse' == false)...
    1.	1 1 1 1 1	2.	- - - - -	3.	- - - - -
        1 - - - 1		- 1 1 1 -		- - - - -
        1 - - - 1		- 1 - 1 -		- - 1 - -
        1 - - - 1		- 1 1 1 -		- - - - -
        1 1 1 1 1		- - - - -		- - - - -
    with 'speed' ms between frames	*/
    extern void ani_square(MicroBit *uBit, int loops, unsigned long speed, bool reverse);

    /* shows a rotating straight line
    if ('reverse' == false)...
    1.	1 - - - -	2.	- - 1 - -	3.	- - - - 1	4.	- - - - -
        - 1 - - -		- - 1 - -		- - - 1 -		- - - - -
        - - 1 - -		- - 1 - -		- - 1 - -		1 1 1 1 1
        - - - 1 -		- - 1 - -		- 1 - - -		- - - - -
        - - - - 1		- - 1 - -		1 - - - -		- - - - -
    with 'speed' ms between frames	*/
    extern void ani_rotation(MicroBit *uBit, int rotations, unsigned long speed, bool reverse);
}

#endif	//IMG

