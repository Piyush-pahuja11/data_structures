
#include<stdio.h> 
#include<stdlib.h>
int bs(int a[],int l,int r,int x) 
{ 
   if (r>=l) 
   { 
        int m=(l+r)/2;  
        if (a[m]==x)
        {
        return m; 
        }        
        if (a[m]>x)
   	{ 
        return bs(a,l,m-1,x); 
   	}
else
 	return bs(a, m+1,r,x); 
   }  
   return -1; 
} 
  
int main(int argc,char *argv[]) 
{ 
int n=argc-1,j=0,r;
int a[n];
for(int i=1;i<n;i++)
{
a[j++]=atoi(argv[i]);
}
   int x;
scanf("%d",&x); 
   r=bs(a,0,n-1,x); 
   if(r==-1)
printf("Element not found");
else
printf("Element is present at index %d",r); 
   return 0; 
}
