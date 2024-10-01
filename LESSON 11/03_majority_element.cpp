#include <iostream>
#include <vector>
using namespace std;

int Majority_Element(const vector<int>& num) {
    int n = num.size();

    for (int val : num) {
        int freq = 0;
        for (int ele : num) {
            if (ele == val) {
                freq++;
            }
        }
        if (freq > (n / 2)) {
            return val;
        }
    }
    return -1; // Return -1 if no majority element found
}

int main() {
    vector<int> vec = {2, 2, 1, 1, 1}; // Directly define the vector
    int result = Majority_Element(vec);

    if (result != -1) {
        cout << "Majority Element: " << result << endl;
    } else {
        cout << "No Majority Element found" << endl;
    }

    return 0;
}
// nothing