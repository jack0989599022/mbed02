#include "mbed.h"

AnalogOut Aout(DAC0_OUT);
int main(){
    while(1){
        Aout = 0.25; // 0.25*3.3v=0.825v
        wait(2);
        Aout = 0.5;
        wait(2);
        Aout = 0.75;
        wait(2);
    }
}