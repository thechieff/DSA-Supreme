#include <iostream>
using namespace std;

int main(){
    int input;
    cout<<"Enter the input value"<<endl;
    cin>>input;

    for(int row=0; row<input; row++){
        for(int col=0; col<input-row; col++){
            if(col == 0 || col == input-row-1 || row == 0){
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
