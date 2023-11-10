//create a 4x5 pattern using asterisk.
#include<iostream>
using namespace std;

int main(){
    int i,j,rows,cols; //cols means columns
    cout<<"enter number of rows"<<endl;
    cin>>rows;
    cout<<"enter number of columns"<<endl;
    cin>>cols;
    for(i=1;i<=rows;i++){
        for(j=1;j<=cols;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}