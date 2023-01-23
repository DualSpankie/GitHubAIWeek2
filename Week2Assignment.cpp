// Week2Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int function1(int a, int b)
{

	for (int i = 0; i <= 1000; i++)
		if ((i / a) && i % a == 0)			
			cout << "The number " << i << " can be divided by " << i / a << ". " << endl;

	for (int i = 0; i <= 1000; i++)
		if ((i / b) && i % b == 0)
			cout << "The number " << i << " can be divided by " << i / b << ". " << endl;
	return 0;
}

void function2() 
{
	string typeString = "Hello World";

	for(int i = typeString.length(); i >= 0; i--)
	{
		cout << typeString[i];
	}
	cout << endl;

}

void function3()
{
	string myString = "The cake is a lie";

	char vowels[] = { 'a', 'e', 'i', 'o', 'u' };

	for (int i = 0; i < myString.length(); i++)
	{
		if (myString[i] == vowels[0] || myString[i] == vowels[1] || myString[i] == vowels[2] ||
			myString[i] == vowels[3] || myString[i] == vowels[4])
		{
			
		}
		else cout << myString[i];
	}	
}

int main()
{
	function1(20, 50);
	function2();
	function3();

}

