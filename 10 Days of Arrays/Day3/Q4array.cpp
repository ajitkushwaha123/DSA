#include<iostream>
using namespace std;
int main(){

    // Yeah i know it is not optimised at all but yeah based on critical thinking i 
    // proceed step by step to tackle this problem !

    int arr[6] = {1,10,3,7,5,6};
    
    int max= INT8_MIN;

    for(int i=0; i<6; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<max<<endl;

    int index = 0;

    for(int i=0 ; i<6 ; i++){
        if(max == arr[i]){
            index = i;
        }
    }

    cout<<index<<endl;

    arr[index] = -1;

     for(int i=0; i<6 ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int maximum = INT8_MIN;

    for(int i=0; i<6; i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
    }

    cout<<maximum;
}