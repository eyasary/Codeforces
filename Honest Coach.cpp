#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,mini;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int t1[n];
        for(int i=0 ;i<n;i++)
        {
            cin>>t1[i];
        }
        sort(t1,t1+n);
        mini=t1[n-1]-t1[n-2];
        for(int i=n-2;i>0;i--)
        {
                mini=min(mini,t1[i]-t1[i-1]);
        }

        cout<<mini<<endl;

    }
}
