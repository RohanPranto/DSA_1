#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    unordered_set<int> uniqueSet;
    int i = 0;

    for (const int num : nums) {
        if (uniqueSet.find(num) == uniqueSet.end()) {
            nums[i++] = num;
            uniqueSet.insert(num);
        }
    }

    return i;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int newSize = removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int j = 0; j < newSize; ++j) {
        cout << nums[j] << " ";
    }

    return 0;
}
