//3.Dp (0-1) KnapSack
#include<bits/stdc++.h>
using namespace std;
int Solve(int** DP,int* w,int* v,int n,int cap){
    if(n-1 < 0){
        return 0;
    }
    if(DP[n-1][cap] != -1){
        return DP[n-1][cap];
    }
    if(w[n-1] > cap){
        //exclude weight at index n-1
        DP[n-1][cap] = Solve(DP,w,v,n-1,cap);
        return DP[n-1][cap];
    }
    else {
        DP[n-1][cap] = max(v[n-1]+ Solve(DP,w,v,n-1,cap-w[n-1]), Solve(DP,w,v,n-1,cap));
        return DP[n-1][cap];
    }
}
int main(){
    int cap,n;
    cin>>cap>>n;
    int* weights = (int*) malloc(sizeof(int)*n);
    for(int i = 0;i<n;i++){
        cin>>weights[i];
    }
    int* values = (int*) malloc(sizeof(int)*n);
    for(int i = 0;i<n;i++){
        cin>>values[i];
    }
    map<int,int> WeightsAsssociatedWithProfts;
    for(int i = 0;i<n;i++){
        WeightsAsssociatedWithProfts[values[i]] = weights[i];
    }
    int** DP = (int**) malloc(sizeof(int*)*n);
    for(int i = 0;i<n;i++){
        DP[i] = (int*) malloc(sizeof(int)*cap+1);
    }
    //Initializing Dp matrix
    for(int i = 0;i<n;i++){
        for(int j = 0;j<cap+1;j++){
            DP[i][j] = -1;
        }
    }
    int ans = Solve(DP,weights,values,n,cap);
    vector<int> Contribution;
    cout<<ans<<endl;
    int Result = 0;
    for(int i = n-2;i>=0;i--){
        int Ans = DP[n-1][cap];
        int NewCap = cap;
        for(int j = 0;j<cap+1;j++){
            int flag = 0;
            if(DP[i][j] != -1) {
                for (int k = 0; k < n; k++) {
                    int Val = values[k];
                    if (DP[i][j] + Val == Ans) {
                        //cout <<"Ans: "<<Ans << endl;
                        Contribution.push_back(Val);
                        Result += Val;
                        //cout <<"n-1: "<< n - 1 << " ";
                        //cout<<"cap: "<<cap<<endl;
                        NewCap = j;
                        flag = 1;
                        //cout <<"Newcap: "<<j <<endl;
                        break;
                    }
                }
                if(flag == 1){
                    break;
                }
            }
        }
        n -= 1;
        cap = NewCap;
    }
    if(ans-Result != 0) {
        Contribution.push_back(ans - Result);
    }
    sort(Contribution.begin(),Contribution.end());
    for(int Q:Contribution){
        cout<<Q<<" ";
    }
    cout<<endl;
    for(int Q:Contribution){
        cout<<WeightsAsssociatedWithProfts[Q]<<" ";
    }
    cout<<endl;
}
