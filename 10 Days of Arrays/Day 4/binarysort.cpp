#include<iostream>
#include<vector>
using namespace std;

void sortbinaryarray(vector<int> &v){
    int zero_count = 0;
    for (int ele:v){
        if(ele == 0){
            zero_count++;
        }
    }

    // for(int s:v){
    //     if(s<=zero_count){
    //         v[s] = 0;
    //     }else{
    //         v[s] = 1;
    //     }
    // }

    for(int i = 0 ; i<6 ; i++){
        if(i<zero_count){
            v[i] = 0;
        }else{
            v[i] = 1;
        }
    }
}

int main(){
    int n;
    cin>>n;

    vector<int> v;

    for(int i = 0 ; i<n ; i++){
        int ele;
        cin>>ele;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        

        v.push_back(ele);
    }

    sortbinaryarray(v);

    for(int i =0 ; i<n ; i++){
        cout<<v[i]<< " ";
    }

    cout<<endl;

    
}