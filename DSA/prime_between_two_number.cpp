//user has given two numbers. we will have to find out all the prime numbers between those two numbers.
#include<iostream>
using namespace std;

int main(){
    int n1,n2,i,j;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    cout<<"Prime numbers between "<<n1<<" and "<<n2<<" are: "<<endl;
    for(i=n1; i<=n2; i++){
        for(j=2; j<i; j++){ //j<i because if j=i, then it will always be divisible by itself.
            if(i%j==0){ 
                break; //to stop the loop if the number is not prime. and to come out of the  insider loop.
            }
        }
        if(j==i){
            cout<<i<<endl;
        }
    }
    return 0;
}