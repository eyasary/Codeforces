#include<bits/stdc++.h>
using namespace std;
int Calcul(string s)
   {   istringstream result(s);
       int a,b;
       char p;
       result>>a>>p>>b;
       return a+b;
   }
int main()
{
    int n;
    cin>>n;
    while(n--)
    {   string s;
        cin>>s;
        cout<<Calcul(s)<<endl;
    }
}
