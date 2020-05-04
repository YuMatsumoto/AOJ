#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    int card;
    int num[4][13]={0};
    for(int i=0; i<n; i++){
        cin >> s >> card;
        if(s=="S"){
            num[0][card-1]++;
        }
        else if(s=="H"){
            num[1][card-1]++;
        }
        else if(s=="C"){
            num[2][card-1]++;
        }
        else if(s=="D"){
            num[3][card-1]++;
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<13; j++){
            if(num[i][j]==0){
                switch(i){
                    case 0:
                        cout << "S" << " " << j+1 << endl;
                        break;
                    case 1:
                        cout << "H" << " " << j+1 << endl;
                        break;
                    case 2:
                        cout << "C" << " " << j+1 << endl;
                        break;
                    default:
                        cout << "D" << " " << j+1 << endl;
                        break;
                }
            }
        }
    }
}
