// fca.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

int main()
{
	std::cout << "Hello world \n";
	std::vector<char>names;
	for (int i; i < 10; i++) {
		names.push_back("h");
	}
	std::cout << names;
    return 0;
}

