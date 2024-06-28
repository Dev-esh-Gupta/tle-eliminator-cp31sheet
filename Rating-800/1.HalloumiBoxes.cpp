#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        vector<int> b = a;
        string ans = "YES";
        sort(b.begin(), b.end());
        if(k == 1){
            for(int i=0; i<n; i++){
                if(b[i] != a[i]){
                    ans = "NO";
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}