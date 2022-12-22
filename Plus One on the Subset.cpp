#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int t1[n],nb=0,q=0;
        for(int i=0;i<n;i++)
            cin>>t1[i];
        sort(t1,t1+n,greater<>());
        cout<<t1[0]-t1[n-1]<<endl;

    }
}
