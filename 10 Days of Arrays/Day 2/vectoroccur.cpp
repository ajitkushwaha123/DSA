#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);

    for(int i =0 ; i<6; i++){
        cin>>v[i];
    }

    int occurance = 0;
    int x; 
    cin>>x;

    for(int i =0 ; i<6; i++){
        if (v[i] == x){
            occurance ++;
        }
    }

    cout<<occurance;

}
