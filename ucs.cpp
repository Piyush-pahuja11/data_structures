#include<iostream>
#include<string>

using namespace std;

int main(int argc,const char* argv[])
{
string str=argv[1];
cout<<"string before : "<<str<<endl;
for(int i=0;i<str.length();i++)
  {
	    if(str[i]>=97 && str[i]<=122)
	    {
		str[i]=str[i]-32;
	    }
  }
  cout<<"string after : "<<str<<endl;
}
