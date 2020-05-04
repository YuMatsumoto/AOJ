#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int matrix[n][m];
    int identityMatrix[m];
    int outMatrix[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> matrix[i][j];
        }
    }
    for(int i=0; i<m; i++){
        cin >> identityMatrix[i];
    }
    for(int i=0; i<n; i++){
        outMatrix[i]=0;
        for(int j=0; j<m; j++){
            outMatrix[i]+=matrix[i][j]*identityMatrix[j];
        }
        cout << outMatrix[i] << endl;
    }
}
