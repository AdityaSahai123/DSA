#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=65;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            char a=(char)c;
            cout<<a;
            
        }
        cout<<endl;
        c++;
    }

    return 0;
}