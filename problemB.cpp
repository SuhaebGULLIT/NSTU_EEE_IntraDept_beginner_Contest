#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int k;
    cin>>k;
    k = k%26;
    string s;
    cin>>s;
    int n = s.length();
    string s2 = "";
    bool spaceFound = false;
    for(int i = 0; i<n; ++i){
        if(s[i] >= 'a' && s[i] <= 'z'){
            if(!spaceFound){
                s2 += ' ';
                spaceFound = true;
            }
            continue;
        }
        if(s[i] - k < 65){
            s2 += s[i] - k + 26;
            spaceFound = false;
        }
        else{
            s2 += s[i] - k;
            spaceFound = false;
        } 
    }
    cout<<s2<<'\n';
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