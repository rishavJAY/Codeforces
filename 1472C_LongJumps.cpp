#include <bits/stdc++.h>
using namespace std;
int main(){
    // freopen("inp.txt", "r", stdin);
    // freopen("outp.txt", "w", stdout);
    int t;	cin>>t;
    while(t--){
        int n,i,ans=0;
        cin>>n;
        int a[n+1],dp[n+1];
        for(i=1;i<=n;i++){
            cin>>a[i];
        }
        for(i=n;i>0;i--){
            if(i+a[i]>n){
                dp[i]=a[i];
            }
            else{
                dp[i]=a[i]+dp[i+a[i]];
            }
            if(dp[i]>ans)
                ans=dp[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}