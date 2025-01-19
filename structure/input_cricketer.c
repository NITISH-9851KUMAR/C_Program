#include<stdio.h>
#include<string.h>
int main(){
    typedef  struct cricketer{
        char firstname[15];
        char secondname[15];
        int age;
        int noOfmatches ;
        float average;
    }cricketer;
    cricketer arr[3];
    for(int i=0;i<3;i++){
        char str[15];
        scanf("%s",arr[i].firstname);
        scanf("%s",arr[i].secondname);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noOfmatches);
        scanf("%f",&arr[i].average);
    }
        for(int i=0;i<3;i++){
        printf("Name:%s %s\n",arr[i].firstname,arr[i].secondname);
        printf("Age:%d\n",arr[i].age);
        printf("NoOfMatches:%d\n",arr[i].noOfmatches);
        printf("Average:%f\n",arr[i].average);
        printf("\n");
    }



    return 0;
}