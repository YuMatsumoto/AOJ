#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n];
    for(int i=0; i<n; i++){
        cin >> num[i];
    }

    int min,max;
    long sum;
    for(int i=0; i<n; i++){
        if(i==0){
            sum=num[i];
            min=num[i];
            max=num[i];
        }
        else{
            if(num[i]<min){
                min=num[i];
            }
            if(num[i]>max){
                max=num[i];
            }
            sum+=num[i];
        }
    }
    cout << min << " " << max << " " << sum << endl;
}
