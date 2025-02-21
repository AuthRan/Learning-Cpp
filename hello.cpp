#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> A(n, vector<int>(m)), B(n, vector<int>(m));
    for (int i=0; i<n; i++) 
        for (int j=0; j<m; j++) 
            cin >> A[i][j];
    for (int i=0; i<n; i++) 
        for (int j=0; j<m; j++) 
            cin >> B[i][j];
    for (int i=0; i<n; i++) {
        sort(A[i].begin(), A[i].end());
        sort(B[i].begin(), B[i].end());
    }
    sort(A.begin(), A.end());  
    sort(B.begin(), B.end());  
    if (A == B) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
