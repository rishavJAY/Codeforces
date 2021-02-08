#include <bits/stdc++.h>    // Accepted
using namespace std;
int main(){
    // freopen("inp.txt", "r", stdin);
    // freopen("outp.txt", "w", stdout);
    int t;	cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i, n = s.length();
        for(i=0;i<n;i++){
            if(i&1==1){
                if(s[i]=='z')
                    s[i]='y';
                else
                    s[i]='z';
            }
            else{
                if(s[i]=='a')
                    s[i]='b';
                else
                    s[i]='a';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}