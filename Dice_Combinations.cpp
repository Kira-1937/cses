
#include<bits/stdc++.h>
using namespace std;
const int maxx=1e6+6;

   long long dp[maxx];
void count(int n )
{ 
   dp[0]=0;
   dp[1]=1;
   dp[2]=2;
   dp[3]=4;
   dp[4]=8;
   dp[5]=16;
   dp[6]=32;
   for(int i=7;i<maxx;i++)
   {
       dp[i]=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6];
       dp[i]=dp[i]%(1000000007);
    }
     


cout<<dp[n];




}

int main(){
int n ;
cin>>n;
count(n);


    
    
    return 0;
}