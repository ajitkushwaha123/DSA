#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];

    for(int i= 0 ; i<n ; i++){
        cin>>A[i];
    }

    int X = 13;

    int count = 0;

    int result = 0;
        for(int i = 0 ; i<n ; i++){
            for(int j=i+1 ; j<n ; j++){
                for(int k = j+1 ; k<n ; k++){
                    if(A[i] + A[j] + A[k] == X){
                      result = result + 1;
                    }
                }
            }
        }
        
     cout<<result;
}
