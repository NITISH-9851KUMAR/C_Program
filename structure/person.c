#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        int salary;
        int age;
        char name[50];
    }b,c;
    struct person a;
    //a.age=20;
    a.salary=15000;
    strcpy(a.name,"sanjay kumar");

    b.age=22;
    b.salary=12000;
    strcpy(b.name,"Amarjeet kumar"); 

    c.age=23;
    c.salary=1000;
    strcpy(c.name,"Rohit kumar");

    printf("%d\n",a.age);
    printf("%d\n",b.salary);
    printf("%s",c.name);
    
    return 0;
}