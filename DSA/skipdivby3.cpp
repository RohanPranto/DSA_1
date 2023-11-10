//we are given numbers 1 to 100. we have to print all the numbers except the numbers which are divisible by 3.
#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<100; i++){
        if(i%3==0){
            continue; //it will skip all numbers divisible by 3
        }
        cout<<i<<endl;
    }
}