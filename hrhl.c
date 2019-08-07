#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
        int n=argc-1;
        int a[argc-1];
        int j=0;
       for(int i=1;i<argc;i++)
         {
             a[j++]=atoi(argv[i]);
         }
       int r,l;
       scanf("%d",&r);
       scanf("%d",&l);
       int t,t1;
       for(int x=0;x<r;x++)
         {
             t=a[(n/2)-1];
             for(int i=((n/2)-1);i>0;i--)
                {a[i]=a[i-1];
                }
             a[0]=t;
        }
       for(int x=0;x<l;x++)
       {
            t1=a[n/2];
           for(int i=(n/2);i<(n-1);i++)
               {a[i]=a[i+1];
               }
           a[n-1]=t1;
        }

          for(int i=0;i<(n);i++)
           {
              printf("%d",a[i]);
           }
        return 0;

}
