#include<iostream>
using namespace std;
int main(){

    int arr[5] = {1,2,3,4,5};

    int k =2; 

    int ansarray [5] ;

    for(int i=0; i<5; i++){
        if(k == 5){
            ansarray[i+2]  = arr[i + k];
        }
    }

    for(int i=0; i<5; i++){
       cout<<ansarray[i];
    }



}