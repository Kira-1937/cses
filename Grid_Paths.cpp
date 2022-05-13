
#include<bits/stdc++.h>
using namespace std;

// void count (char **input,int m ,int n ){
 
  

//   cout<<dp[n-1][n-1];
// }

int main(){
int n ;
cin>>n;
char input[n][n];
for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
       cin>>input[i][j];
   }


}

const int maxx=n;
  int dp[maxx][maxx];
  dp[0][0]=0;
  
  
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++){
          if(i==0&&j==0){
              continue;
          }
        else  if(input[i][j]=='*'){
              dp[i][j]=0;
          }
      else if(input[i-1][j]=='*'&&input[i][j-1]=='*'){
        dp[i][j]=-1;
       }
       else if(input[i-1][j]=='*'&&input[i][j-1]=='.') { 
          dp[i][j]=dp[i][j-1]+1;
      }
       else if(input[i-1][j]=='.'&&input[i][j-1]=='*') { 
          dp[i][j]=dp[i-1][j]+1;
      }
        else{

        dp[i][j]=dp[i-1][j]+1+dp[i][j-1]+1;

        }

      
  }
}




//cout<<dp[n-1][n-1];
for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
       cout<<dp[i][j]<<" ";
   }
   cout<<endl;


}
    
    
    return 0;
}