#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> dotCounts;
        int consecutiveDot = 0;
        int ans = 0;
        for(int i=0; i<=n; i++){
            if(i == n){
                if(consecutiveDot > 2){
                    ans = 2;
                    break;
                }
                dotCounts.push_back(consecutiveDot);
            }else if(s[i] == '.'){
                consecutiveDot++;
            }else{
                if(consecutiveDot > 2){
                    ans = 2;
                    break;
                }
                if(consecutiveDot != 0)
                    dotCounts.push_back(consecutiveDot);
                consecutiveDot = 0;
            }
        }
        if(ans == 0){
            for(int i=0; i<dotCounts.size(); i++){
                ans += dotCounts[i];
            }
        }
        cout << ans << endl;
    }
}