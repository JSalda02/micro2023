/*Codigo realizado por Juan José Saldarriaga Murillo - 260211001
 * Ing Biomédica - 6to semestre*/

#include <xc.h>
#include "config.h"
#include "DISPLAY_7_SEG.h"

#define espera 100
#define display1 LATAbits.LATA2
#define display2 LATAbits.LATA1
#define display3 LATAbits.LATA0

char tmultiplex = 5;
char contador=0, contador2=0, led=0, Nibble1=0, Nibble2=0, unidad=0, decena=0,
        centena=0, numero=0, residuo=0;

void Secuencia01(void) {
    LATC = 0x0F;
    __delay_ms(espera);
    LATC = 0xF0;
    __delay_ms(espera);
}
void Secuencia02(void) {
    LATC = 0b00000001;
    __delay_ms(espera);
    LATC = 0b00000010;
    __delay_ms(espera);
    LATC = 0b00000100;
    __delay_ms(espera);
    LATC = 0b00001000;
    __delay_ms(espera);
    LATC = 0b00010000;
    __delay_ms(espera);
    LATC = 0b00100000;
    __delay_ms(espera);
    LATC = 0b01000000;
    __delay_ms(espera);
    LATC = 0b10000000;
    __delay_ms(espera);
    LATC = 0b01000000;
    __delay_ms(espera);
    LATC = 0b00100000;
    __delay_ms(espera);
    LATC = 0b00010000;
    __delay_ms(espera);
    LATC = 0b00001000;
    __delay_ms(espera);
    LATC = 0b00000100;
    __delay_ms(espera);
    LATC = 0b00000010;
    __delay_ms(espera);
    LATC = 0b00000001;
    __delay_ms(espera);
}
void Secuencia03(void) {
    LATC = 0b10000001;
    __delay_ms(espera);
    LATC = 0b11000011;
    __delay_ms(espera);
    LATC = 0b11100111;
    __delay_ms(espera);
    LATC = 0b11111111;
    __delay_ms(espera);
}
void Secuencia04(void) {
    LATC = 0b11111111;
    __delay_ms(espera);
    LATC = 0b11100111;
    __delay_ms(espera);
    LATC = 0b11000011;
    __delay_ms(espera);
    LATC = 0b10000001;
    __delay_ms(espera);

}
void Secuencia05(void) {
    LATC = 0xFF;
    __delay_ms(espera);
    LATC = 0x0F;
    __delay_ms(espera);
}
void Secuencia06(void) {
    LATC = 0b00000001;
    __delay_ms(espera);
    LATC = 0b00000010;
    __delay_ms(espera);
    LATC = 0b00000100;
    __delay_ms(espera);
    LATC = 0b00001000;
    __delay_ms(espera);
    LATC = 0b00010000;
    __delay_ms(espera);
    LATC = 0b00100000;
    __delay_ms(espera);
    LATC = 0b01000000;
    __delay_ms(espera);
    LATC = 0b10000000;
    __delay_ms(espera);
}
void Secuencia07(void) {
    LATC = 0b10000000;
    __delay_ms(espera);
    LATC = 0b01000000;
    __delay_ms(espera);
    LATC = 0b00100000;
    __delay_ms(espera);
    LATC = 0b00010000;
    __delay_ms(espera);
    LATC = 0b00001000;
    __delay_ms(espera);
    LATC = 0b00000100;
    __delay_ms(espera);
    LATC = 0b00000010;
    __delay_ms(espera);
    LATC = 0b00000001;
    __delay_ms(espera);
}
void Secuencia08(void) {
    LATC = 0b00000001;
    __delay_ms(espera);
    LATC = 0b00000011;
    __delay_ms(espera);
    LATC = 0b00000111;
    __delay_ms(espera);
    LATC = 0b00001111;
    __delay_ms(espera);
    LATC = 0b00011111;
    __delay_ms(espera);
    LATC = 0b00111111;
    __delay_ms(espera);
    LATC = 0b01111111;
    __delay_ms(espera);
    LATC = 0b11111111;
    __delay_ms(espera);
    LATC = 0b00000000;
    __delay_ms(espera);
}
void Secuencia09(void) {
    LATC = 0b10000000;
    __delay_ms(espera);
    LATC = 0b11000000;
    __delay_ms(espera);
    LATC = 0b11100000;
    __delay_ms(espera);
    LATC = 0b11110000;
    __delay_ms(espera);
    LATC = 0b11111000;
    __delay_ms(espera);
    LATC = 0b11111100;
    __delay_ms(espera);
    LATC = 0b11111110;
    __delay_ms(espera);
    LATC = 0b11111111;
    __delay_ms(espera);
    LATC = 0b00000000;
    __delay_ms(espera);
}

void punto_1(){
    LATD = 0b00000001;
    __delay_ms(espera);
    LATD = 0b00000010;
    __delay_ms(espera);
    LATD = 0b00000100;
    __delay_ms(espera);
    LATD = 0b00001000;
    __delay_ms(espera);
    LATD = 0b00010000;
    __delay_ms(espera);
    LATD = 0b00100000;
    __delay_ms(espera);
    LATD = 0b01000000;
    __delay_ms(espera);
    LATD = 0b10000000;
    __delay_ms(espera);
    LATD = 0b01000000;
    __delay_ms(espera);
    LATD = 0b00100000;
    __delay_ms(espera);
    LATD = 0b00010000;
    __delay_ms(espera);
    LATD = 0b00001000;
    __delay_ms(espera);
    LATD = 0b00000100;
    __delay_ms(espera);
    LATD = 0b00000010;
    __delay_ms(espera);
    LATD = 0b00000001;
    __delay_ms(espera);
}
void punto_2(){
    for (char i=0;i<8;i++){
        LATD |= (1<<i);
        LATD &= ~(1<<(i-1));
        __delay_ms(espera);
    }
    for (signed char i=6;i>-1;i--){
        LATD |= (1<<i);
        LATD &= ~(1<<(i+1));
        __delay_ms(espera);
    }
}
/*Considero que el metodo implementando for es más reducido a nivel de
programación, sin embargo es más complejo el cómo llegar a la conclusión lógica
que permita realizar el códgo*/
void punto_3(){
    if (PORTAbits.RA0 == 1){
        LATAbits.LATA2 = 1;
    }else LATAbits.LATA2 = 0;
    if (PORTAbits.RA1 == 1){
        LATAbits.LATA3 = 1;
    }else LATAbits.LATA3 = 0;
}
/*El metodo utilizado para proteger el circuito de culquier tipo de riesgo
eléctrico si se quisiera montar la práctica en físico fue utilizar un puente de
transistores para que solo con la corriente que brinda el microcontrolador se
pueda controlar el paso o no de corriente para la activación de alguno de los
dos terminales del motor sin que sufra algún daño.*/
void punto_4(){
    while (1){
        if (PORTBbits.RB0==0){
            while (PORTBbits.RB0==0);
            contador++;
        }
        if (contador==3){
            LATBbits.LATB7 ^= 1;
            contador=0;
        }
        __delay_ms(100);
    }
}
void punto_5(){
    TRISC = 0x00;
    ANSELB = 0x00;
    TRISB = 0xFF;

    char val_sec = (PORTB & 0xF0); 

    switch (val_sec) {
        case 1: Secuencia01();
            break;
        case 2: Secuencia02();
            break;
        case 3: Secuencia03();
            break;
        case 4: Secuencia04();
            break;
        case 5: Secuencia05();
            break;
        case 6: Secuencia06();
            break;
        case 7: Secuencia07();
            break;
        case 8: Secuencia08();
            break;
        case 9: Secuencia09();
            break;
        default:
            break;
    }
    __delay_ms(100);
}
void punto_6(){
    TRISA = 0x00;
    ANSELA = 0x00;

    LATAbits.LATA0 = 0;
    LATAbits.LATA1 = 1;

    LATAbits.LATA2 = 1;
    LATAbits.LATA3 = 0;

    LATAbits.LATA4 = 1;
    LATAbits.LATA5 = 0;

    __delay_ms(2000);

    LATAbits.LATA0 = 1;
    LATAbits.LATA1 = 0;

    LATAbits.LATA2 = 0;
    LATAbits.LATA3 = 1;

    LATAbits.LATA4 = 1;
    LATAbits.LATA5 = 0;

    __delay_ms(2000);

    LATAbits.LATA0 = 1;
    LATAbits.LATA1 = 0;

    LATAbits.LATA2 = 1;
    LATAbits.LATA3 = 0;

    LATAbits.LATA4 = 0;
    LATAbits.LATA5 = 1;

    __delay_ms(2000);
}
/*void punto_7(){
    ANSELD = 0x00;
    ANSELB = 0x00;
    TRISB = 0x0F;

    display_init();

    if (PORTBbits.RB0 == 1 && PORTBbits.RB1 == 0) {
        display_cc(contador);
        display_ac(contador2);
        contador++;
        if (contador > 9) {
            contador = 0;
            contador2++;
        }
        if (contador2 > 9) {
            contador = 9;
            contador2 = 9;
        }
        if (contador2 == 9 && contador == 9) {
            display_cc(9);
            display_ac(9);
        }
    }

    if (PORTBbits.RB0 == 0 && PORTBbits.RB1 == 1) {
        display_cc(contador);
        display_ac(contador2);
        contador--;
        if (contador < 0) {
            contador = 9;
            contador2--;
        }
        if (contador2 < 0) {
            contador = 0;
            contador2 = 0;
        }
        if (contador2 == 0 && contador == 0) {
            display_cc(0);
            display_ac(0);
        }
    }

    if (PORTBbits.RB0 == 1 && PORTBbits.RB1 == 1) {
        display_cc(contador);
        display_ac(contador2);
    }
    
    if (PORTBbits.RB0 == 0 && PORTBbits.RB1 == 0 && PORTBbits.RB2) {

        display_cc(contador);
        display_ac(contador2);

        contador = contador + 2;

        if (contador > 9) {
            contador2++;
            if (contador == 10) {
                contador = 0;
            }
            if (contador == 11) {
                contador = 1;
            }
        }
        if (contador2 > 9) {
            contador = 9;
            contador2 = 9;
        }

        if (contador2 == 9 && contador >= 9) {
            display_cc(9);
            contador2(9);
        }
    }

    if (PORTBbits.RB0 == 0 && PORTBbits.RB1 == 0 && PORTBbits.RB3) {

        display_cc(contador);
        display_ac(contador2);

        contador = contador - 2;

        if (contador < 0) {
            contador2--;
            if (contador == -1) {
                contador = 9;
            }
            if (contador == -2) {
                contador = 8;
            }
        }
        if (contador2 < 0) {
            contador = 0;
            contador2 = 0;
        }
        if (contador2 == 0 && contador == 0) {
            display_cc(0);
            display_ac(0);
        }
    }
    __delay_ms(500);
}*/
void punto_8(){
    
}
void punto_9(){
#define dir_btn1 TRISCbits.TRISC0
#define dir_btn2 TRISCbits.TRISC0
#define dir_btn3 TRISCbits.TRISC2
#define dir_btn4 TRISCbits.TRISC3

#define btn1 PORTCbits.RC0
#define btn2 PORTCbits.RC1
#define btn3 PORTCbits.RC2
#define btn4 PORTCbits.RC3

#define dir_led1 TRISDbits.TRISD0
#define dir_led2 TRISDbits.TRISD1
#define dir_led3 TRISDbits.TRISD2

#define led1 LATDbits.LATD0
#define led2 LATDbits.LATD1
#define led3 LATDbits.LATD2    

    ANSELD = 0x00;

    dir_btn1 = 1;
    dir_btn2 = 1;
    dir_btn3 = 1;
    dir_btn4 = 1;

    dir_led1 = 0;
    dir_led2 = 0;
    dir_led3 = 0;

    led1 = 0;
    led2 = 0;
    led3 = 0;

    while (1) {
        if (btn1 == 0 && led1 == 0 && led2 == 0 && led3 == 0) {
            led1 = 1;
            led2 = 0;
            led3 = 0;
        }
        if (btn2 == 0 && led1 == 0 && led2 == 0 && led3 == 0) {
            led1 = 0;
            led2 = 1;
            led3 = 0;
        }
        if (btn3 == 0 && led1 == 0 && led2 == 0 && led3 == 0) {
            led1 = 0;
            led2 = 0;
            led3 = 1;
        }
        if (btn4 == 0) {
            led1 = 0;
            led2 = 0;
            led3 = 0;
        }
    }
}
void punto_10(){
    TRISC = 0x00;
    TRISD = 0x0F;
    ANSELD = 0x00;

    if (PORTDbits.RD0 == 0) {
        LATCbits.LATC0 = ~PORTCbits.RC0;
        __delay_ms(100);
    }
    if (PORTDbits.RD1 == 0) {
        LATCbits.LATC0 = ~PORTCbits.RC0;
        __delay_ms(100);
    }
}
void punto_11(){
    
}
void punto_12_13(){
    DIR_segA = OUT;
    DIR_segB = OUT;
    DIR_segC = OUT;
    DIR_segD = OUT;
    DIR_segE = OUT;
    DIR_segF = OUT;
    DIR_segG = OUT;

    TRISA = 0x00;
    TRISB = 0xFF;
    TRISD = 0xFF;

    ANSELA = 0x00;
    ANSELB = 0x00;
    ANSELD = 0x00;

    display1 = 1;
    display2 = 1;
    display3 = 1;

    Nibble1 = (PORTD & 0x0F);
    Nibble2 = ((PORTD & 0xF0) >> 4);

    if (PORTBbits.RB0 == 1) {
        numero = Nibble1 + Nibble2;

        centena = numero / 100;
        residuo = numero % 100;

        decena = residuo / 10;
        unidad = residuo % 10;

        display1 = 0;
        display2 = 1;
        display3 = 1;
        display_cc(unidad);
        __delay_ms(tmultiplex);

        display1 = 1;
        display2 = 0;
        display3 = 1;
        display_cc(decena);
        __delay_ms(tmultiplex);

        display1 = 1;
        display2 = 1;
        display3 = 0;
        display_cc(centena);
        __delay_ms(tmultiplex);

    }

    if (PORTBbits.RB1 == 1) {
        numero = Nibble1 - Nibble2;

        centena = numero / 100;
        residuo = numero % 100;

        decena = residuo / 10;
        unidad = residuo % 10;

        display1 = 0;
        display2 = 1;
        display3 = 1;
        display_cc(unidad);
        __delay_ms(tmultiplex);

        display1 = 1;
        display2 = 0;
        display3 = 1;
        display_cc(decena);
        __delay_ms(tmultiplex);

        display1 = 1;
        display2 = 1;
        display3 = 0;
        display_cc(centena);
        __delay_ms(tmultiplex);

    }

    if (PORTBbits.RB2 == 1) {
        numero = Nibble1 * Nibble2;

        centena = numero / 100;
        residuo = numero % 100;

        decena = residuo / 10;
        unidad = residuo % 10;

        display1 = 0;
        display2 = 1;
        display3 = 1;
        display_cc(unidad);
        __delay_ms(tmultiplex);

        display1 = 1;
        display2 = 0;
        display3 = 1;
        display_cc(decena);
        __delay_ms(tmultiplex);

        display1 = 1;
        display2 = 1;
        display3 = 0;
        display_cc(centena);
        __delay_ms(tmultiplex);

    }

    if (PORTBbits.RB3 == 1) {
        numero = Nibble1 / Nibble2;

        centena = numero / 100;
        residuo = numero % 100;

        decena = residuo / 10;
        unidad = residuo % 10;

        display1 = 0;
        display2 = 1;
        display3 = 1;
        display_cc(unidad);
        __delay_ms(tmultiplex);

        display1 = 1;
        display2 = 0;
        display3 = 1;
        display_cc(decena);
        __delay_ms(tmultiplex);

        display1 = 1;
        display2 = 1;
        display3 = 0;
        display_cc(centena);
        __delay_ms(tmultiplex);
    }
}

void main(void){
    ANSELAbits.ANSA0 = 0;
    ANSELAbits.ANSA1 = 0;
    ANSELBbits.ANSB0 = 0;
    
    TRISAbits.TRISA0 = 1;
    TRISAbits.TRISA1 = 1;
    TRISAbits.TRISA2 = 0;
    TRISAbits.TRISA3 = 0;
    TRISBbits.TRISB0 = 1;
    TRISBbits.TRISB7 = 0;
    TRISD = 0x00;
    
    LATAbits.LATA0 = 0;
    LATAbits.LATA1 = 0;
    LATBbits.LATB0 = 1;
    LATBbits.LATB7 = 0;
    LATD = 0x00;
    
    while(1){
        //punto_1();
        //punto_2();
        punto_3();
        //punto_4();
        //punto_5();
        //punto_6();
        //punto_7();
        //punto_8();
        //punto_9();
        //punto_10();
        //punto_11();
        //punto_12_13();
    }
    return;
}