#include<iostream>
#include<vector>
using namespace std;

void sortbinaryarray (vector<int> &v){
    int zero_count = 0;
    for( int ele:v){
        if(ele==0){
            zero_count++;
        }
    }

    // cout<<zero_count;
    for(int i:v){
        if(i<= zero_count){
            v[i] = 0;
        }

        else{
            v[i] = 1;
        }
    }
}

int main(){
    // Sorting an array with value 0 and 1 or binary you can say 

    int n;
    cin>>n;

    vector <int> v;
    int ele;

    for(int i =0; i<n ; i++){
        cin>>ele;
        v.push_back(ele);
    }

    sortbinaryarray(v);

    for(int i =0; i<n ; i++){
        cout<<v[i];
    }

    cout<<endl;

}