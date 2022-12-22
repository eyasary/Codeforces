#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int main()
{
    cin>>t;
    while(t--)
    {   int op=0,s=0;
        cin>>n>>k;
        int t[n],t1[n];
        for(int i=0;i<n;i++)
        {
            cin>>t[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>t1[i];
        }
         sort(t,t+n);
         sort(t1,t1+n,greater<>());
        for(int i=0;i<n;i++)
        {
            if(op<k)
            {  if(t1[i]>t[i])
                swap(t[i],t1[i]);
                op++;
            }
            else
                break;

        }
        for(int i=0;i<n;i++)
            s+=t[i];
        cout<<s<<endl;
    }
}
