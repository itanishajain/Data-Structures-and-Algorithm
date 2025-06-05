#include<iostream>
using namespace std;
vector<int> spiralOrder(vector< vector<int> >& mat) {
    int m = mat.size(), n = mat[0].size();
    int srow = 0, erow = m-1, scol = 0, ecol = n-1;
    vector<int> ans;
    while(srow <= erow && scol <= ecol){
        // Top
        for(int j=scol; j<=ecol; j++){
            ans.push_back(mat[srow][j]);
        }
        // Right
        for(int i=srow+1; i<=erow; i++){
            ans.push_back(mat[i][ecol]);
        }
        // Bottom
        for(int j=ecol-1; j>=scol; j--){
            if(srow == erow){
                break;
            }
            ans.push_back(mat[erow][j]);
        }
        // Left
        for(int i=erow-1; i>=srow+1; i--){
            if(scol == ecol){
                break;
            }
            ans.push_back(mat[i][scol]);
        }
        srow++, scol++, erow--, ecol--;
    }
    return ans;
}
int main(){
    int n, m, element;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;
    vector< vector<int> > mat(n, vector<int>(m));
    cout << "Enter elements of the matrix: \n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    cout << "Spiral order of the matrix is: ";
    vector<int> result = spiralOrder(mat);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}