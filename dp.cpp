#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>


using namespace std;
int main(){
    int n , x;
    cin>>n>>x;
    vector<int>v(n);
    vector<int>dp(x+1);



    for(int i =0;i<n;i++){
        cin>>v[i];
        

    }
    dp[0]=0;
    for(int i =1;i<=x+1;i++){
         dp[i]= INT_MAX;
        for(int j =0;j<n;j++){
            if(i-v[j]<0)break;
           

            dp[i]= min(dp[i],dp[i-v[j]]+1);
        }
    }
    if(dp[x]==INT_MAX)cout<<-1<<endl;
    else cout<<dp[x];
}
