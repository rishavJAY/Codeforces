#include <bits/stdc++.h>    // Accepted
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}
int main(){
    // freopen("inp.txt", "r", stdin);
    // freopen("outp.txt", "w", stdout);
    int t;	cin>>t;
    while(t--){
        ll a, b, n, i, sum=0, flag=0;
        cin>>a>>b>>n;
        ll ma[n],mh[n];
        pair<ll,ll> pr[n];
        for(i=0;i<n;i++){
            cin>>ma[i];
        }
        for(i=0;i<n;i++){
            cin>>mh[i];
        }
        for(i=0;i<n;i++){
            pr[i]=make_pair(mh[i],ma[i]);
        }
        sort(pr,pr+n,sortbysec);

        for(i=0;i<n;i++){
            ll x1 = ceil(b*1.0/pr[i].second), y1 = ceil(pr[i].first*1.0/a);
            ll x = min(x1,y1);
            b -= x*pr[i].second;
            pr[i].first -= x*a;
            if(b<=0){
                flag=1;
                break;
            }
        }
        long long flag2=0;
        for(i=0;i<n;i++){
            if(pr[i].first>0){
                flag2=1;
                break;
            }
        }
        if( flag2==1 )
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}