/*
* File: Lab Project 2 - 1
* Author: Chase McCluskey
* Date: 9/5/24
* 
* Declaration: Printing Strings and Ignoring user input 
*/

#include <string>
#include <iostream>

using namespace std;
int main()
{
	cout << "Hello, my name is Hal!" << endl;
	cout << "What would you like me to do?";
	string user_input;
	getline(cin, user_input);
	cout << "I am sorry, I cannot do that.";
	return 0;
}