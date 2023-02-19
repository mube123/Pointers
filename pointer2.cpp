#include<iostream>
using namespace std;
int main()
{
	int a=10,b=20,*p1=&a,*p2=&b;
	//int* p1,int* p2;
	cout<<"Value of a: "<<a<<endl;
	cout<<"Value of b: "<<b<<endl;
	cout<<"Value of a through pointer: "<<*p1<<endl;
	cout<<"Value of b through pointer: "<<*p2<<endl;
	//cout<<"Value of *p1(address of a): "<<*p1<<endl;
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	cout<<"Values after swapping:"<<endl;
	cout<<"Value of *p1(a): "<<*p1<<endl;
	cout<<"Value of *p2(b): "<<*p2<<endl;
	
}
