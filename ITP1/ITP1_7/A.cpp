#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,f,l;
    int score;
    while(true){
        cin >> m >> f >> l;
        score=m+f;
        if(m==-1 && f==-1 && l==-1){
            break;
        }
        else if(m==-1 || f==-1){
            cout << "F" << endl;
        }
        else{
            if(score>=80){
                cout << "A" << endl;
            }
            else if(score>=65 && score<80){
                cout << "B" << endl;
            }
            else if(score>=50 && score<65){
                cout << "C" << endl;
            }
            else if(score>=30 && score<50){
                if(l>=50){
                    cout << "C" << endl;
                }
                else{
                    cout << "D" << endl;
                }
            }
            else if(score<30){
                cout << "F" << endl;
            }
        }
    }
}