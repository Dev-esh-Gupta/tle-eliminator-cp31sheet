#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        mini = min(mini, abs(val));
    }
    cout<< mini << endl;
}