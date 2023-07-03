#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void wavePrintMatrix(vector<vector<int>> v){

    int row = v.size();
    cout<<"The matrix in wave form is: ";
    for(int i=0; i<v[0].size(); i++){
        if((i & 1) == 0){
            for(int j=0; j<row; j++){
                cout<<v[j][i]<<" ";
            }
        }
        else{
            for(int j=row-1; j>=0; j--){
                cout<<v[j][i]<<" ";
            }
        }
    }

}

int main(){

    vector<vector<int>> v {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

    wavePrintMatrix(v);

    return 0;
}
