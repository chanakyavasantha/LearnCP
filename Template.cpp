#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
float Max(float a, float b){if( a>b) return a;else return b;}
float Min(float a, float b){if(a<b) return a;else return b;}
int max(int a, int b){if( a>b) return a;else return b;}
int min(int a, int b){if(a<b) return a;else return b;}
const long long int M = 998244353;
int GCD(int a,int b){
    if(a == 0){
        return b;
    }
    else{
        return GCD(b%a,a);
    }
}
bool cmp(pair<int,int> &a,pair<int,int> &b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second < b.second;
}
int myAtoi(string s) {
    stringstream ss(s);
    int ans(0);
    ss>>ans;
    return ans;
}
void calculate(long long p,long long q){
    long long mod = 998244353, expo;
    expo = mod - 2;
    while (expo) {
        if (expo & 1) {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
        expo >>= 1;
    }
    cout<<p%M<<endl;
}
long long factorial(long long n){
    // single line to find factorial
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
float combinantions(long long n,long long i){
    float k =  float(factorial(n))/ float(factorial(n-i)* factorial(i));
    return k;
}
void solve() {
    // your code here.
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t ;
    cin>>t;
    while (t--){
        solve();
    }
}
