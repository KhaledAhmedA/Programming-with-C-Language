#include <stdio.h>

void main(void)
{
    float value;
    int amount;
    int coin_50,coin_25,coin_10,coin_5,coin_1;


    printf("Enter Amount: ");
    scanf("%f",&value);

    amount=value*100;

    printf("Amount of value is: %d",amount);

    coin_50=amount/50;
    coin_25=(amount-(50*coin_50))/25;
    coin_10=(amount-(50*coin_50)-(25*coin_25))/10;
    coin_5=(amount-(50*coin_50)-(25*coin_25)-(10*coin_10))/5;
    coin_1=(amount-(50*coin_50)-(25*coin_25)-(10*coin_10)-(5*coin_5))/1;

    printf("\nCoins 50 = %d\nCoins 25 = %d\nCoins 10 = %d\nCoins 5 = %d\nCoins 1 = %d",
           coin_50,coin_25,coin_10,coin_5,coin_1);
}
