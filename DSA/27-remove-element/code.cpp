#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int i = 0;

    for (const int num : nums) {
        if (num != val) {
            nums[i++] = num;
        }
    }

    return i;
}

int main() {
    int n, val;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter the element to be removed: ";
    cin >> val;

    int newSize = removeElement(nums, val);

    cout << "Array after removing element " << val << ": ";
    for (int j = 0; j < newSize; ++j) {
        cout << nums[j] << " ";
    }

    return 0;
}
