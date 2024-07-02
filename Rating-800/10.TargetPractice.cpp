#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int ans = 0;
        for(int i=1; i<=10; i++){
            for(int j=1; j<=10; j++){
                char ch;
                cin >> ch;
                if(ch == 'X'){
                    int check_i = i>5?10-i+1:i;
                    int check_j = j>5?10-j+1:j;
                    ans += min(check_i, check_j);
                }
            }
        }
        cout << ans << endl;
    }
}