#include<bits/stdc++.h>
using namespace std;
int t,x,y,n,ans=0;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        ans=(n/x)*x+y;
        if(ans>n)
            ans-=x;
        cout<<ans<<endl;

    }
}
