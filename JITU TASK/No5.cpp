/*
Question 4: Capitalize Words 
A program that accepts a string as input,
 capitalizes the first letter of each word in the string, 
 and then returns the result string. 
*/


#include<iostream>
#include<sstream>
#include <cctype>
using namespace std;
string capitalizeword(const string &input)
{
	string stream ss(input);
	string word,result;
	while(ss>>word)
	{
	word[0]=toupper(word[0]);
	result+=word"";
	}
}
if(!Result.empty())
{
	Result.pop_back();
	
}
return results
}
int mani()
 {
	string input;
cout<<"enter a string";
cin>>input;
cout<<"capitalised sting"<<result<<endl;
  }
	return 0;
}