/*https://zerojudge.tw/ShowProblem?problemid=b966*/
#include <iostream>
#include <cstring>
using namespace std;
bool a[10000000]={0};
int main()
{
    int n,l,r,i;
    cin>>n;
    while(n--)
    {
        cin>>l>>r;
        for(i=l;i<r;i++)
        {
            a[i]=1;
        }
    }
    int x=0;
    for(i=0;i<10000000;i++)
    {
        if(a[i])
        {
            x++;
        }
    }
    cout<<x<<"\n";
}