#include<iostream>
using namespace std;
int main(){
	int a=4;
	int *ptr=&a;
	int b=5;
	int *ptr1=&b;
	int **q1=&ptr;
	int **q2=&ptr1;
	cout<<a<<endl;//print value of a
	cout<<ptr<<endl;//print address of a
	cout<<*ptr<<endl;//print value of a in which we use dereference operator
	cout<<**q1<<endl;//they also print value of a bcz of double pointer they refer ptr then a
	cout<<q1<<endl;//print address of ptr
	cout<<b<<endl;//print value of b
	cout<<ptr1<<endl;//print adress of b
	cout<<*ptr1<<endl;//print value of b
	cout<<**q2<<endl;//they also print value of b bcz of double pointer
	cout<<q2<<endl;//print address of ptr1
	
	return 0;
}
