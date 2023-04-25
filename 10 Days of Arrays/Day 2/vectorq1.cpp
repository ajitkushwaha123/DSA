#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);

    for (int i = 0 ; i<6; i++){
        cin>>v[i];
    }

    int x;
    cin>>x;

    int occurance = -1;

    for (int i = 0 ; i<6; i++){
        if(v[i] == x){
            occurance = i+1;
        }
    }
    cout<<occurance;
}