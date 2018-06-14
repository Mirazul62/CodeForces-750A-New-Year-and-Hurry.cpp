#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,count=0,ex=0,res=0;
    cin>>n>>m;
    ex=240-m;
    for(i=1;i<=n;i++)
    {
        count+=(5*i);
       // res++;
       // cout<<count<<endl;
        if(count>ex)
            break;
            res++;
           // cout<<count;
    }
    cout<<res;
}
