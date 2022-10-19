#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
float Max(float a, float b){if( a>b) return a;else return b;}
float Min(float a, float b){if(a<b) return a;else return b;}
int max(int a, int b){if( a>b) return a;else return b;}
int min(int a, int b){if(a<b) return a;else return b;}
const long long int M = 1000000007;
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
int main(){
    int n,K;
    cin>>n>>K;
    vector<string> V;
    V.push_back("00");
    V.push_back("01");
    V.push_back("11");
    V.push_back("10");
    if(n == 1){
        cout<<"0 "<<endl;
        return 0;
    }
    else{
        for (int i = 0; i < n-2; i++) {
            vector<string> V1;
            for (int j = 0; j < V.size(); j++) {
                string P = "0"+V[j];
                V1.push_back(P);
            }
            for (int j = V.size()-1; j >= 0; j--) {
                string P = "1"+V[j];
                V1.push_back(P);
            }
            V.clear();
            for (auto &j: V1) {
                V.push_back(j);
            }
        }

        for (int k = 0;k<V.size();k++) {
            string X = V[k];
            int ans = 0;
            for(int j = 0;j<X.size();j++){
                if(X[j] == '1'){
                    ans += pow(2,X.size()-j-1);
                }
            }
            if(K == k) {
                cout << ans << " ";
            }
            //cout << X << endl;
        }
    }

}
