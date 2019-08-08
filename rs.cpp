#include<iostream>
#include<string>

using namespace std;

int rev_str(string s,int n)
{
	string temp;
	temp=s[n-1];
	cout<<temp;
	n--;
	if(n==0)
	{
		return 0;
	}
	else
	{
		rev_str(s,n);
	}
}

int main(int argc,char *argv[])
{
	string str=argv[1];
	int n=str.length();
	cout<<str;
	cout<<endl;
	rev_str(str,n);
	return 0;
}
