#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string a,b;
    char z;
    while(cin>>a>>z>>b)
    {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int c[1001]={0},e[1001]={0},i,j,lena,lenb;
        lenb=b.size()-1;
        lena=a.size()-1;
        for(i=lena;i>=0;i--)
        {
            c[i]=a[i]-'0';
        }
        
        if(z=='*')
        {
            for(i=0;i<=lenb;i++)
            {
                for(j=0;j<=lena;j++)
                {
                    e[j+i]+=(a[j]-'0')*(b[i]-'0');

                }
            }
            /*for(i=lena+lenb;i>=0;i--)
            {
                cout<<e[i]<<" ";
            }*/
            for(i=0;i<lena+lenb+1;i++)
            {
                e[i+1]+=e[i]/10;
                e[i]=e[i]%10;
            }

            i=lena+lenb+1;
            while(e[i]==0&&i!=0)
            {
                i--;
            }
            for(;i>=0;i--)
            {
                cout<<e[i];
            }
            
        }
        
        
        cout<<"\n";
    }
}

