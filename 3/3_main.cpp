#include "mbed.h"


PwmOut PWM1(D6);


int main() {

    float duty = 0;
    float ADCdata[128];
    int i = 0;
    PWM1.period(0.1);
    while(1){
        while(duty<1){
            PWM1 = duty;
            duty += 0.1;
            //PWM1.period(0.1);
            if(i<128){
                ADCdata[i] = duty;
                pc.printf("%1.3f\r\n", ADCdata[i]);
                i++;
            }
        }
        while(duty>0){
            PWM1 = duty;
            duty -= 0.1;
            //PWM1.period(0.1);
            if(i<128){
                ADCdata[i] = duty;
                pc.printf("%1.3f\r\n", ADCdata[i]);
                i++;
            }
        }
    
    }
    // for (int j = 0; j < 128; j++){
    //     pc.printf("%1.3f\r\n", ADCdata[j]);
    // }

        // PWM1.period(0.01);

        // PWM1 = 0.5;

}