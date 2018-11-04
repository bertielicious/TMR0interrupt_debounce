#include <xc.h>
void init_TMR0(void)
{
    OPTION_REGbits.T0CS = 0;      // select 8-bit timer mode
    OPTION_REGbits.PSA = 0;         // enable pre-scaler
    OPTION_REGbits.PS2 = 0;         // set pre-scaler to 1:256
    OPTION_REGbits.PS1 = 1;         // this gives a time to overflow of 256us
    OPTION_REGbits.PS0 = 1;         // 1MHz driving freq from system clock 256us
    TMR0 = 0x00;                    // TMR0 overflows every 65ms
    INTCONbits.GIE = 1;             // enable global interrupts
    INTCONbits.T0IE = 1;          // enable TMR0 interrupts
    INTCONbits.T0IF = 0;          // clear TMR0 interrupt flag to enable further interrupts
}
