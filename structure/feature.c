#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        int tier;
        char name[15];
    }pokemon;
    pokemon a,b,c;
    a.attack=100;
    a.hp=45;
    a.speed=70;
    a.tier='A';
    strcpy(a.name,"venusaur");

    b=a;// isse a ki sari propery b me a jayegi
    b.attack=200;
    printf("%d",a.attack);
    return 0;
}