#include<iostream>
using namespace std;

int main(){

    int input;
    cout<<"Enter the value of input: ";
    cin>>input;
    for(int row=1; row<=input; row++){
        for(int col=1; col<=row; col++){
            if(row==input || col == 1 || col==row){
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