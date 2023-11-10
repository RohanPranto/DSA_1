//print a pyramid but on the first row, there will be a single star and on the last row, there will be n stars.and on the first row, the star will be at the last position, meaning, it will start with spaces. the last row will be all stars.

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter number of rows"<<endl;
    cin>>rows;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(j<=rows-i){
                cout<<"  "; //added a space after to beautify the pattern.
            }
            else{
                cout<<"* "; //added a space after to beautify the pattern.
            }
        }
        cout<<endl;
    }
}