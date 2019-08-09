#include<iostream>
using namespace std;
void sort(int n,int a[])
{
	int m,t,j;
	for(int i=0;i<n-1;i++)
	{
		m=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[m])
				m=j;
				
		}
	t=a[i];
	a[i]=a[m];
	a[m]=t;
				
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}	
}
int main(int argc,char *argv[])
{	int n=argc-1;
	int a[n];
	int k=1;
	for(int i=0;i<n;i++)
	{
		a[i]=atoi(argv[k++]);
	}
	sort(n,a);
return 0;
}
