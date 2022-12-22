#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,v[4];
    cin>>t;
    while(t--)
    {  int q;
       for(int i=0;i<4;i++)
        cin>>v[i];
        sort(v,v+3);


    q=v[2]-v[0];
    q+=v[2]-v[1];
    if(q>v[3])
      cout<<"NO"<<endl;
    else{
            v[3]-=q;
            if(v[3]%3==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
         }

  }
}
