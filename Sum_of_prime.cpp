#include<iostream>
using namespace std;

int prime_no(int b)
{
if (b<4) {
	return 0;
}
else if(b==4)
{return 1;}
else
{ int n=0;
 	int i,rem;
 	for(i=2;i<(b)/2;i++)
	 {
 		rem=b%i;
 		if(rem==0)
 		{   n=n+1;
 			return 1;
 			break;
		 }	 
		 
	 }
	 
	 return n;
}
}

int sum (int a)
{
	int j;
 for(j=1;j<=a/2;j++)
 {
 	int b,n,m;
 	b=a-j;
    m=prime_no(j);
 	n=prime_no(b);
 if(n==0 && m==0)
   {cout<<a<<"="<<b<<"+"<<j<<endl;	
 	}
  }
  return 0;
}


int main()
{
	int a,b;
	cout<<"Enter the Number:";
	cin>>a;
	b=sum(a);
	return 0;
}


