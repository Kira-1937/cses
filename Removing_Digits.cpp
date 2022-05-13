
#include<bits/stdc++.h>
using namespace std;
const int maxx=1e6+6;
 int dp[maxx];
 void count (int x)
 {
  dp[0]=0;
  for(int i=0;i<10;i++)
  {
      dp[i]=1;
  }
  for(int i=11;i<maxx;i++){
      int l=0;
      int k=i;
      while(i)
      {
          int r=i%10;
          l=max(r,l);
          i/10;
      }


   dp[k]=dp[k-l]+1;



   }
   
   cout<<dp[x];




 }



int main(){
   int x;
   cin>>x;
   count (x);

    
    
    return 0;
}