#include <bits/stdc++.h>
using namespace std;

int main(){
    int W,H,x,y,r;
    cin >> W >> H >> x >> y >> r;
    bool judge=false;

    if(x-r>0 && x+r<W && y-r>0 && y+r<H){
        judge=true;
    }

    if(judge){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
