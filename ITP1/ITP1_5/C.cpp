#include <bits/stdc++.h>
using namespace std;

int main(){
    while (true){
        int H,W;
        cin >> H >> W;
        if(H==0 && W==0){
            break;
        }
        for(int i=0; i<H; i++){
            for(int j=0; j<W; j++){
                if(i%2==0){
                    if(j%2==0){
                        cout << "#";
                    }
                    else{
                        cout <<".";
                    }
                }
                else{
                    if(j%2==0){
                        cout << ".";
                    }
                    else{
                        cout <<"#";
                    }
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}
