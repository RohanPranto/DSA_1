#include <iostream>
using namespace std;
int main() {
    // int A[10]= {2,4,6,8,10};

    // for(int i=0;i<10;i++){
    //     cout<<A[i]<<endl;
    // }
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    int A[n]={2,3,4,5,6};

    for (int x:A)
    {
        cout<<x<<endl;
    }


    cout<<"The size of the array is " << sizeof(A)<<endl; ;
    cout<<"The 2nd element is " << A[1]<<endl;

    // c code also works, here we go
    printf("The 3rd element is %d\n", A[2]);
    return 0;
}
