#include <bits/stdc++.h>
using namespace std;

int main(){
    long n,m,l;
    cin >> n >> m >> l;
    long queue1[n][m];
    long queue2[m][l];
    long queue3[n][l];
    //行列の代入
    for(long i=0; i<n; i++){
        for(long j=0; j<m; j++){
            cin >> queue1[i][j];
        }
    }
    for(long i=0; i<m; i++){
        for(long j=0; j<l; j++){
            cin >> queue2[i][j];
        }
    }
    for(long i=0; i<n; i++){
        for(long j=0; j<l; j++){
            queue3[i][j]=0;
        }
    }
    //行列の計算
    long sum[m];
    for(long i=0; i<n; i++){
        for(long k=0; k<l; k++){
            for(long j=0; j<m; j++){
                queue3[i][k]+=queue1[i][j]*queue2[j][k];
            }
        }
    }
    for(long i=0; i<n; i++){
        for(long k=0; k<l; k++){
            cout << queue3[i][k];
            if(k!=l-1){
                cout << " ";
            }
        }
        cout << endl;
    }
}
