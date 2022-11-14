//DAA Assignment Q-2
/*
 * 2. Consider a game called gold rush. Gold rush game has n pots, pots are arranged in a line, each containing
 * some gold coins. Assume that you and your friend are playing this game. Both of you can
 * see how many coins are there in each pot, and each player gets alternating turns in which the player
 * can pick a pot from either end of the line. The winner is the player who has the highest number of
 * coins at the end. Your objective is to “maximize” the number of coins, assuming your friend also plays
 * “optimally”. Assume that you got the opportunity to start the game.
 * Sample input: 5 7 3 4
 * Player A - 7 + 4 = 11
 * Player B - 5 + 3 = 8
 */
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
    int* a = (int*) malloc(sizeof(int)*n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int** dp = (int**) malloc(sizeof(int*)*n);
    for(int i = 0;i<n;i++){
        dp[i] = (int*) malloc(sizeof(int)*n);
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            dp[i][j] = -1;
        }
    }
    cout<<ans(a,0,n-1,n,dp)<<endl;
}
