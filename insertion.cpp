#include<iostream>
using namespace std; 
void insertionSort(int n,int a[])  
{  
	int i,k,j;  
    	for (i=1;i<n;i++) 
    	{  
        	k=a[i];  
        	j=i-1;  
        	while(j>=0&&a[j]>k) 
        	{  
            		a[j+1]=a[j];  
            		j=j-1;  
        	}  
        	a[j+1]=k;  
    	}  
	for (i = 0; i < n; i++)  
        	cout<<a[i]<<" ";  

}  
  
int main(int argc,char *argv[])  
{    
	int n=argc-1;  
  	int a[n];
	int k=1;
	for(int i=0;i<n;i++)
	{
		a[i]=atoi(argv[k++]);
	}
    	insertionSort(n,a);  
    	return 0;  
}  
