#include<iostream>
using namespace std;

int main(){

    int n;
    
    cout<<"Enter any number you want sum of :";

    cin>>n;

    int arr[n];

    for (int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int sum =0;
    for (int i=0 ; i<n ; i++){
        sum += arr[i];
       
    }

           cout<<"sum : "<<sum;
}