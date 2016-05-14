// fca.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>  


int main()
{
	using namespace std;
	std::to_string(5);

	cout << "Hello world \n";
	typedef vector<string> myVec;
	typedef vector<int> myint;
	//typedef char myChar[];
	typedef string myString;
	myString S;
	myVec V;
	myint I;
	int x = 5;
	// c stile string fiunctions
	char myChar[] = {'h','e','l','l','o','\0'}; //because ist c style need '\0'
	                                            //to termanate ot it will keep reading
	                                            //memmory till it does
	cout << "myChar length " << strlen(myChar) << endl;
	char y = 'H';



   // p points to x 
	int* p = &x;
	cout << "x = " << x << endl;
    // change the value of x through p
	*p = 6;
	cout << "x = " << x << endl;
	x = 7;
	cout << "x = " << x << endl;

	for (int i = 0; i < 10; i++) {

		//V.push_back("h");
		//V.push_back(C);
		
	}
	//	std::cout << mychar;
	cout << V.size() << std::endl;

	for (int i = 0;i < V.size(); ++i) {
	cout << V[i] << " ";
    cout << i << endl;
}

	int n = 0;
	double nd = 0;
	cout << "Type in a int  " << endl;
	cin >> n;
	cout << " in is : " << n << endl;
	nd = n;
	cout << " square root of " << n << " == " << sqrt(nd) << endl;
    
	string previos = " ";
	string current = "";
	//this is not working with a full sentence
	while (cin >> current) {
		if (previos == current) {
			cout << " repeats word:" << current << endl;
		}
		previos = current;
		cout << " previos word :" << endl;
	}

	int a{ 0 };
	cout << "value f a := " << a << endl;
	a += 7;
	cout << "value of a += 7 := " << a << endl;
	a = a + 7;
	cout << "value f a = a + 7 := " << a << endl;

	int b{ 0 };
	b += 10;
	cout << "value of b +=10 : " << b << endl;
	b -= 9;
	cout << "value of b -=9 : " << b << endl;
	b *= 2;
	cout << "value of b *=2 : " << b << endl;

	constexpr double pi = 3.14159265359;
	constexpr int max = 17;
	const int c2 = n + 7;
	int val = 19;
	max + 2;

	constexpr double cm_per_inch = 2.54;
	double length ;
	char unit;

	cout << " Please enter a lenth followed by ab unit (c or i )" << endl;
	cin.clear(); // to clear any errors that is on cin .

	cin >> length >> unit;
	switch (unit) {
	case 'i':
		cout << length << "in == " << cm_per_inch*length << "cm\n";
		break;
	case 'c':
		cout << length << "cm == " << length / cm_per_inch << "IN\n";
		break;
	default:
		cout << "Sorry i do not know of the unit called" << unit << endl;
		break;
	}
	
	/*
	//We can not user case with strings , but we can user case with chars
	// There should be a nothere whay 
	string s;
	cout << "Do you like fish" << endl;
	cin >> s;

	switch (s) {
		}
	{
	default:
		break;
	}
	*/
	return 0;
}
