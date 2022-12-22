#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,q;
    cin>>t;
    while(t--)
    {   int s=0;
        cin>>x;
         int a = x/10;
         stringstream ss;
         ss << a;
         string str = ss.str();
         q=str.size();
         if(a!=0)
            q++;
        s+=(10*(x%10-1)+ (q*(q+1))/2);


        cout<<s<<endl;
    }
}
