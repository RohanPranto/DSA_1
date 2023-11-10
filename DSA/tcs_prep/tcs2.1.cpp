//Approach 1

//Given an array arr[] Of N integers and a positive integer K.
//The task is to Divide the array into two sub array from right after the Kth position and slide the left sub array of K elements to the end.
// Example 1:
// Input:
// 5 is array element number
// {10, 20, 30, 40, 50}
// 2 is the value of K
// Output :
// 30 40 50 10 20


// Example 2:
// Input:
// 4 is array element number
// {10, 20, 30, 40}
// 1 is the value of K
// Output :
// 20 30 40 10

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value of K: ";
    cin >> k;
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n - k; i++)
    {
        arr[i] = arr[i + k];
    }
    for (int i = 0; i < k; i++)
    {
        arr[n - k + i] = temp[i];
    }
    cout << "The array after rotation is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}