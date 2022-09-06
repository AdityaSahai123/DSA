#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int k=i;k<=n;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {

            cout<<"*"<<" ";
        }
        cout<<endl;
    }

     for(int i=2;i<=n;i++)
    {
        for(int k=1;k<=i;k++)
        {
            cout<<" ";
        }
        for(int j=i;j<=n;j++)
        {

            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}