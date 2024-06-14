/* 
 * File:   main.c
 * Author: moham
 *
 * Created on June 13, 2024, 4:30 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "LEDM.h"
#include "WDGDRV.h"
#include "WDGM.h"
#define _XTAL_FREQ 8000000  // Define the clock frequency for delay functions

/*
 * 
 */
int main() {
    LEDM_Init();
    WDGDrv_Init();
    WDGM_Init();
    
    //superLoop
    while (1){
        LEDM_Manage();
     //   WDGM_MainFunction();
        __delay_ms(10);
    }
    
    return (EXIT_SUCCESS);
}

