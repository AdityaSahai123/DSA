#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c;
    for(int i=1;i<=n;i++)
    {
        c=n-i+1;
       // cout<<i;
            for(int j=1;j<=i;j++)
            {
              //  char a=(char)c;
                cout<<char(64+c);
                c++;
            }
        

        cout<<endl;
        
    }

    return 0;
}