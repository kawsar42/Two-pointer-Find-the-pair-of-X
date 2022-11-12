#include<bits/stdc++.h>
#define ll long long int
#define pi 3.1416
#define pb push_back
#define endl '\n'
#define kawsar ios::sync_with_stdio(false);cin.tie(0);
ll val1,val2;
using namespace std;
bool solve(ll a[],ll n,ll x)
{
    ll L=0,R=n-1;
    while(L<R)
    {
        ll sum=a[L]+a[R];
        if(sum==x)
        {
            val1=a[L];
            val2 =a[R];
            return true;
        }
        else if(sum>x)
        {
            R--;
        }
        else L++;
    }
    return false;
}
int main()
{
    kawsar;
    ll n;
    cin >> n;

    ll a[n+5];
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    ll x;
    cin >> x;
   ll ans= solve(a,n,x);
   if(ans==true)
   {
       cout <<"YES" << " " <<  val1 << " " << val2 << endl;
   }
   else cout << "NO" << endl;

    return 0;
}
///kawseralam266@gmail.com
