// Accepted Code
#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long n) 
{ 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (long long i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
int main(){
//    freopen("inp.txt", "r", stdin);
//    freopen("outp.txt", "w", stdout);
    int t;	cin>>t;
    while(t--){
        long long d,ans1,ans2;
        cin>>d;
        ans1=(1+d);
        while(!isPrime(ans1))
            ans1++;
        ans2 = ans1+d;
        while(!isPrime(ans2))
            ans2++;
        cout<<ans1*ans2<<endl;
    }
    return 0;
}
