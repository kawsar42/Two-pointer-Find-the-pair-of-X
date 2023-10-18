/*Find a triplet such that sum of two equals to third element    */
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll>v(n),v1;
    for(ll i=0; i<n; i++)
    {
        cin >> v[i];
    }
  sort(v.begin(),v.end());
   for(ll i=n-1;i>=0;i--)
   {
       ll x=v[i];
       ll l=0;
       ll r=i-1;
       while(l<r)
       {
           ll sum=v[l]+v[r];
           if(x==sum)
           {
               cout << x << " " << v[l] << " " << v[r] << endl;
               return ;
           }
           else if(sum>x)
           {
               r--;
           }
           else l++;
       }

   }

}
int main()
{


    solve();

    return 0;
}
/*
9
5 32 1 7 9 19 2 21 3


*/
