#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s;
    cin>>s;
    char first = s[0], second = s[1];
    int digit, multiplier;
    if(first == 'A'){
        digit = 1;
    }
    else if(first == 'B'){
        digit = 2;
    }
    else if(first == 'C'){
        digit = 3;
    }
    else if(first == 'D'){
        digit = 4;
    }
    else if(first == 'E'){
        digit = 5;
    }
    else digit = 0;

    if(second == 'A'){
        multiplier = 1;
    }
    else if(second == 'B'){
        multiplier = 10;
    }
    else if(second == 'C'){
        multiplier = 100;
    }
    else if(second == 'D'){
        multiplier = 1000;
    }
    else if(second == 'E'){
        multiplier = 10000;
    }
    else multiplier = 0;
    int resistance = digit*multiplier;
    if(resistance == 0){
        cout<<"INVALID Code"<<'\n';
    }
    else cout<<resistance<<'\n';

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