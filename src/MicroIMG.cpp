/*------------------------------------------
|	Project:		Challenge1-UFCFVK-15-2 
|	File:			MicroIMG.h
|	Authors:		Alexander Collins
|	Description:	A set of MicroBitImages and animations for a 5x5 BBC:MicroBit LED display.
|	Date:			Jan-Feb, 2018
|-----------------------------------------*/
//========
// MACROS
//========
// includes
#include "MicroIMG.h"

namespace MicroIMG
{
    MicroBitImage img_blank        = MicroBitImage("0,0,0,0,0\n0,0,0,0,0\n0,0,0,0,0\n0,0,0,0,0\n0,0,0,0,0\n");
    MicroBitImage img_A            = MicroBitImage("0,1,1,0,0\n1,0,0,1,0\n1,1,1,1,0\n1,0,0,1,0\n1,0,0,1,0\n");
    MicroBitImage img_B            = MicroBitImage("1,1,1,0,0\n1,0,0,1,0\n1,1,1,0,0\n1,0,0,1,0\n1,1,1,0,0\n");
    MicroBitImage img_uparrow      = MicroBitImage("0,0,1,0,0\n0,1,1,1,0\n0,0,1,0,0\n0,0,1,0,0\n0,0,1,0,0\n");
    MicroBitImage img_downarrow    = MicroBitImage("0,0,1,0,0\n0,0,1,0,0\n0,0,1,0,0\n0,1,1,1,0,\n0,0,1,0,0\n");
    MicroBitImage img_rightarrow   = MicroBitImage("0,0,0,0,0\n0,0,0,1,0\n1,1,1,1,1\n0,0,0,1,0\n0,0,0,0,0\n");
    MicroBitImage img_leftarrow    = MicroBitImage("0,0,0,0,0\n0,1,0,0,0\n1,1,1,1,1\n0,1,0,0,0\n0,0,0,0,0\n");
    MicroBitImage img_rotation0    = MicroBitImage("1,0,0,0,0\n0,1,0,0,0\n0,0,1,0,0\n0,0,0,1,0\n0,0,0,0,1\n");
    MicroBitImage img_rotation1    = MicroBitImage("0,0,1,0,0\n0,0,1,0,0\n0,0,1,0,0\n0,0,1,0,0\n0,0,1,0,0\n");
    MicroBitImage img_rotation2    = MicroBitImage("0,0,0,0,1\n0,0,0,1,0\n0,0,1,0,0\n0,1,0,0,0\n1,0,0,0,0\n");
    MicroBitImage img_rotation3    = MicroBitImage("0,0,0,0,0\n0,0,0,0,0\n1,1,1,1,1\n0,0,0,0,0\n0,0,0,0,0\n");
    MicroBitImage img_square0      = MicroBitImage("1,1,1,1,1\n1,0,0,0,1\n1,0,0,0,1\n1,0,0,0,1\n1,1,1,1,1\n");
    MicroBitImage img_square1      = MicroBitImage("0,0,0,0,0\n0,1,1,1,0\n0,1,0,1,0\n0,1,1,1,0\n0,0,0,0,0\n");
    MicroBitImage img_centerdot    = MicroBitImage("0,0,0,0,0\n0,0,0,0,0\n0,0,1,0,0\n0,0,0,0,0\n0,0,0,0,0\n");
    MicroBitImage img_tick         = MicroBitImage("0,0,0,0,0\n0,0,0,0,1\n0,0,0,1,0\n1,0,1,0,0\n0,1,0,0,0\n");
    MicroBitImage img_cross        = MicroBitImage("1,0,0,0,1\n0,1,0,1,0\n0,0,1,0,0\n0,1,0,1,0\n1,0,0,0,1\n");

    void ani_flash(MicroBit *uBit, MicroBitImage img1, MicroBitImage img2, int flashes, unsigned long speed)
    {
        if (!speed)
            speed = 100;

        for (int i = 0; i < flashes; i++)
        {
            uBit->display.print(img1);
            uBit->sleep(speed);
            uBit->display.print(img2);
            uBit->sleep(speed);
        }

        uBit->display.clear();
    }
    void ani_square(MicroBit *uBit, int loops, unsigned long speed, bool reverse)
    {
        if (!speed)
            speed = 200;

        if (reverse == true)
        {
            for (int i = 0; i < loops; i++)
            {
                uBit->display.print(img_centerdot);
                uBit->sleep(speed);
                uBit->display.print(img_square1);
                uBit->sleep(speed);
                uBit->display.print(img_square0);
                uBit->sleep(speed);
            }
        }
        else
        {
            for (int i = 0; i < loops; i++)
            {
                uBit->display.print(img_square0);
                uBit->sleep(speed);
                uBit->display.print(img_square1);
                uBit->sleep(speed);
                uBit->display.print(img_centerdot);
                uBit->sleep(speed);
            }
        }

        uBit->display.clear();
    }
    void ani_rotation(MicroBit *uBit, int rotations, unsigned long speed, bool reverse)
    {
        if (!speed)
            speed = 200;

        if (reverse == true)
        {
            for (int i = 0; i < rotations; i++)
            {
                uBit->display.print(img_rotation3);
                uBit->sleep(speed);
                uBit->display.print(img_rotation2);
                uBit->sleep(speed);
                uBit->display.print(img_rotation1);
                uBit->sleep(speed);
                uBit->display.print(img_rotation0);
                uBit->sleep(speed);
            }
        }
        else
        {
            for (int i = 0; i < rotations; i++)
            {
                uBit->display.print(img_rotation0);
                uBit->sleep(speed);
                uBit->display.print(img_rotation1);
                uBit->sleep(speed);
                uBit->display.print(img_rotation2);
                uBit->sleep(speed);
                uBit->display.print(img_rotation3);
                uBit->sleep(speed);
            }
        }

        uBit->display.clear();
    }
}

