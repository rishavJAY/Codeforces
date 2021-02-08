#include <bits/stdc++.h>    // Accepted
using namespace std;
int main()
{ 
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i;
        cin >> n >> k;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << -1 << endl;
            continue;
        }
        int ans = -1, flag = 0;
        i = 0;
        while (i < n-1 )
        {
            flag = 0;
            if(a[i]>=a[i+1])
                i++;
            if ( i < n-1 && a[i] < a[i + 1])
            {
                ans = i + 1;
                a[i]++;
                k -= 1;
                if (k <= 0)
                {
                    flag = 1;
                    break;
                }
                if(i!=0)
                    i--;
            }
            
        }
        if (flag)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
