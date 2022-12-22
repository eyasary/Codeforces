#include<bits/stdc++.h>
using namespace std;
int a;
vector<int> v(4);
int main()
{
    for (int i=0;i<4;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),greater<int>());
    int j=0;
    for(int i=1;i<4;i++)
    {
        cout<<v[j]-v[i]<<" ";
    }

}
