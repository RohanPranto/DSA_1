#include<iostream>
using namespace std;
int main(){
    int i=1;
    
    cout<<"value of i "<<i<<endl;
    cout<<"value of i++ "<<i++<<endl; // 1
    cout<<"value of updated i "<<i<<endl; // 2
    cout<<"value of ++i "<<++i<<endl; // 3
    cout<<"value of updated i "<<i<<endl; // 3
    
    return 0;
}