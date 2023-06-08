#include <iostream>
using namespace std;

int main(){
    int input;
    cout<<"Enter the input value"<<endl;
    cin>>input;

    for(int row=0; row<input; row++){
        int k=0;
        for(int col=0; col<(2*input)-1; col++){
            if(col < input-row-1){
                cout<<" ";
            }
            else if (k < 2*row+1){
                if(k == 0 || k == 2*row || row == input-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                k++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
