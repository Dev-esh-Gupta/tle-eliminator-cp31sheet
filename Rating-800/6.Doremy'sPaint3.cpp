#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> um;
        for(int i=0; i<n; i++){
            cin >> a[i];
            um[a[i]]++;
        }
        if(um.size() == 1){
            cout << "YES" << endl;
        }else if(um.size() == 2){
            auto it = um.begin();
            if(abs((*it).second - (*++it).second) <= 1){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            cout << "NO" << endl;
        }
    }
}