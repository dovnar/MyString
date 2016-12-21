#include "stdafx.h"
#include "MyString.h"

MyString::~MyString()
{
	delete[] string;
}

MyString::MyString()
{
	length = maxLen;
	string = new char[length];
	string = nullptr;
	
}

MyString::MyString(const char* str)
{
	if (str != nullptr)
	{
		length = strlen(str);
		string = new char[length];
		strcpy(string, str);
		
	}
	else
	{
		std::cout << "warning!!! The transferred massif isn't valid" << std::endl;
	}
}

MyString::MyString(const int sizeArray)
{
	if (sizeArray > maxLen && sizeArray < 0)
	{
		std::cout << "warning!!! The size of the massif doesn't correspond to range from 1 to 100" << std::endl
			<< "The massif of 100 symbols is created" << std::endl;
		length = maxLen;
		string = new char[length];
	}
	else
	{	
		length = sizeArray;
		string = new char[length];
	}
	string = nullptr;
}

MyString::MyString(const char* str, const int sizeArray)
{
	if (sizeArray != strlen(str))
	{
		std::cout << "warning!!! the size of a line doesn't correspond to the transferred value" << std::endl
			<< "creation the massif with a size of " << strlen(str) << std::endl;
	}
	
	length = strlen(str);
	string = new char[length];
	strcpy(string, str);

}

MyString::MyString(const MyString&)
{

}

MyString& MyString::operator=(const MyString&)
{

}