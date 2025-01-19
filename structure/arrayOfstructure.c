// declare 
// struct dataname arr[i]{
//    code 
//   }

#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed ;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    pokemon arr[3]; // arr[0],arr[1],...arr[9]
    arr[0].attack=50;
    arr[0].hp=100;
    arr[0].speed=30;
    arr[0].tier='A';
    strcpy(arr[0].name,"Charizard");
   
    arr[1].attack=150;
    arr[1].hp=110;
    arr[1].speed=130;
    arr[1].tier='B';
    strcpy(arr[1].name,"pikachu");

    arr[2].attack=250;
    arr[2].hp=200;
    arr[2].speed=50;
    arr[2].tier='C';
    strcpy(arr[2].name,"Mewtwo");
    
    for(int i=0;i<3;i++){
        printf("Name:%s\n",arr[i].name);
        printf("Attack:%d\n",arr[i].attack);
        printf("Hp:%d\n",arr[i].hp);
        printf("Speed:%d\n",arr[i].speed);
        printf("Tier:%c\n",arr[i].tier);
        
    }

    
    return 0;
}