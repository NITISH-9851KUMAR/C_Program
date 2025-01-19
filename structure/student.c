#include<stdio.h>
#include<string.h>
int main(){
    typedef struct student{
        char name[20];
        int prn;
        int age;
        char grade;
    }student;
    student arr[4];
    strcpy(arr[0].name,"Nitish kumar");
    arr[0].age=18;
    arr[0].grade='A';
    arr[0].prn=31004;
    
    strcpy(arr[1].name,"Ankush kumar");
    arr[1].age=19;
    arr[1].grade='B';
    arr[1].prn=31003;

    strcpy(arr[2].name,"Divyanshu Roy");
    arr[2].age=22;
    arr[2].grade='C';
    arr[2].prn=31002;

    strcpy(arr[3].name,"Akash kumar");
    arr[3].age=20;
    arr[3].grade='D';
    arr[3].prn=31001;
    for(int i=0;i<4;i++){
        printf("Name:%s\n",arr[i].name);
        printf("PRN:%d\n",arr[i].prn);
        printf("Grade:%c\n",arr[i].grade);
        printf("Age:%d\n",arr[i].age);
        printf("\n");
    }


    return 0;
}