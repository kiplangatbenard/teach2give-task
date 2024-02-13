
/*Question 5: Reverse Integer 
A program that takes an integer as input and returns an integer
 with reversed digit ordering. 
*/


#include<iostream>
using namespace std;
int reverseIntager(int num)
{
int reversed=0;
while(num!=0)
{
	int digit=num%10;
	reversed=reversed*10+digit;
	num/=10;
}	
return reversed;
}
int main()
{
	int num;
	cout<<"enter a number";
	cin>>num;
	int reversedNum=reverseIntager(num);
	cout<<"reversed intager is"<<reversedNum;
	cout<< endl;
	return 0;
}