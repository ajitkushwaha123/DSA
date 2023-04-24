#include<iostream>
using namespace std;
int main(){
    int arr [] = {1,2,3,10,5};

    int n;
    cin>>n;

    int result = -1;
    for (int i = 0 ; i<5; i++){
        if ( arr[i] == n){
            result = i;
        }
    }

    cout<<result;
}