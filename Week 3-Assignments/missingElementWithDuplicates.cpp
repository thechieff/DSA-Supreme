#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void missingElement(int arr[], int n){

    cout<<"The missing elements are: ";
    for(int i=0; i<n; i++){
        int index = abs(arr[i]);
        if(arr[index-1] > 0){
            arr[index-1] *= -1;
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            cout<<i+1<<" ";
        }
    }

}

int main(){

    int n=5;
    int arr[] = {2,1,6,3,5,2,2,3,2,3};
    missingElement(arr, n);
    return 0;
}
