//DAA Assignment Q-2
/*
consider a binary string, Two persons A and B are playing a game alternatively.Intially Each player have a score of zero. In each turn A can add the number at head or tail to his score and remove it from the string,
Same goes to B, Now if Both the players play the game optimally, print YES if A wins the game(If A have high score).
*/
//Expected Time Complexity: O(n2)
#include <bits/stdc++.h>
using namespace std;
int ans(int* a,int start,int end,int n,int** dp){
    if(end == start){
        return a[start];
    }
    else if(end-start == 1){
        return max(a[start],a[end]);
    }
    if(dp[start][end] != -1){
        return dp[start][end];
    }
    else{
        int k1 = a[start] + ans(a, start + 2, end,n,dp);
        int k2 = a[end] + ans(a, start, end - 2,n,dp);
        int k3 = a[start] + ans(a,start+1,end-1,n,dp);
        int k4 = a[end] + ans(a,start+1,end-1,n,dp);
        int ans1 = min(k1,k3);
        int ans2 = min(k2,k4);
        dp[start][end] = max(ans1,ans2);
        return dp[start][end];
    }
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int* a = (int*) malloc(sizeof(int)*n);
    for(int i = 0;i<n;i++){
        a[i] = s[i]-48;
    }
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int** dp = (int**) malloc(sizeof(int*)*n);
    for(int i = 0;i<n;i++){
        dp[i] = (int*) malloc(sizeof(int)*n);
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            dp[i][j] = -1;
        }
    }
    int A = ans(a,0,n-1,n,dp);
    int B = ans(a,1,n-1,n,dp);
    //cout<<A<<" "<<B<<endl;
    if(A>B){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
