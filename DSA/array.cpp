#include <iostream>
using namespace std;
int main() {
    int A[]= {2,4,6,8,10};
    cout<<"The size of the array is " << sizeof(A)<<endl; ;
    cout<<"The 2nd element is " << A[1]<<endl;

    // c code also works, here we go
    printf("The 3rd element is %d\n", A[2]);
    return 0;
}
