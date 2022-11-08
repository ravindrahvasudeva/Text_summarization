#include<iostream>
using namespace std;
int main()
{
int c=0;

char str[100];
gets(str);
for(int i=0;str[i]!='\0';++i)
{
		c+=1;
 }
cout<<c;
}
