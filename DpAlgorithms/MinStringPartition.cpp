//DAA Assignment Q-1
/*1. Given a string, find the minimum number of partitions (substring) such that each partition is a palindrome.
 * Implement using greedy (if exists) and DP (if exists).
 * Sample input and output:
 * ABAC =⇒ Partition-1 = ABA, Partition-2 = C. Minimum number of partitions are 2
 * ABAABAAC =⇒ Partition-1 = ABAABA, Partition-2 = B, Partition-3 = C. Minimum number of partitions are 3.
 */
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int i,int j){
    while(i<j){
        if(s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int Answer(string s,int start,int end,int** dp){
    if(start>=end || isPalindrome(s,start,end)){
        return 0;
    }
    if(dp[start][end] != -1){
        return dp[start][end];
    }
    else {
        int ans = INT_MAX, cnt;
        for (int i = start; i < end; i++) {
            cnt = Answer(s, start, i,dp) + Answer(s, i + 1, end,dp) + 1;
            ans = min(ans, cnt);
        }
        dp[start][end] = ans;
        return dp[start][end];
    }
}
int main(){
    string s;
    cin>>s;
    int n = s.size();
    int** dp = (int**) malloc(sizeof(int*)*n);
    for(int i = 0;i<n;i++){
        dp[i] = (int*) malloc(sizeof(int)*n);
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            dp[i][j] = -1;
        }
    }
    cout<<Answer(s,0,n-1,dp);
}
