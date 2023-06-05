#include <iostream>
using namespace std;

int main(){
    int input;
    cout<<"Enter the value of n"<<endl;
    cin>>input;

    for(int row=0; row<input; row++){
        for(int col=0; col<input; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}