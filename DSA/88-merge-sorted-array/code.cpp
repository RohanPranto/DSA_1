#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& array1, int m, vector<int>& array2, int n) {
    int i = m - 1;     
    int j = n - 1;      
    int k = m + n - 1;  

    while (j >= 0) {
        if (i >= 0 && array1[i] > array2[j]) {
            array1[k--] = array1[i--];
        } else {
            array1[k--] = array2[j--];
        }
    }
}

int main() {
    int m, n;

    cout << "Enter the size of array1: ";
    cin >> m;

    vector<int> array1(m);

    cout << "Enter the sorted elements for array1:\n";
    for (int i = 0; i < m; ++i) {
        cin >> array1[i];
    }

    cout << "Enter the size of array2: ";
    cin >> n;

    vector<int> array2(n);

    cout << "Enter the sorted elements for array2:\n";
    for (int i = 0; i < n; ++i) {
        cin >> array2[i];
    }

    merge(array1, m, array2, n);

    cout << "Merged array: ";
    for (int i = 0; i < m + n; ++i) {
        cout << array1[i] << " ";
    }

    return 0;
}
