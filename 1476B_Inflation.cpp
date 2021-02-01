#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("inp.txt", "r", stdin);
    freopen("outp.txt", "w", stdout);
    int t;	cin>>t;
    while(t--){
        long long int n,k,i,sum1,sum2,ans=0;
        cin>>n>>k;
        long long int p[n];
        for(i=0;i<n;i++){
            cin>>p[i];
        }
        sum1=0;
        for(i=1;i<n;i++){
            sum1=sum1+p[i];
            // cout<<"sum1 is "<<sum1<<endl;
            sum2 = ceil((p[i]*100.0)/k);
            // cout<<"sum2 is "<<sum2<<endl;
            long long int x = 0;
            if(sum1<sum2){
                ans=ans+(sum2-sum1);
                x = sum2-sum1;
            }
            sum1=sum1+x;
        }
        cout<<ans<<endl;
    }
    return 0;
}