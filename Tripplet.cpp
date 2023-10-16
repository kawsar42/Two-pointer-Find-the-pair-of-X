/*  find the tripplet with zero sum */
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(ll i=0;i<n;i++)
    {
        unordered_set<ll>s;
        for(ll j=i+1;j<n;j++)
        {
          ll x=-(v[i]+v[j]);
          if(s.find(x)!=s.end())
          {
              cout <<"(" << x << " " << v[i] << " " << v[j] << ")" << endl;
          }
          else
            s.insert(v[j]);
        }
    }

}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
