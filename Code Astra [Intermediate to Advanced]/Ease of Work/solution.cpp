#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
float Max(float a, float b){if( a>b) return a;else return b;}
float Min(float a, float b){if(a<b) return a;else return b;}
int min(int a, int b){if(a<b) return a;else return b;}
int max(int a, int b){if( a>b) return a;else return b;}
vector<int> v;
int N;
void Make_Change(int* D,int x,int n){
    //cout<<"x:"<<x<<endl;
    if(n == 0){
        /*
        for(int i = 0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
         */
        v.clear();
        return;
    }
    if(x < D[0]){
        /*
        for(int i = 0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        */
        v.erase(v.end()-1);
        return;
    }
    //Base Case
    if(x%D[n-1] == 0){
        v.push_back(x/D[n-1]);
        for(int i = 0;i<N-v.size();i++){
            cout<<0<<" ";
        }
        for(int i = v.size()-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        exit(0);
    }
    else {
        int k = x / D[n - 1];
        for (int i = 0; i <= k; i++) {
            v.push_back(k -i);
            Make_Change(D, x % D[n - 1] + i * D[n - 1], n - 1);
        }
    }
}
int main(){
    int x,n;
    cin>>x>>n;
    N = n;
    int* Denominations = (int*) malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        cin>>Denominations[i];
    }
    sort(Denominations,Denominations+n);
    Make_Change(Denominations,x,n);
    cout<<"Not Possible"<<endl;
}
