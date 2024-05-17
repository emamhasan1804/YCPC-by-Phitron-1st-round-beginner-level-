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

class student {
    public:
    int roll;
    string name;
    int room ;
    string sex;
    student(int roll,string name,int room,string sex) {
        this->roll=roll;
        this->name=name;
        this->room=room;
        this->sex=sex;
    }
};

bool cmp(student x , student y) {
    return x.roll<y.roll;
}

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int cs = 1;
    int t;cin>>t;while(t--) 
    {
        int n,k;
        cin>>n>>k;
        vector<student> v[n+1];
        while(k--) {
            int a,b;
            string c,d;
            cin>>a>>c>>b>>d;
            v[b].push_back(student(a,c,b,d));
        }
        for(int i=1;i<=n;i++) {
            sort(v[i].begin(),v[i].end(),cmp);
        }
        int q;
        cin>>q;
        cout<<"Case #"<<cs<<":"<<endl;
        cs++;
        int que = 1;
        while(q--) {
            cout<<"Query #"<<que<<":"<<endl;
            que++;
            int vl;
            cin>>vl;
            if(v[vl].size()==0) cout<<"No Student"<<endl;
            else {
            for(auto it:v[vl]) {
                cout<<it.roll<<" "<<it.name<<" "<<it.sex<<endl;
            }
            }
        }
    }
    return 0;
}
