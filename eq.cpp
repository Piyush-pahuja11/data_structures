#include<iostream>
#include<string>
using namespace std;
void seq(string s,string s1)
{
int a=s.length();
int b=s1.length();
int c=0;
if(a==b)
{
for(int i=0;i<a;i++)
{
if(s.at(i)==s1.at(i))
c++;
}
if(c==a)
cout<<"strings are equal";
else
cout<<"strings are not equal";
}
else
cout<<"strings are not equal";
}

int main(int argc,char *argv[])
{
string s=argv[1];
string s1=argv[2];
seq(s,s1);
return 0;
}
