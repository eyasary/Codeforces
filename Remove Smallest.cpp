#include<bits/stdc++.h>
using namespace std;
int t,n,q,a;
int main()
{
    cin>>t;
    while(t--)
    {   bool test=true;
        cin>>n;
        vector<int>v;
        int j=n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end(),greater<int>());
         while(test!=false && j>0)
        {
            if((v[j-1]-v[j])<=1)
            {
                v.pop_back();
                j--;
            }
            else
            {
               test=false;
               break;
            }
        }
        if(test==false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
