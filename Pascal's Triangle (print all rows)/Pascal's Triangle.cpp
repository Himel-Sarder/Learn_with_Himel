#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generatePascalsTriangle(int numRows) {
    vector<vector<int>> triangle;
    triangle.push_back({1});

    for (int i = 1; i < numRows; ++i) {
        vector<int> row = {1};
        for (int j = 1; j < i; ++j) {
            row.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
        }
        row.push_back(1);
        triangle.push_back(row);
    }

    return triangle;
}

int main() {
    int numRows = 5;
    vector<vector<int>> result = generatePascalsTriangle(numRows);

    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
-------------------------
| Prepared by -         |
| Himel Sarder          |
| Dept. of CSE, BSFMSTU |
-------------------------
