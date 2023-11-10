//take input from user and print inverted half pyramid pattern.

#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"enter number of rows"<<endl; //n=5
 cin>>n;

 for(int i=n;i>=1;i--){ //i>=1 because our row will run till theres only one star left. i denotes number of rows.
     for(int j=1;j<=i;j++){
         cout<<"*";
     }
     cout<<endl;
 }
}