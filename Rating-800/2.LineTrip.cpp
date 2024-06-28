#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int mSize = 0;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(n == 1){
                mSize = max(a[i], 2*(x-a[i]));
            }else if(i == 0){
                mSize = max(mSize, a[i]);
            }else if(i == n-1){
                mSize = max(mSize, max(2*(x-a[i]), a[i]-a[i-1]));
            }else{
                mSize = max(mSize, a[i]-a[i-1]);
            }
        }
        cout << mSize << endl;
    }
}