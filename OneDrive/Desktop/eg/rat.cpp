#include<iostream>
using namespace std;
int rat(int r,int u,int a[],int n){

if(n==0){
	return -1;
} int add=0,cnt=0,i;
	int food=r*u;
	for(i=0;i<n;i++){
		add+=a[i];
		if(add>=food)
		 {
		   
		   break;
		 }}
	 if(food>add){
    	return 0;
	}
   return i+1;
}
int main()
{ int r,u,n;
cin>>r;
cin>>u;
cin>>n;
int a[n];
 
 for(int i=0;i<n;i++){
 	cin>>a[i];
	 }	
	cout<< rat(r,u,a,n);
	return 0;
}
