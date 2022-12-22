#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,s=0;
    cin>>t;
    while(t--)
    {
        int n1=0,n2=0;
        cin>>n;
        int t1[n];
        for(int i=0;i<n;i++)
            {
                cin>>t1[i];
                if(t1[i]==1)
                    n1++;
                else
                    n2++;
            }
            if(n2%2!=0)
            {
                if(n1%2==0 && n1!=0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
            {
                if(n1%2==0 && n2%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            }






    }
}
