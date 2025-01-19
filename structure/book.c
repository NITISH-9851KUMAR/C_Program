#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
        char name[50];
        float price;
        int noofpages;
    } book;
    struct book a;
    a.noofpages=100;
    a.price=411.5;
    strcpy(a.name,"c language book");
    printf("%d\n",a.noofpages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);
    struct book b;
    b.noofpages=1000;
    b.price=100;
    strcpy(b.name,"c langugae book");
    printf("%d\n",b.noofpages);
    printf("%f\n",b.price);
    printf("%s\n",b.name);
}