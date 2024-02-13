/*Question 6: Count Vowels 
A program that counts the number of vowels in a sentence. 
*/

#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int countvowels(const string sentence)
{
	int vowelcount=0;
	for(char c; sentence)
	{
		char lowerC=to lower(c);
		if (lowerC=='a'||lowerC=='e'||lowerC=='i'||lowerC=='o'||lowerC=='u')
		{
		vowelcount++;
			
		}
	}
	return vowelcount;
}
int main()
{
string sentence;
cout<<"enter sentence";
cin>>sentence;
int num vowels=countvowels(sentence);
cout<<"number of vowels in tghe sentence is "<<numvowels<<endl;
return 0;	
  }