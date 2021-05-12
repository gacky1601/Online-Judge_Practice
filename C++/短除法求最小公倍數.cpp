#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
int a,b,c,d,e,i;
d=2;
c=0;
e=1;
scanf("%d %d",&a,&b);
if(a<b)
    {c=a;
    a=b;
    b=c;
    }
c=0;
for(i=0;i<=a;i++)
    {if(a%d==0 && b%d==0)
        {printf(" |  %d  %d \n%d|______________\n",a,b,d);
        a=a/d;
        b=b/d;
        e=e*d;
        }
    else
        {d++;}
    if(d>a)
    {i=a+1;
    printf("    %d  %d\n",a,b);
    }

    
}
e=e*a*b;
printf("%d",e);
}
