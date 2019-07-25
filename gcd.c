#include<stdio.h>
#include<stdlib.h>
 int gcd(int a,int b)
         {
              if(a%b==0)
               {
                      return b;
               }
              else
              {
                      return(gcd(b,a%b));
              }
         }  
int main(int argc,char *argv[])
{
    int j=0,n,m;
    printf("Enter number of elements :");
    n=argc-1;
    int a[n];
for(int i=0;i<argc;i++)
{if(i==0)
continue;
a[j++]=atoi(argv[i]);
}
    
    for(int i=0;i<n-1;i++)
        {
          m=gcd(a[i],a[i+1]);
          a[i+1]=m;
        }
          printf("The gcd is : %d",m);
      return 0;      
  }
      
