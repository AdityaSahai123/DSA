#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int c=65;
        for(int j=i;j<=n;j++)
        {
            char a=(char)c;
            cout<<a;
            c++;
        }
        cout<<endl;
    }

    return 0;
}