#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int  i =1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }

        int  j =1;
        while(j<=i){
            cout<<"*";
            j++;
        }

        int k =2;
        while(k<=i){
            cout<<"*";
            k++;
        }    

        cout<<endl;
        i++;
    }


    int q =1;
    while(q<=n){
        int spa = 2;
        while(spa<=q){
            cout<<" ";
            spa++;
        }

        int p = n;
        while(q<=p){
            cout<<"*";
            p--;
        }

        int r = n;
        while(q<r){
            cout<<"*";
            r--;
        }

        cout<<endl;
        q++;
    }
}