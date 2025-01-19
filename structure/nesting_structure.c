#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendarypokemon
    {
        pokemon normal;
        char ability[10];
    } legendarypokemon;

    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    }godpokemon;
    godpokemon arceus;
    arceus.specialattack=300;
    arceus.legend.normal.attack=500;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability, "pressure");
    mewtwo.normal.hp = 150;
    mewtwo.normal.attack=180;
    strcpy(mewtwo.normal.name,"Mewtwo");
    mewtwo.normal.speed=180;
    mewtwo.normal.tier='A'; 
    return 0;
}