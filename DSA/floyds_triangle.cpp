//print floys triangle, like this
//  1
//  2 3
//  4 5 6
//  7 8 9 10
//  11 12 13 14 15

#include<iostream>
using namespace std;

int main(){
    int i,j,rows,count=1;
    cout<<"enter number of rows"<<endl;
    cin>>rows;

    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}