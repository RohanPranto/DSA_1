// Approach 2

// Given an array arr[] Of N integers and a positive integer K.
// The task is to Divide the array into two sub array from right after the Kth position and slide the left sub array of K elements to the end.
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

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> arr(N);

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    int K;
    cin>>K;

    queue<int> que;
    for(int i=0;i<K;i++){
        que.push(arr[i]);
    }

    while(K--){
        int temp = que.front();
        que.pop();
        que.push(temp);
    }

    while(!que.empty()){
        cout<<que.front()<<" ";
        que.pop();
    }
    cout<<endl;

    return 0;
}