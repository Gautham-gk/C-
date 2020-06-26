#include <iostream>
using namespace std;
int main()
{   int age;
    char name[25];
	cout<<"Enter Your Name:"<<endl;
	cin>>name;
	cout<<"Enter Your Age:\n";
	cin>>age;
	if(age<0){
		cout<<"Please enter a valid age";
	}
	else if(age<18){
		int b=18-age;
		cout<<name<<",You are not eligible to vote yet.You Can vote after "<<b<<" years.";
	}
	else {
		cout<<name<<",You are eligible to vote";
	}
}
