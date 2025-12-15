#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool isPalindorme(string s){
    int n = s.size();
    for(int i = 0; i<n/2; ++i){
        if(s[i] != s[n-1-i])return false;
    }
    return true;
}
bool isArmstrong(string s){
    int power = s.size();
    int n = power;
    long long number = 0;
    for(int i = 0; i<n; ++i){
        int digit = s[i] - '0';
        number = number*10 + digit;
    }
    long long sum = 0;
    for(int i = 0; i<n; ++i){
        int digit = s[i] - '0';
        sum += pow(digit,power);
    }
    if(sum == number)return true;
    return false;
}
void solve(){
    string num;
    cin>>num;
    if(isPalindorme(num)){
        cout<<"YES ";
    }
    else cout<<"NO ";
    if(isArmstrong(num)){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
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