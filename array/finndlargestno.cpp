#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,440,50,90};
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"the max element is :"<<max;
    return 0;
}