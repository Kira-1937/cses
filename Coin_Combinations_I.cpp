
#include<bits/stdc++.h>
using namespace std;
 const int maxx=1e6+6;
 int dp[maxx];
int d[101][maxx];
void count(vector<int >v,int n,int x)
{
  // dp[0]=0;
for(int i=0;i<101;i++){
  for(int j=0;j<maxx;j++){
    if (j==0){
      d[i][j]=0;
    }
    else{
      d[i][j]=maxx;
    }
  }
}
for(int i=1;i<n+1;i++){
  for(int j=1;j<x+1;j++){
    if((j-v[i-1])>=0){
    d[i][j]=min(d[i-1][j],d[i][j-v[i-1]]+1);
    }else{
      d[i][j]=d[i-1][j];
    }
  }
}
if(d[n][x]==maxx){
  cout<<-1;
}else{
cout<<d[n][x];}


}


int main(){

int n,x;
cin>>n>>x;
vector <int >v;
  for(int i=0;i<n;i++)
  {int j=0;
  cin>>j;
  v.push_back(j);
  }
  sort(v.begin(),v.end());

 count (v,n,x);



    return 0;
}