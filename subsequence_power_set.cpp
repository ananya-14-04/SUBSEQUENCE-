#include<bits/stdc++.h>

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

typedef long long ll;
void power_set(ll  n , ll arr[])
{
	ll pow_size=pow(2,n);

	for(ll i=0;i<pow_size;i++)
	{
		for(ll j=0;j<n;j++)
		{
			if(i&(1<<j))
				cout << arr[j]<< " ";
		}
		cout <<endl;
	}
} 


signed main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin >> arr[i];

    power_set(n,arr);
}