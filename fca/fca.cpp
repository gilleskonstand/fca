// fca.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>  
#include <math.h>


using namespace std;
//function prototyping 
void helloWorld();
void vectorStest();
void vectorCharArry();
void IntOddorEVEN();
void AddinSubstrakting();
void constexprMineWithCase();
void CharandIntValues();
void ChangeContentofxviapointer();

int main()
{
	//to_string(5);

	//helloWorld();
	//vectorStest();
	vectorCharArry();
	//CharandIntValues();

	return 0;
};


//returne type from fuction , then name of function
void helloWorld()
{
	cout << "Hello world" << endl;
}

void CharCharArraysTest()
{
	// c stile string functions
	char myChar[] = { 'h','e','l','l','o','\0' }; //because ist c style need '\0'
												  //to termanate ot it will keep reading
												  //memmory till it does

												  //can i declare this char arry without 
												  //puting each one in is one '' enluser and a , between each one 
												  // Note teh fiffereant "  and tehre is no \0 in the def , but the arry is terminated with a \0
	char myCharTry2[] = { "hello" };//because ist c style need '\0'
									//to termanate ot it will keep reading
									//memmory till it does
	cout << "myChar length " << strlen(myChar) << endl;
	cout << "myChartry2 length " << strlen(myCharTry2) << endl;
	cout << "myChartry2 the content of 3  " << myCharTry2[4] << endl; // remember you start with 0 so 4 is the 3rd element
	cout << "myChar the content of 3  " << myChar[4] << endl;// remember you start with 0 so 4 is the 3rd element
};

void vectorCharArry()
{
	//char test[6] = { "AbCdE" };
	char test[30] = { "" }; // need to ineselise the fill arry so it do not get fully stuff reading teh array
	test[0] = 'A';
	test[1] = 'b';
	test[2] = 'C';
	test[3] = 'd';
	test[4] = 'E';
	vector<string> v;
	v.push_back(test);

	char element2[6] = { "TVXYZ" };
	v.push_back(element2);

//get the compilet to get the type of i with auto 
	for (auto i = v.begin(); i != v.end(); ++i)
		cout << "using *i to print " << *i << ' ' << endl;
	//cout << "Vector v , lets see if it working" << v;
};

void vectorStest()
{
	typedef vector<string> myVec;
	typedef vector<int> myint;
	//typedef char myChar[];
	typedef string myString;
	myString S;
	myVec V;
	myint I;
	char y = 'H';

	
	for (int i = 0; i < 10; i++) {

		//V.push_back("h");
		//V.push_back(C);

	}
	//	std::cout << mychar;
	cout << V.size() << std::endl;

	for (int i = 0; i < V.size(); ++i) {
		cout << V[i] << " ";
		cout << i << endl;
	}

};

void ChangeContentofxviapointer()
{
	int x = 5;
	// p points to x 
	int* p = &x;
	cout << "x = " << x << endl;
	// change the value of x through p
	*p = 6;
	cout << "x = " << x << endl;
	x = 7;
	cout << "x = " << x << endl;
};

void IntOddorEVEN() {
	int n = 0;
	double nd = 0;
	cout << "Type in a int  " << endl;
	cin >> n;
	cout << " in is : " << n << endl;
	nd = n;
	cout << " square root of " << n << " == " << sqrt(nd) << endl;
};

void CheckDoubleWords() {

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

};

void AddinSubstrakting() {
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
};

void constexprMineWithCase() {
	int n = 0;
	constexpr double pi = 3.14159265359;
	constexpr int max = 17;
	const int c2 = n + 7;
	int val = 19;
	max + 2;

	constexpr double cm_per_inch = 2.54;
	double length;
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
	/*
	One can have the same code run for different case lables
	case '0': case '2': case '4':  case '6': case '8':

	*/

	cout << "Please enter a digit " << endl;
	char diga;
	cin >> diga;
	switch (diga)
	{
	case '0': case '2': case '4':  case '6': case '8':
		cout << diga << " is even" << endl;
		break;
	case '3': case '5': case '7':  case '9':
		cout << diga << " is od" << endl;
		break;
	}

};

void whileStatment() {
		/*
		lets work a bit with the while statment
		*/
		int while_i = 0;
		while (while_i < 5)
		{
			cout << while_i << '\t' << while_i*while_i << endl;
			++while_i;
		}
	};


void CharandIntValues() {
	/*
	print character and its nr
	*/
	cout << "start of the char values" << endl;
	const char lc_alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	const char uc_alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	//const char *cur = lc_alphabet;
	//cout << *cur << '\t' << (int)*cur << '\n';
	
	for (const char *cur = lc_alphabet;
	                 cur < lc_alphabet + sizeof(lc_alphabet);
	                 ++cur)
	cout << *cur 
		 << '\t' 
		 << (int)*cur 
		 << '\n';

	for (const char *cur = uc_alphabet;
	                 cur < uc_alphabet + sizeof(uc_alphabet);
	                 ++cur)
	cout << *cur 
		 << '\t' 
		 << (int)*cur 
		 << '\n';
	
};