#include <bits/stdc++.h>
using namespace std;

int main(){
    while (true)
    {
        int a,b;
        string s;
        cin >> a >> s >> b;
        if(s=="+"){
            cout << a+b << endl;
        } 
        else if(s=="-"){
            cout << a-b << endl;
        }
        else if(s=="*"){
            cout << a*b << endl;
        }
        else if(s=="/"){
            cout << a/b << endl;
        }
        else if(s=="?"){
            break;
        }
    }
}
