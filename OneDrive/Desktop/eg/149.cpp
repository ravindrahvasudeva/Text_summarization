#include<iostream>
using namespace std;
int	countspecificnumber(int m,int n)
{int count=0;
	if(m>n)
	 return -1;
	if(m<=n)
	{
		for(int i=m;i<n;i++)
		{ int num=i,flag=0;
			while(num){
			int n=num%10;
			num=num/10;
			if(n==1||n==4||n==9)
			  continue;
			else{
				flag=1;
				break;
			}
		}
		if(flag==0){
			count++;
		}
	}
}
return count;
 
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<countspecificnumber(m,n);
	return 0;
}
