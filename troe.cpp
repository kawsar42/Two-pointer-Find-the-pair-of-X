/* find the fair whose sum is equal to X*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    ll val1,val2;
    cin >> n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll x;
    cin >> x;
    ll l=0,r=n-1,cnt=0;
    while(l<r)
    {
        ll sum=v[l]+v[r];
        if(sum==x)
        {
            val1=v[l];
            val2=v[r];
            cnt=1;
            break;
        }
        else if(sum>x)
        {
            r--;
        }
        else l++;
    }
    if(cnt==1)
    {
        cout << "YES" << endl;
        cout << val1 << " " << val2 << endl;
    }
    else cout << "NO" << endl;

}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
