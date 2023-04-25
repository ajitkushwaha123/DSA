#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;

    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];

    for (int i=0; i<n ; i++){
        cin>>arr[i];
    }



    int x; 

    cout<<"Enter value of x : ";
    cin>>x;

    int occurance = 0;

    for (int i=1; i<n ; i++){
        if (arr[i] == x){
            occurance = occurance + 1;
        }
    }

    cout<<occurance;
}