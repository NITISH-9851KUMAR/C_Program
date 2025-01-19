#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,11,64,33,50};
    int search=6;
    bool flag =true;
    for(int i=0;i<5;i++){
        if(search==arr[i]){
            flag=false ;
            break;
        }
    }
    if(flag ==false ) cout<<"element are present ";
    else cout<<"not found";
    return 0;
}