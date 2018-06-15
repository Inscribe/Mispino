/*
  ************************************************************************
  *    pins_energia.h
  *
  *    Energia core files for MSP430 Mispigy
  *        Copyright (c) 2012 Robert Wessels. All right reserved.
  *
  *     Contribution: Inscribe Technovations
  *		Using Mispino Mispigy Board Pin numbers
  ***********************************************************************
  Derived from:
  pins_arduino.h - Pin definition functions for Arduino
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2007 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA
*/

#ifndef Pins_Energia_h
#define Pins_Energia_h
#ifndef BV
#define BV(x) (1 << (x))
#endif

#if defined(__MSP430_HAS_USCI_A0__) || defined(__MSP430_HAS_USCI_A1__)
static const uint8_t SS				= 3;  	/* P2.7 */
static const uint8_t SCK       		= 4;  	/* P3.2 */
static const uint8_t MOSI    		= 6;  	/* P3.0 */
static const uint8_t MISO    		= 5;  	/* P3.1 */
static const uint8_t TWISDA1  		= 14;  	/* P4.1 UCB1 */
static const uint8_t TWISCL1  		= 13;   /* P4.2 UCB1 */
static const uint8_t TWISDA0  		= 6;  	/* P3.0 UCB0 */
static const uint8_t TWISCL0  		= 5;  	/* P3.1 UCB0 */

static const uint8_t AUX_UARTTXD 	= 12;  	/* Transmit  Data (TXD) at P3.3 to mikrobus UCA0. Serial1*/
static const uint8_t AUX_UARTRXD 	= 11;  	/* Receive Data  (RXD) at P3.4 to mikrobus UCA0. Serial1*/
static const uint8_t DEBUG_UARTTXD 	= 30;  	/* Transmit Data (TXD) at P4.4 to connector UCA1. Serial*/
static const uint8_t DEBUG_UARTRXD 	= 32;  	/* Receive  Data (RXD) at P4.5 to connector UCA1. Serial*/

#define TWISDA0_SET_MODE (PORT_SELECTION0)
#define TWISCL0_SET_MODE (PORT_SELECTION0)
#define TWISDA1_SET_MODE (PORT_SELECTION0 | (PM_UCB1SDA << 8)) 
#define TWISCL1_SET_MODE (PORT_SELECTION0 | (PM_UCB1SCL << 8))
#define DEBUG_UARTRXD_SET_MODE (PORT_SELECTION0 | (PM_UCA1RXD << 8) | INPUT)
#define DEBUG_UARTTXD_SET_MODE (PORT_SELECTION0 | (PM_UCA1TXD << 8) | OUTPUT)
#define AUX_UARTRXD_SET_MODE (PORT_SELECTION0 | INPUT)
#define AUX_UARTTXD_SET_MODE (PORT_SELECTION0 | OUTPUT)
#define SPISCK_SET_MODE (PORT_SELECTION0)
#define SPIMOSI_SET_MODE (PORT_SELECTION0)
#define SPIMISO_SET_MODE (PORT_SELECTION0)
/* Define the default I2C settings */
#define DEFAULT_I2C 1
#define TWISDA TWISDA1
#define TWISCL TWISCL1
#define TWISDA_SET_MODE  TWISDA1_SET_MODE
#define TWISCL_SET_MODE  TWISCL1_SET_MODE 
#endif

#define DEBUG_UART_MODULE_OFFSET 0x40
#define AUX_UART_MODULE_OFFSET 0x0

#define SERIAL1_AVAILABLE 1

#if defined(__MSP430_HAS_USCI_A1__)
#define USE_USCI_A1
#endif

static const uint8_t A0  = 40; 	/* Not available on Mispigy header AVBUS (P6.0 150K/240K of VBUS) */
static const uint8_t A1  = 41; 	/* Not available on Mispigy header AVCC2ADC(P6.1 220K/220K of VCC) */
static const uint8_t A2  = 1;
static const uint8_t A3  = 2;
static const uint8_t A7  = 34; 
static const uint8_t A10 = 128+10;	// special. This is the internal temp sensor
static const uint8_t A11 = 128+11;	// special. This is Vcc/2

/* Pin names based on Mispino Mispigy Board */

static const uint8_t P6_2 = 1;
static const uint8_t P6_3 = 2;
static const uint8_t P2_7 = 3;
static const uint8_t P3_2 = 4;
static const uint8_t P3_1 = 5;
static const uint8_t P3_0 = 6;
/* 7 - 3.3V 8 - GND */
static const uint8_t P1_2 = 9;
static const uint8_t P1_3 = 10;
static const uint8_t P3_4 = 11;
static const uint8_t P3_3 = 12;
static const uint8_t P4_2 = 13;
static const uint8_t P4_1 = 14;
/* 15 - 5V IN 16 - GND */
/* 17 - 24 : SBW + JTAG  */
static const uint8_t PJ_0 = 18;
static const uint8_t PJ_1 = 20;
static const uint8_t PJ_2 = 22;
static const uint8_t PJ_3 = 24;
static const uint8_t P2_0 = 25;
/* 26 - GND */
static const uint8_t P2_1 = 27;
/* 28 - 3.3V OUT */
static const uint8_t P2_2 = 29;
static const uint8_t P4_4 = 30;			/* TXD AUX */
static const uint8_t P2_3 = 31;
static const uint8_t P4_5 = 32; 		/* RXD AUX */
static const uint8_t P2_4 = 33;
static const uint8_t P6_7 = 34; 		/* RTS AUX */
static const uint8_t P2_5 = 35;
static const uint8_t P1_7 = 36; 		/* CTS AUX */
/* PINS NOT ON HEADERS OF MISPIGY */
static const uint8_t P1_0 = 37; 		/* RED LED */
static const uint8_t P1_1 = 38; 		/* WHT LED */
static const uint8_t P4_7 = 39; 		/* BLU LED */
static const uint8_t RED_LED = 37;		/* RED LED */
static const uint8_t WHITE_LED = 38; 	/* WHT LED */
static const uint8_t BLUE_LED = 39; 	/* BLU LED */
static const uint8_t BUS_RESET = 2; 	/* BUS_RESET */
static const uint8_t AN = 1; 			/* Analog Input */
static const uint8_t PWM = 9; 			/* PWM Output */
static const uint8_t AVBUS = 40; 		/* AVBUS (P6.0 150K/240K of VBUS) */
static const uint8_t AVCC2ADC = 41; 	/* AVCC2ADC(P6.1 220K/220K of VCC) */
static const uint8_t TEMPSENSOR = 128 + 10; /* Special. This is the internal temp sensor */
static const uint8_t HALF_VCC  = 128 + 11;  /* Special. This is Vcc/2 */

#ifdef ARDUINO_MAIN
const uint16_t port_to_input[] = {
    NOT_A_PORT,
    (uint16_t) &P1IN,
    (uint16_t) &P2IN,
#ifdef __MSP430_HAS_PORT3_R__
    (uint16_t) &P3IN,
#endif
#ifdef __MSP430_HAS_PORT4_R__
    (uint16_t) &P4IN,
#endif
#ifdef __MSP430_HAS_PORT5_R__
    (uint16_t) &P5IN,
#endif
#ifdef __MSP430_HAS_PORT6_R__
    (uint16_t) &P6IN,
#endif
#ifdef __MSP430_HAS_PORT7_R__
    (uint16_t) &P7IN,
#endif
#ifdef __MSP430_HAS_PORT8_R__
    (uint16_t) &P8IN,
#endif
};

const uint16_t port_to_output[] = 
{
    NOT_A_PORT,
    (uint16_t) &P1OUT,
    (uint16_t) &P2OUT,
#ifdef __MSP430_HAS_PORT3_R__
    (uint16_t) &P3OUT,
#endif
#ifdef __MSP430_HAS_PORT4_R__
    (uint16_t) &P4OUT,
#endif
#ifdef __MSP430_HAS_PORT5_R__
    (uint16_t) &P5OUT,
#endif
#ifdef __MSP430_HAS_PORT6_R__
    (uint16_t) &P6OUT,
#endif
#ifdef __MSP430_HAS_PORT7_R__
    (uint16_t) &P7OUT,
#endif
#ifdef __MSP430_HAS_PORT8_R__
    (uint16_t) &P8OUT,
#endif
};

const uint16_t port_to_dir[] = 
{
    NOT_A_PORT,
    (uint16_t) &P1DIR,
    (uint16_t) &P2DIR,
#ifdef __MSP430_HAS_PORT3_R__
    (uint16_t) &P3DIR,
#endif
#ifdef __MSP430_HAS_PORT4_R__
    (uint16_t) &P4DIR,
#endif
#ifdef __MSP430_HAS_PORT5_R__
    (uint16_t) &P5DIR,
#endif
#ifdef __MSP430_HAS_PORT6_R__
    (uint16_t) &P6DIR,
#endif
#ifdef __MSP430_HAS_PORT7_R__
    (uint16_t) &P7DIR,
#endif
#ifdef __MSP430_HAS_PORT8_R__
    (uint16_t) &P8DIR,
#endif
};

const uint16_t port_to_ren[] = 
{
    NOT_A_PORT,
    (uint16_t) &P1REN,
    (uint16_t) &P2REN,
#ifdef __MSP430_HAS_PORT3_R__
    (uint16_t) &P3REN,
#endif
#ifdef __MSP430_HAS_PORT4_R__
    (uint16_t) &P4REN,
#endif
#ifdef __MSP430_HAS_PORT5_R__
    (uint16_t) &P5REN,
#endif
#ifdef __MSP430_HAS_PORT6_R__
    (uint16_t) &P6REN,
#endif
#ifdef __MSP430_HAS_PORT7_R__
    (uint16_t) &P7REN,
#endif
#ifdef __MSP430_HAS_PORT8_R__
    (uint16_t) &P8REN,
#endif
};

const uint16_t port_to_sel0[] = 
{  /* put this PxSEL register under the group of PxSEL0 */
    NOT_A_PORT,
    (uint16_t) &P1SEL,
    (uint16_t) &P2SEL,
#ifdef __MSP430_HAS_PORT3_R__
    (uint16_t) &P3SEL,
#endif
#ifdef __MSP430_HAS_PORT4_R__
    (uint16_t) &P4SEL,
#endif
#ifdef __MSP430_HAS_PORT5_R__
    (uint16_t) &P5SEL,
#endif
#ifdef __MSP430_HAS_PORT6_R__
    (uint16_t) &P6SEL,
#endif
#ifdef __MSP430_HAS_PORT7_R__
    (uint16_t) &P7SEL,
#endif
#ifdef __MSP430_HAS_PORT8_R__
    (uint16_t) &P8SEL,
#endif
};

const uint16_t port_to_pmap[] = 
{
    NOT_A_PORT,    /* PMAP starts at port P1 */
    NOT_A_PORT,
    NOT_A_PORT,
    NOT_A_PORT,
    (uint16_t) &P4MAP0,
    NOT_A_PORT,
    NOT_A_PORT,
    NOT_A_PORT,
    NOT_A_PORT,
};

const uint8_t digital_pin_to_timer[] = 
{
    NOT_ON_TIMER, 	/*  dummy */
    NOT_ON_TIMER, 	/*  1 - P6.2 */
    NOT_ON_TIMER, 	/*  2 - P6.3 */
    NOT_ON_TIMER, 	/*  3 - P2.7 */
    NOT_ON_TIMER, 	/*  4 - P3.2 */
    NOT_ON_TIMER, 	/*  5 - P3.1 */
    NOT_ON_TIMER, 	/*  6 - P3.0 */
    NOT_ON_TIMER, 	/*  7 - 3.3V */
    NOT_ON_TIMER, 	/*  8 - GND */
    T0A1, 			/*  9 - P1.2 */
    T0A2, 			/* 10 - P1.3 */
    NOT_ON_TIMER, 	/* 11 - P3.4 */
    NOT_ON_TIMER, 	/* 12 - P3.3 */
    NOT_ON_TIMER, 	/* 13 - P4.2 */
    NOT_ON_TIMER, 	/* 14 - P4.1 */
    NOT_ON_TIMER, 	/* 15 - 5V */
    NOT_ON_TIMER, 	/* 16 - GND */
    NOT_ON_TIMER, 	/* 17 - GND */
    NOT_ON_TIMER, 	/* 18 - TDO */
    NOT_ON_TIMER,	/* 19 - FET_VCC */
    NOT_ON_TIMER,	/* 20 - TCLK */
    NOT_ON_TIMER,	/* 21 - TST */
    NOT_ON_TIMER,	/* 22 - TMS */
    NOT_ON_TIMER,	/* 23 - RESET */
    NOT_ON_TIMER, 	/* 24 - TCK */
    T1A1,			/* 25 - P2.0 */
    NOT_ON_TIMER,	/* 26 - GND */
    T1A2,         	/* 27 - P2.1 */
    NOT_ON_TIMER, 	/* 28 - 3.3V OUT */
    NOT_ON_TIMER,	/* 29 - P2.2 */
    NOT_ON_TIMER,	/* 30 - P4.4 */
    T2A0,         	/* 31 - P2.3 */
    NOT_ON_TIMER, 	/* 32 - P4.5 */
    T2A1, 			/* 33 - P2.4 */
    NOT_ON_TIMER, 	/* 34 - P6.7 */
    T2A2, 			/* 35 - P2.5 */
    T1A0, 			/* 36 - P1.7 */
    NOT_ON_TIMER, 	/* 37 - P1.0 */
    T0A0, 			/* 38 - P1.1 */
    NOT_ON_TIMER, 	/* 39 - P4.7 */
    NOT_ON_TIMER, 	/* 40 - P6.0 */
    NOT_ON_TIMER, 	/* 41 - P6.1 */
    NOT_ON_TIMER, 	/* 42 - P6.1 */
    NOT_ON_TIMER, 	/* 43 - P6.1 */
    NOT_ON_TIMER, 	/* 44 - P6.1 */
    NOT_ON_TIMER, 	/* 45 - P6.1 */
    NOT_ON_TIMER, 	/* 46 - P6.1 */
};

const uint8_t digital_pin_to_port[] = 
{
    NOT_A_PIN, 	/* dummy */
    P6, 		/* 1 */
    P6,        	/* 2 */
    P2,        	/* 3 */
    P3,        	/* 4 */
    P3,        	/* 5 */
    P3,        	/* 6 */
    NOT_A_PIN,	/* 7 */
    NOT_A_PIN,	/* 8 */
    P1,        	/* 9 */
    P1,        	/* 10 */
    P3,        	/* 11 */
    P3,        	/* 12 */
    P4,        	/* 13 */
    P4,        	/* 14 */
    NOT_A_PIN,	/* 15 */
    NOT_A_PIN, 	/* 16 */
    NOT_A_PIN,	/* 17 */
    PJ,        	/* 18 */
    NOT_A_PIN,	/* 19 */
    PJ, 		/* 20 */
    NOT_A_PIN, 	/* 21 */
    PJ, 		/* 22 */
    NOT_A_PIN,	/* 23 */
    PJ,			/* 24 */
    P2,        	/* 25 */
    NOT_A_PIN,	/* 26 */
    P2,        	/* 27 */
    NOT_A_PIN,	/* 28 */
    P2,        	/* 29 */
    P4,        	/* 30 */
    P2,        	/* 31 */
    P4,        	/* 32 */
    P2,        	/* 33 */
    P6,        	/* 34 */
    P2,        	/* 35 */
    P1,        	/* 36 */
    P1,        	/* 37 */
    P1,        	/* 38 */
    P4,        	/* 39 */
    P6,        	/* 40 */
    P6,        	/* 41 */
    NOT_A_PIN,	/* 42 */
    NOT_A_PIN,	/* 43 */
    NOT_A_PIN,	/* 44 */
    NOT_A_PIN,	/* 45 */
    NOT_A_PIN,	/* 46 */
};

const uint8_t digital_pin_to_bit_mask[] = 
{
    NOT_A_PIN, 	/* 0,  pin count starts at 1 */
    BV(2), 		/* 1 */
    BV(3),     	/* 2 */
    BV(7),     	/* 3 */
    BV(2),     	/* 4 */
    BV(1),     	/* 5 */
    BV(0),     	/* 6 */
    NOT_A_PIN,	/* 7 */
    NOT_A_PIN,	/* 8 */
    BV(2),     	/* 9 */
    BV(3),     	/* 10 */
    BV(4),     	/* 11 */
    BV(3),     	/* 12 */
    BV(2),     	/* 13 */
    BV(1),     	/* 14 */
    NOT_A_PIN,	/* 15 */
    NOT_A_PIN, 	/* 16 */
    NOT_A_PIN,	/* 17 */
    BV(0),     	/* 18 */
    NOT_A_PIN,	/* 19 */
    BV(1), 		/* 20 */
    NOT_A_PIN, 	/* 21 */
    BV(2), 		/* 22 */
    NOT_A_PIN,	/* 23 */
    BV(3),     	/* 24 */
    BV(0),     	/* 25 */
    NOT_A_PIN,	/* 26 */
    BV(1),     	/* 27 */
    NOT_A_PIN,	/* 28 */
    BV(2),     	/* 29 */
    BV(4),     	/* 30 */
    BV(3),     	/* 31 */
    BV(5),     	/* 32 */
    BV(4),     	/* 33 */
    BV(7),     	/* 34 */
    BV(5),     	/* 35 */
    BV(7),     	/* 36 */
    BV(0),     	/* 37 */
    BV(1),     	/* 38 */
    BV(7),     	/* 39 */
    BV(0),     	/* 40 */
    BV(1),     	/* 41 */
    NOT_A_PIN,	/* 42 */
    NOT_A_PIN,	/* 43 */
    NOT_A_PIN,	/* 44 */
    NOT_A_PIN,	/* 45 */
    NOT_A_PIN,	/* 46 */
};

const uint32_t digital_pin_to_analog_in[] = 
{
        NOT_ON_ADC,   	/*  dummy   */
        2,     			/*  1 - P6.2*/
        3,              /*  2 - P6.3 */
        NOT_ON_ADC,     /*  3 */
        NOT_ON_ADC,     /*  4 */
        NOT_ON_ADC,     /*  5 */
        NOT_ON_ADC,   	/*  6 */
        NOT_ON_ADC,     /*  7 */
        NOT_ON_ADC,     /*  8 */
        NOT_ON_ADC,     /*  9 */
        NOT_ON_ADC,     /*  10 */
        NOT_ON_ADC,     /*  11 */
        NOT_ON_ADC,     /*  12 */
        NOT_ON_ADC,     /*  13 */
        NOT_ON_ADC,     /*  14 */
        NOT_ON_ADC,     /*  15 */
        NOT_ON_ADC,     /*  16 */
        NOT_ON_ADC,     /*  17 */
        NOT_ON_ADC,     /*  18 */
        NOT_ON_ADC,     /*  19 */
        NOT_ON_ADC,     /*  20 */
        NOT_ON_ADC,     /*  21 */
        NOT_ON_ADC,     /*  22 */
        NOT_ON_ADC,		/*  23 */
        NOT_ON_ADC,		/*  24 */
        NOT_ON_ADC,		/*  25 */
        NOT_ON_ADC,		/*  26 */
        NOT_ON_ADC,		/*  27 */
        NOT_ON_ADC,		/*  28 */
        NOT_ON_ADC,     /*  29 */
        NOT_ON_ADC,     /*  30 */
        NOT_ON_ADC,     /*  31 */
        NOT_ON_ADC,     /*  32 */
        NOT_ON_ADC,     /*  33 */
        7,     			/*  34 - P6.7 */
        NOT_ON_ADC,     /*  35 */
        NOT_ON_ADC,     /*  36 */
        NOT_ON_ADC,     /*  37 */
        NOT_ON_ADC,     /*  38 */
        NOT_ON_ADC,     /*  39 */
        0,      		/*  40 - P6.0 */
		1,				/*  41 - P6.1 */
        NOT_ON_ADC,     /*  42 */
        NOT_ON_ADC,     /*  43 */
        NOT_ON_ADC,     /*  44 */
        NOT_ON_ADC,     /*  45 */
        NOT_ON_ADC,     /*  46 */
};
#endif // #ifdef ARDUINO_MAIN
#endif // #ifndef Pins_Energia_h
