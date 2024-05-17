#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
/* 
When I wrote this code ,
only Allah and I knew what I did.
   
Now... only Allah knows
*/

int32_t main () 
{
    int n;
    cin>>n;
    vector<bool> prime(104735,true);
    for(int i=2;i<=104729;i++) {   
        if(prime[i]) {
            for(int j=i+i;j<=104729;j+=i) {    //   total complexity O(nloglogn)
                prime[j]=false;
            }
        }
    }
    vector<int> v;
    int cnt = 0;
    for(int i=2;i<=104729;i++) {
        if(prime[i]) {
            v.push_back(i);
            cnt++;
        }
        if(cnt==n*n) break;
    }
    int ar[n][n];
    int l=0,r=n-1;
    int ind = 0;
    while(true) {
        if(l>n/2) break;
        for(int i=l;i<=r;i++) {
            ar[l][i]=v[ind];
            // cout<<l<<i<<" -> "<<v[ind]<<" ";
            ind++;
        }
        // cout<<endl;
        for(int i=l+1;i<=r;i++)  {
            ar[i][r]=v[ind];
            // cout<<i<<r<<" -> "<<v[ind]<<" ";
            ind++;
        }
        // cout<<endl;
        for(int i=r-1;i>=l;i--) {
            ar[r][i]=v[ind];
            // cout<<r<<i<<" -> "<<v[ind]<<" ";
            ind++;
        }
        // cout<<endl;
        for(int i=r-1;i>l;i--) {
            ar[i][l]=v[ind];
            // cout<<i<<l<<" -> "<<v[ind]<<" ";
            ind++;
        }
        // cout<<endl;
        l++;
        r--;
        if(l>n/2) break;
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
