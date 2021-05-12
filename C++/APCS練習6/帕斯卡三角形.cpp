#include <iostream>

using namespace std;

int main()
{
    int t,n,m,i,j;
    cin>>t;
    int a[13][13];
    for(i=0;i<13;i++)
    {
        for(j=0;j<13;j++)
        {
            a[i][j]=0;
        }
    }
    a[0][0]=1;
    for(i=1;i<13;i++)
    {
        a[i][0]=1;
        for(j=1;j<=i;j++)
        {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    while(t--)
    {
        cin>>m>>n;
        cout<<a[m-1][n-1]<<endl;
    }
}
