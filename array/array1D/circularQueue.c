#include<stdio.h>
#define max 5
        int arr[max];
        int front=-1,rear=-1;
        int item,size=0;
        void push(){
                if(size>=max) printf("Queue is Overflow");
                else{
                        printf("Enter Element:");
                        scanf("%d",&item);

                        if(front==-1){
                            front=rear=0;
                            arr[0]=item;
                        }
                        else if(rear<max-1){
                            rear++;
                            arr[rear]=item;
                        }
                        else if(rear==max-1){
                            rear=0;
                            arr[0]=item;
                        }
                        size++;
                }
        }

        void pop(){
            if(size==0) printf("Circular Queue is Underflow");
            else{
                if(front<rear || front>rear){
                    item=arr[front];
                    arr[front]=0;
                    front++;
                    printf("%d is deleted from Circular Queue",item);
                }
                else if(front<max-1){
                    item=arr[front];
                    arr[front]=0;
                    front++;
                    printf("%d is deleted from Circular Queue",item);
                }
                else if(front==max-1){
                    item=arr[front];
                    arr[front]=0;
                    front=0;
                    printf("%d is deleted from Circular Queue",item);
                }
                size--;
            }

        }
        void display(){
            if(size==0) printf("Circular Queue is Underflow");
            else{
                printf("Circular Queue element :");
                if(front<=rear){
                    for(int i=front;i<=rear;i++)
                            printf("%d ",arr[i]);
                }
                else if(front>=rear){
                    for(int i=front;i<=max-1;i++)
                        printf("%d ",arr[i]);
                    for(int j=0;j<=rear;j++)
                        printf("%d ",arr[j]);
                }
            }
        }

        void displayArr(){
            if(size==0) printf("Circular Queue is Underflow");
            else{
                printf("Array Element :");
                for(int i=0;i<size;i++) 
                    printf("%d ",arr[i]);
            }
        }
void main(){
    int choice;
     do{
        printf("\n\n1.Push operation ");
        printf("\n2.Pop operation");
        printf("\n3.Display Queue Element ");
        printf("\n4.Display Array Element ");
        printf("\n5.Exit");
        printf("\n\nEnter Your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
            break;

            case 2:
                pop();
            break;

            case 3:
                display();
            break;

            case 4:
                displayArr();
            break;
        }
     }while(choice!=5);


}