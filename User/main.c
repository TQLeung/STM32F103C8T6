#include "stm32f10x.h"                // Device header

#define DELAY 5000
void delay(int);
int main(void){
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
    GPIO_InitTypeDef led;
    led.GPIO_Mode = GPIO_Mode_Out_PP;
    led.GPIO_Pin = GPIO_Pin_13;
    led.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_Init(GPIOC, &led);
//    GPIO_SetBits(GPIOC, GPIO_Pin_13);
//    GPIO_ResetBits(GPIOC, GPIO_Pin_13);
    while(1){
        GPIO_ResetBits(GPIOC, GPIO_Pin_13);
        delay(DELAY);
        GPIO_SetBits(GPIOC, GPIO_Pin_13);
        delay(DELAY);
    }
}

void delay(int d){
    for(int i=0; i<d; i++){
        for(int j=0; j<d; j++){
            
        }
    }
}
