#include<iostream>
using namespace std;
int main(){
    int arr[]= {3,1,2,4,0,6};

    int targetSum = 10;

    int count = 0;

    for(int i=0 ; i<5; i++){
        for(int j = i+1 ; j<5 ; j++){
            for(int k = j+1 ; k<5 ; k++){
                if(arr[i] + arr[j] + arr[k] == targetSum){
                    count++;
                }
        }
        }
    }

    cout<<count;
}
