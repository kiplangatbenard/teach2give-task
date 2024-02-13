/*Question 3: Power of Two 
A program that takes an integer as input and returns true 
if the input is a power of two. 
*/
#include<iostream>
using namespace std;
bool isPowerOfTwo(int n)
{
	return((n>0)&&(n&(n-1))==0);
}
int main()
{
	int num;
	cout<<"enter an integer";
	cin>>num;
	if(isPowerOfTwo(num))
	{
		cout<<num<<" is a power of two";
	}
	else
	{
		cout<<num<<" is not a power of two\n";
	 }
	return 0;
}