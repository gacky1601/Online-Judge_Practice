#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int fucn(string a,string c)
{
    int i;
    if(a.size()<c.size())
    {
        return 0;
    }
    for(i = a.size() - 1;i >= 0;i--)
    {
        if(c[i] < a[i])
        {
            return 0;
        }
        if(c[i] > a[i])
        {
            return 1;
        }
    }
}

string times(string a,string b)
{
	int lena = a.size();
	int lenb = b.size();
	int i,j;
	string c = "";
	for(i = 0;i < lena;i++)
	{
	    c += '0';
	}
	for(j=0;j<lena;j++)
	{
		if (i + j >= c.size()) 
		{
		    c += a[j] * b[0];
		}
		else c[j] += a[j] * b[0];
	}
	for(i = 0;i < lena + lenb - 1;i++)
	{
		c[i+1] += c[i] / 10;
		c[i] = c[i] % 10;
	}
	if(c[c.size()])
	{
		c += c[c.size()];
	}
    if(fucn(a,c))
    {
        b = b - 1;
        return b;
    }
    times(a,b);
}

string division(string a,string b,string c,int lenb)
{
    if(b.size() < lenb)
    {
        return c;
    }
    c = c + times(a,b);
    b.substr(1);
    division(a,b,c,lenb);
}

int main()
{ 
    string a,b,c;
    c="";
    char z;
    while(cin>>a>>b)
    {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int j,i,lena,lenb;
        lenb = b.size()-1;
        lena = a.size()-1;
        for(i = lena;i >= 0;i--)
        {
            a[i] = a[i] - '0';
        }
        for(i = lena;i >= 0;i--)
        {
            b[i] = b[i] - '0';
        }
        while(lenb < lena)
        {
            b = '0' + b;
        }
        c = division(a,b,c,lenb);
        cout<<c;
    }
}
