#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    if(n%3 == 0 && n%5 == 0){
        cout<<"Both Better\n";
    }
    else if(n%3 == 0){
        cout<<"EEE Better\n";
    }
    else if(n%5 == 0){
        cout<<"CSE Better\n";
    }
    else cout<<"None Better\n";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}