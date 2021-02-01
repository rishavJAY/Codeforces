#include <bits/stdc++.h>
using namespace std;
int main(){
    // freopen("inp.txt", "r", stdin);
    // freopen("outp.txt", "w", stdout);
    int t;	cin>>t;
    while(t--){
        long long int n, x, i, Arrsum=0, sum=0, flag=0;
        cin>>n>>x;
        long long int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            Arrsum+=a[i];
        }
        long long int ans=0,k=1,z=0;
        for(i=0;i<n;i++){
            if(a[i]%x==0){
                sum+=k*a[i];
                a[i]=a[i]/x;
            }
            else if(a[i]%x!=0){
                sum+=Arrsum;
                flag=1;
                break;
            }
            if(i==n-1 && flag==0){
                i=-1;
                z++;
                k=k*x;
            }
                
        }
        cout<<sum<<endl;
    }
    return 0;
}