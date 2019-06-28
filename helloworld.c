/*********************************************************************
SSD1306 top file for Microblaze.
Author : Nikhil Garg
Created on: 21-Jun-2019
*********************************************************************/

#include <stdio.h>
#include "platform.h"
#include "xil_printf.h"
#include "xparameters.h"
#include "xiic_l.h"
#include "stdio.h"
#include "xbasic_types.h"
#include "xiic.h"
#include "xio.h"
#include "xuartlite_l.h"
#include "platform.h"
#include <stdio.h>
#include "xil_cache.h"
#include <stdlib.h>
#include "xtmrctr.h"
#include "ssd1306_i2c.h"


/************************** Constant Definitions *****************************/

/*
 * The following constants map to the XPAR parameters created in the
 * xparameters.h file. They are defined here such that a user can easily
 * change all the needed parameters in one place.
 */
#define IIC_BASE_ADDRESS	XPAR_IIC_0_BASEADDR


/*
 * The following constant defines the address of the IIC
 * OLED device on the IIC bus.
 */
#define OLED_ADDRESS_command   0x3C /* The actual address is 0x3C */ //“b0111100” or “b0111101” 0x3C or 0x3D



int main(void)
{
	    init_platform();

	    print("Hello World\n\r");


	    ssd1306_begin(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);
	    //ssd1306_fillRect(10,10,10,10,WHITE);
	    //ssd1306_clearDisplay();
	    ssd1306_drawChar(1, 1, 'N',WHITE, 1);
	    ssd1306_drawChar(5, 2, 'I',WHITE, 1);
	    ssd1306_drawChar(10, 3, 'K',WHITE, 1);
	    ssd1306_drawChar(15, 4, 'H',WHITE, 1);
	    ssd1306_drawChar(20, 5, 'I',WHITE, 1);
	    ssd1306_drawChar(25, 6, 'L',WHITE, 1);
	    //ssd1306_clearDisplay();

	print("Initialized\n\r");

	ssd1306_display(); //Adafruit logo is visible
	print("Initialized\n\r");
	 cleanup_platform();


	 return 0;
}

