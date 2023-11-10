//take input from the user of rows and columns and print a hollow rectangle pattern.
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
            if(i==1 || i==rows || j==1 || j==cols){ //if i is 1 or i is equal to rows or j is 1 or j is equal to cols then print asterisk.
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}