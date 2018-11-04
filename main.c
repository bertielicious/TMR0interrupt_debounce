/*
 * File:   main.c
 * Author: Phil Glazzard
 *
 * Created on 01 November 2018, 20:17
 */


#include <xc.h>
#include "config.h"
#include <stdbool.h>
#include "main.h"
#include "init_ports.h"
#include "init_TMR0.h"
#include "state_machine.h"
void main(void) 
{
    init_ports();
    init_TMR0();
    
    button = NOT_PUSHED;    // never define these values in the .h config file, just their structure
    led = LED_OFF;
//    int current_state = OFF;
    
   
    
    while(1)
    {                                                                                                                       
      
    }
}
