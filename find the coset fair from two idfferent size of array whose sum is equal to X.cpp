
/*find the fair whose sum is closet to x*/
#include<bits/stdc++.h>
#define ll long long int
ll mx=INT_MAX;
ll val1,val2;
using namespace std;
void  solve(ll a[],ll n,ll x)
{
    ll l=0,r=n-1;
    while(l<r)
    {
        ll sum=a[l]+a[r];
        ll dif=abs(sum-x);
        if(dif<mx)
        {
            mx=dif;
            val1=a[l];
            val2=a[r];


        }
        else if(sum>x)
        {
            r--;
        }
        else l++;

    }
   cout << val1 << " " << val2 << endl;
}
int main()
{
    ll n;
    cin >> n;
    ll a[n+5];
    for(ll i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    ll x;
    cin >> x;
    solve(a,n,x);

    return 0;
}
