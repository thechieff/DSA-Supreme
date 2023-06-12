#include<iostream>
using namespace std;

int main(){

    int input;
    cout<<"Enter the value of input: ";
    cin>>input;
    for(int row=1; row<=input; row++){
        for(int col=row; col<=input; col++){
            if(row == 1 || col == row || col == input){
                cout<<col;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}