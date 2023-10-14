#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool allEqual = true;
    for (int i = 1; i < N; i++) {
        if (A[i] != A[0]) {
            allEqual = false;
            break;
        }
    }

    if (allEqual) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

-------------------------
| Prepared by -         |
| Himel Sarder          |
| Dept. of CSE, BSFMSTU |
-------------------------
