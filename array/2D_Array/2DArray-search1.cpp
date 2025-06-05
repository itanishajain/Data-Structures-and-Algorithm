#include<iostream>
using namespace std;
bool searchMatrix(vector<vector<int>>& mat, int tar) {
    int n = mat.size(), m = mat[0].size();
    int r = 0, c = m-1;
    while(r<n && c>=0){
        if(tar == mat[r][c]){
            return true;
        }
        else if(tar < mat[r][c]){
            c--;
        }
        else{
            r++;
        }
    }
    return false;
}
int main(){
    int n, m, target;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter elements of the matrix: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
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