#include<iostream>
#include<climits>
using namespace std;
int main(){

    // Given an array Arr of size N, print second largest distinct element from an array.

    int n ;
    cin>>n;

    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }

    int max = INT_MIN;

    for(int i = 0; i<n ; i++){
        if(arr[i] >= max){
            arr[i] = max;
        }
    }

    int index = 0;
    for(int i = 0; i<n ; i++){
        if(arr[i] == max){
            index = i;
        }
    }

     arr[index] = -1;

    for(int i =0; i<n ; i++){
        cout<<arr[i];
    }

    // for(int i = 0 ; i<n ; i++){
    //     cout<<arr[index];
    // }
    

    // int arr2[n];

    // for(int i =0; i<n; i++){

    // }

}