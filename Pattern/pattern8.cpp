#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n ;

    int i =1;
    while(i<=n){
        int space = 2;
        while(space<=i){
            cout<<" ";
            space++;
        }

        int j = n;
        while(i<=j){
            cout<<"*";
            j--;
        }

        int k = n;
        while(i<k){
            cout<<"*";
            k--;
        }

        cout<<endl;
        i++;
    }
}