#include<stdio.h>
#include<string.h>
int main(){
    typedef struct student{
        char name[20];
        int prn;
        int roolno;
        char grade;
    }student;
    student arr[4];
    strcpy(arr[0].name,"Aakash Kumar");
    arr[0].prn=31001;
    arr[0].roolno=31001;
    arr[0].grade='A';

    strcpy(arr[1].name,"Divyanshu kumar");
    arr[1].prn=31002;
    arr[1].roolno=2;
    arr[1].grade='C';
    
    strcpy(arr[2].name,"Ankush Kumar");
    arr[2].prn=5131003;
    arr[2].roolno=3;
    arr[2].grade='B';

    strcpy(arr[3].name,"Nitish Kumar");
    arr[3].prn=31004;
    arr[3].roolno=4;
    arr[3].grade='D';

    for(int i=0;i<4;i++){
    printf("%s\n",arr[i].name);
    printf("%d\n",arr[i].prn);
    printf("%d\n",arr[i].roolno);
    printf("%c\n",arr[i].grade);
    printf("\n");
    }


    return 0;
}