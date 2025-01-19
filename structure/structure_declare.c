#include<stdio.h>
int main(){
    // declare of structure
    /* struct struct name{
        int datatype;
        char data type;
        float data type;
    };

    */
    struct pokemon {
        int attack;
        int speed;
        int hp;
        char tier;
    };/*
    struct pokemon {
        int attack;
        int speed;
        int hp;
        char tier;
    }book name;*/

    struct pokemon pikachu;
    printf("Enter attack of pikachu :");
    scanf("%d",&pikachu.attack);
    //pikachu.attack=50;
    pikachu.hp=60;
    pikachu.speed=190;
    pikachu.tier='A'; 
    struct pokemon charizard;
    charizard.attack=40;
    charizard.hp=47;
    charizard.speed=30;
    printf(" %d",pikachu.attack);
    return 0;
}