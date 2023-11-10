// Nehas mom only allows her to go out on odd days. Neha gets pocket money which she uses outside. so its obvious, when her pocket money will get over, she wont be able to go outside. so she wants to know on which day she will not be able to go outside. so help her to find out. 

#include<iostream>
using namespace std;
int main() {
    int pocketMoney=3000;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            continue; //it skips the iteration, ignores the iteration. here it will skip the even dates.
        }
        if(pocketMoney==0){
            cout<<"Out of money on day "<<date<<endl;
            break; //it breaks the loop. here it will break the loop when pocket money becomes 0.
        }
        cout<<date<<" May.Go out today"<<endl;
        pocketMoney=pocketMoney-300;
    }
}