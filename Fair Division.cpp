#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,s=0,n1=0,n2=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int t1[n];
        for(int i=0;i<n;i++)
            {
                cin>>t1[i];
                s+=t1[i];
                if(t1[i]==1)
                    n1++;
                else
                    n2++;
            }
            n2*=2;
            if(n1==n2 || n1%2==0 || s%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;





    }
}
