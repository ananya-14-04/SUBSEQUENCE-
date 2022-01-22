#include<bits/stdc++.h>

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

typedef long long ll;

void subsequence(ll n,ll arr[],ll ind, vector<ll>&vec,ll sum,ll k)
{
	if(ind>=n)
	{
		if(sum==k)
    {
        for(int i=0;i<vec.size();i++)
        {
        	cout << vec[i]<<" ";
        }
        cout <<endl;
		}
		return ;
	} 
  
  vec.push_back(arr[ind]);
  sum+=arr[ind];
  subsequence(n,arr,ind+1,vec,sum,k);
  vec.pop_back();
  sum-=arr[ind];
  subsequence(n,arr,ind+1,vec,sum,k);

}
bool subsequence(ll n,ll arr[],ll ind, vector<ll>&vec,ll sum,ll k)
{
	if(ind>=n)
	{
		if(sum==k)
    {
        for(int i=0;i<vec.size();i++)
        {
        	cout << vec[i]<<" ";
        }
        cout <<endl;
        return true;
		}
		return false;
	} 
  
  vec.push_back(arr[ind]);
  sum+=arr[ind];
  if(subsequence(n,arr,ind+1,vec,sum,k)==true)
  	return true;

  vec.pop_back();
  sum-=arr[ind];
  if(subsequence(n,arr,ind+1,vec,sum,k)==true)
  	return true;

  return false;

}
signed main()
{
    ll n,k;
    cin >> n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin >> arr[i];

    vector<ll>vec;
subsequence(n,arr,0,vec,0,k);
}
