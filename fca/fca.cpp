// fca.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>  
#include <math.h>
#include <algorithm> // what is the standerd library for soort algorithm


using namespace std;

//function prototyping 

//used to check how many elements are in an array for example
#define NUMBEROFELEMENTS(x)  (int)(sizeof (x) / sizeof (x[0])) 

void helloWorld();
void vectorStest();
void vectorCharArry();
void IntOddorEVEN();
void AddinSubstrakting();
void constexprMineWithCase();
void CharandIntValues();
void CharCharArraysTest();
void ChangeContentofxviapointer();
void PlayingWithInLineASM();
void Sorry_word();
void ForloopwithVectordouble();

int main()
{
	//to_string(5);
	//'helloWorld();
	//vectorStest();
	//vectorCharArry();
	//CharandIntValues();
	//CharCharArraysTest();
	//Sorry_word();
	ForloopwithVectordouble();
	return 0;
};


//returne type from fuction , then name of function

void ForloopwithVectordouble() {
	vector<double>v_temps;

	for (double i_temp;
		 cin >> i_temp;) 
	{
		v_temps.push_back(i_temp);

		double sum = 0;
		for (double x: v_temps) {
			sum += x;
		};
		cout << " Average Temperature : " << sum / v_temps.size() << endl;
		
		sort(v_temps.begin(),v_temps.end()); // sort of an vector orders the elements from low to high, 
											 //whats not clear to me is if it changes the elements 
		                                     //pointers or if it actaly moves the contes of the elements 

		cout << " Median temperature: " << v_temps[v_temps.size() / 2] << endl;
	};

};
void print_squaare(int v) {
};
void Sorry_word() {
	cout << " sorry !"<< endl;
}
void PlayingWithInLineASM() {
	/* 
	// At this stage Visual Studio is not suporting asm inline with 64 bit.. relay sad ...
	char format[] = "%s %s\n";
	char hello[] = "Hello";
	char world[] = "earth";
	
		__asm // start ASM code here
		{
			mov  eax, offset world // move the address of world to eax
			push eax         // Push the address of world to the stack
			mov  eax, offset hello // eax = &amp;(hello[0])
			push eax               // push hello to the stack
			mov  eax, offset format // eax = format
			push eax                // push format to the stack
			call printf // here is the problem printf is not define
						// at the time of compilation.
						// It will be define in run time.
						//clean up the stack so that main can exit cleanly
						//use the unused register ebx to do the cleanup
						pop  ebx
						pop  ebx
						pop  ebx
		} // end of ASM code
  */
};
void helloWorld()
{
	cout << "Hello world" << endl;
}
void CharCharArraysTest()
{
	// c stile string functions
	char myChar[6] = { 'h','e','l','l','o','\0' }; //because ist c style need '\0'
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

	// for (auto i = 0; i < strlen(myChar) + 3; ++i)
	//	cout << "using myChar[i] to print " << "->" << myChar[i] << "<-" << endl;

	for (auto i = 0; i < strlen(myChar) + 500; ++i)
		cout << myChar[i] ;

};
void vectorCharArry()
{
	vector<string> v;
	
	char test[6] = { "" }; // need to ineselize the arry 
	                       //so it do not get funn stuff when reading the array back
	test[0] = 'A';
	test[1] = 'b';
	test[2] = 'C';
	test[3] = 'd';
	test[4] = 'E';
	//load the arry, test of size 6 termenate by "\0" into vector v 
	v.push_back(test);

	char element2[6] = { "VXYZ" };
	//load the arry, element2 of size 5 termenate by "\0" into vector v 
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