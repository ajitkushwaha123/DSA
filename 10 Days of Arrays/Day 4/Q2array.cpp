#include<iostream>
#include<vector>
using namespace std;

void sortevenarray(vector<int> &v){
    int enen_count;
    for(int ele:v){
        if(ele%2 == 0){
            enen_count++;
        }
    }

    for(int i = 0 ; i< 6 ; i++){
        
    }
}

int main(){

    int n;
    cin>>n;

    vector <int> v;

    for(int i =0 ; i<n; i++){
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    sortevenarray(v);

    // for(int i =0 ; i<n ; i++){
    //     cout<<v[i];
    // }

}