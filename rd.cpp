#include<iostream>
#include<string>

using namespace std;

int main(int argc,char *argv[])
{
	string str=argv[1];
	int n=sizeof(str)/sizeof(str[0]);
	int index=0;
	cout<<"string before : "<<str<<endl;
	for(int i=0;i<n;i++)
	{
		int j;
		for(j=0;j<i;j++)
			if(str[i]==str[j])
				break;
		if(j==i)
			str[index++]=str[i];
	}
	cout<<"string after : "<<str;
	return 0;
}
