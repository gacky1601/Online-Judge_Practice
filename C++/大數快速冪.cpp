#include <iostream>
#include <algorithm>
using namespace std;
 
string times(string a,string b)
{
	int lenb=b.size(),
    	lena=a.size();
	int i,j;
	string c;
	for(i=0;i<lenb;i++)
	{
		for(j=0;j<lena;j++)
		{
			if (i+j >= c.size()) c += a[j] * b[i];
			else c[i+j]+=a[j]*b[i];
		}
	}
	for(i=0;i<lena+lenb-1;i++)
	{
		
			c[i+1]+=c[i]/10;
			c[i]=c[i]%10;
		
	}
	if(c[c.size()])
	{
		c+=c[c.size()];
	}
	return c;
}
string division(string b)
{
	int i;
	for(i=b.size()-1;i>0;i--)
	{
		b[i-1]+=(b[i]%2)*10;
		b[i]=b[i]/2;
	}
	b[0]/=2;
	for(i=b.size()-1;i>=0;i--)
	{
		if(b[i]!=0)
		{
			break;
		}
	}
	return b.substr(0,i+1);
}
string pow(string a,string b)
{
 
	if(b[0]==1&&b.size()==1)
	{
		return a;
	}
	if(b[0]%2==0)
	{
		return pow(times(a,a),division(b));
	}
	b[0]--;
	return times(a,pow(a,b));
}
int main() 
{
	string a,b,c;
	int i;
	while(cin>>a>>b)
	{
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		for(i=0;i<a.size();i++)
		{
			a[i]-='0';
		}
		for(i=0;i<b.size();i++)
		{
			b[i]-='0';
		}
		c=pow(a,b);
		for(i=c.size()-1;i>=0;i--)
		{
			cout<<char(c[i]+'0');
		}
		cout<<"\n";
	}
 
}