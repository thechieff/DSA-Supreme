#include <iostream>
using namespace std;

int main(){
    int input;
    cout<<"Enter the value of n"<<endl;
    cin>>input;

    for(int row=0; row<input; row++){
        for(int col=0; col<input; col++){
            if(row == 0 || col == 0 || row == input-1 || col == input-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}