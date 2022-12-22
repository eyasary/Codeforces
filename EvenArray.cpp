/*#include<bits/stdc++.h>
using namespace std;
int t,n;
int main()
{
    cin>>t;
    while(t--)
    {   int nb=0,x=2,y=2,aux,c=0,x1=0,y1=0;
          bool test=false;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            if((v[i]%2)!=(i%2))
                {   if(x==2)
                    {x=v[i]%2;
                    x1=i;

                    }
                    for (int j=i+1;j<n;j++)
                    {
                        if((v[j]%2)!=(j%2))
                        {
                            if (v[i]%2!=v[j]%2)
                            {y=v[j]%2;
                            y1=j;
                             aux=v[x1];
                            v[x1]=v[y1];
                            v[y1]=aux;
                            x=2;y=2;
                            c++;
                            test=true;
                            }

                        }
                        if(test==true)
                            break;

                    }




                }

        }
        if(x!=2&&y==2)
            cout<<-1<<endl;
        else
            cout<<c<<endl;


    }

}*/
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n,a[100];
    cin>>t;
    while(t--)
    {
        int c = 0,flag = 0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int odd = 0,even = 0;
        for(int i=0; i<n; i++){
            if(i%2 != a[i] % 2){
                if(a[i] % 2 == 1)odd++;
                else even++;
            }
        }
        if(odd != even){
            cout<<-1<<endl;
        }
        else{
            cout<<even<<endl;
        }
    }
    return 0;
}
