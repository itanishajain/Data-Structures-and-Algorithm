#include<iostream>
#include<vector>
using namespace std;

bool SearchInRow(vector<vector<int> >& mat, int tar, int row) {
    int n = mat[0].size();
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (tar == mat[row][mid]) {
            return true;
        } else if (tar > mat[row][mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int> >& mat, int tar) {
    int m = mat.size(), n = mat[0].size();
    int startRow = 0, endRow = m - 1;
    while (startRow <= endRow) {
        int midRow = startRow + (endRow - startRow) / 2;
        if (tar >= mat[midRow][0] && tar <= mat[midRow][n - 1]) {
            return SearchInRow(mat, tar, midRow);
        } else if (tar > mat[midRow][n - 1]) {
            startRow = midRow + 1;
        } else {
            endRow = midRow - 1;
        }
    }
    return false;
}

int main() {
    int m, n, target;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));

    
    cout << "Enter elements of the matrix: \n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "Enter target value: ";
    cin >> target;
    
    if (searchMatrix(matrix, target)) {
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }
    
    return 0;
}
