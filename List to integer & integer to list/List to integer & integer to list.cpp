#include <iostream>
#include <vector>

using namespace std;

vector<int> PlusOne(vector<int>& digits) {
    int n = digits.size();
    int carry = 1;
    
    for (int i = n - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
    }
    
    if (carry > 0) {
        digits.insert(digits.begin(), carry);
    }
    
    return digits;
}

int main() {
    vector<int> digits = {4, 3, 2, 1};
    vector<int> result = PlusOne(digits);

    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
