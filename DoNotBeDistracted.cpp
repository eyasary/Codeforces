#include<bits/stdc++.h>
using namespace std;
int t,n;
int main()
{   string ch,ch1;
     bool test;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>ch;
        for(int i=0;i<ch.size();i++)
        {   test= true,ch1="";
         int q=-1;
            if(ch[i]!=ch[i+1])
                {
                    ch1=ch.substr(i+1,n);
                    q=ch1.find(ch[i]);
                    if(q!=-1)
                    {
                        test=false;
                        break;
                    }

                }
        }
        if(test==true)
            cout<<"Yes"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
