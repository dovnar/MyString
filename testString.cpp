// testString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>

int _tmain(int argc, _TCHAR* argv[])
{
	std::string str = "hello world";
	str += "!!!";
	std::string d = " hello people ";
	str += d;
	std::cout << str << std::endl;
	std::cout << str.size() << std::endl;
	std::cout << str.length() << std::endl;
	str.front() = 'H';
	str.back() = '!';
	std::cout << str << std::endl;
	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	for (auto it : str)
	{
		std::cout << it << " ";
	}
	std::cout << std::endl;
	char a[] = { "hello world" };
	for (auto it : a)
	{
		std::cout << it << " ";
	}
	std::cout << std::endl;
	
	std::vector<int> myVector;
	std::list<int> myList;
	std::map<std::string, int> myMap;
	std::set<std::string> mySet;
	
	std::cout << "the end" << std::endl;
	for (int i = 1; i <= 10; ++i)
	{
		myVector.push_back(i);
	}
	std::cout << "the end vector" << std::endl;
	for (auto it: myVector)
	{
		std::cout << it << " ";
	}
	std::cout << std::endl;

	std::cout << "start list" << std::endl;
	for (int j = 0; j < 2; ++j)
	{
		for (int i = 1; i <= 10; ++i)
		{
			myList.push_back(i);
		}
	}
	std::cout << "the end list" << std::endl;
	for (auto it : myVector)
	{
		std::cout << it << " ";
	}
	std::cout << std::endl;
	std::cout << "the end list" << std::endl;
	myList.sort();
	std::cout << "the end list" << std::endl;
	myList.unique();
	std::cout << "the end list" << std::endl;
	for (auto it : myVector)
	{
		std::cout << it << " ";
	}
	std::cout << std::endl;
	std::cout << "the end list" << std::endl;
	return 0;
}

