#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    int table[r][c];
    int sumr[r];
    int sumc[c];
    int sumrc=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> table[i][j];
            sumc[j]=0;
        }
        sumr[i]=0;
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sumr[i]+=table[i][j];
            sumc[j]+=table[i][j];
            cout << table[i][j] << " ";
        }
        cout << sumr[i] << endl;
    }
    for(int i=0; i<c; i++){
        cout << sumc[i] << " ";
        sumrc+=sumc[i];
    }
    cout << sumrc << endl;
}