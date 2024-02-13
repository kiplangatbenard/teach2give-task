
/*Question 2: Fibonacci Sequence 
A program to generate the Fibonacci sequence up to 100. 

*/


#include<iostream>
using namespace std;
int main()
{
int num1=0;
int num2=1;
int nextTerm=0;
cout<<"fabonacci square";
cout<<num1<<","<<num2;
nextTerm=num1+num2;
while(nextTerm<=100)
  {
	cout<<","<<nextTerm;
	num1=num2;
	num2=nextTerm;
	nextTerm=num1+num2;
	
    }
cout<<endl;	
return 0;
}

