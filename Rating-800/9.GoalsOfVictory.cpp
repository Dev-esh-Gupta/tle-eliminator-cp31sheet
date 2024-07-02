#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        vector<int> a(n);
        for(int i=0; i<n-1; i++){
            cin >> a[i];
            sum += a[i];
        }
        cout << -sum << endl;

    }
}