//Given an array arr[ J of N integer numbers. The task is to rewrite the array by putting all multipliers at the end of the given array.

//Note : The order of the numbers which are not the multiplier of 10 should remain unaltered ,and similarly the order of the numbers which are the multiplier of IO should remain unaltered.

//For example: N= 9,
// arr[] = {10,12,5,40,30,7,5,9,10}

//You have to shift all the multipliers of 10 at the end of the array.
//Output: 12 5 7 5 9 10 10 40 30

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;
    vector<int> arr(N);
    
    for(int i = 0; i < N; i++){
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }





    vector<int> A1, A2;
    
    for(int i = 0; i < N; i++){
        if(arr[i] % 10 == 0){
            A1.push_back(arr[i]);
        }
        else{
            A2.push_back(arr[i]);
        }
    }

    int k = 0; // Index for the rearranged array


    // Copying the elements of A2 to the array
    for(int i = 0; i < A2.size(); i++) 
        arr[k++] = A2[i]; 
    

    // Copying the elements of A1 to the array
    for(int i = 0; i < A1.size(); i++)
        arr[k++] = A1[i]; 

    // Printing the array
    for(int i = 0; i < N; i++) 
        cout << arr[i] << " ";
    
    cout << endl;
    
    return 0;
}
