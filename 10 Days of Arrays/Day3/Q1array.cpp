#include<iostream>
using namespace std;
int main(){
    int arr[] = { 3,4,4,5,6};

    int x;
    cin>>x;

    int count =0;

    for(int i=0 ; i<5 ; i++){
        for(int j=i+1 ; j<5 ; j++){
            if(arr[i] + arr[j] == x){
                count++;
        }
        }
    }

    cout<<count;
}