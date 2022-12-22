#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int t,a,b,s;
int main()
{   fastread();
    cin>>t;
    while(t--)
    {   int nb=0;
        cin>>a>>b;
        s=abs(b-a);
       /* while(s>=10)
        {
            s=s-10;
            nb++;
        }*/
        if((s%10)!=0)
            nb++;
        cout<<s/10+nb<<endl;
    }
}
