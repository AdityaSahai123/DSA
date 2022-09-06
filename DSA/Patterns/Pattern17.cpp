#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=65;
    for(int i=1;i<=n;i++)
    {
        for(int k=n;k>i;k--)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            char a=(char)c;
            cout<<char(64+j)<<" ";
            
        }

        for(int j=i-1;j>=1;j--)
        {
            cout<<char(64+j)<<" ";
        }
        cout<<endl;
     
    }

    return 0;
}