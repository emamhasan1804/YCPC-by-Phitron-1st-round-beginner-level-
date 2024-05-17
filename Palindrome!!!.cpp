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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> mp;
        for(char c:s) {
            mp[c]++;
        }
        int cnt = 0;
        for(auto it:mp) {
            mp[it.first] = it.second%2;
            if(it.second==1) cnt++;
        }
        int ans = 0;
        for(auto it:mp) {
            if(it.second==1) {
                if(it.first>='a' && it.first<='z') {
                    char x = toupper(it.first);
                    if(mp[x]==1) {
                        ans+=1;
                        mp[x]=0;
                        mp[it.first]=0;
                        cnt-=2;
                    }
                }
                else {
                    char x = tolower(it.first);
                    if(mp[x]==1) {
                        ans+=1;
                        mp[x]=0;
                        mp[it.first]=0;
                        cnt-=2;
                    }
                }
            }
            
        }
        int cntt=0;
        for(auto it:mp) {
            if(it.second==1) {
                cntt++;
            }
        }
        cntt/=2;
        ans += cntt*2;
        cout<<ans<<endl;
    }
    return 0;
}
