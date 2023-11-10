#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[strs.size() - 1];

    int n = min(first.size(), last.size());

    int prefixSize = 0;

    for (int i = 0; i < n; i++) {
        if (first[i] == last[i]) {
            prefixSize++;
        } else {
            break;
        }
    }
    return first.substr(0, prefixSize);
}

int main() {
    int size;
    cout << "Enter the number of strings: ";
    cin >> size;

    vector<string> strs(size);

    cout << "Enter the strings:\n";
    for (int i = 0; i < size; i++) {
        cin >> strs[i];
    }

    string result = longestCommonPrefix(strs);

    if (!result.empty()) {
        cout << "Longest Common Prefix: " << result << endl;
    } else {
        cout << "No common prefix found.\n";
    }

    return 0;
}
