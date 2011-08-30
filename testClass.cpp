//
//  testClass.cpp
//  Class & Multiple File Test
//
//  Created by Chris Torstenson on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "testClass.h"

using namespace std;



////////////////////////////////////////////
/////// CONSTRUCTORS & DeSTRUCTORS //////// 
//////////////////////////////////////////


// CONSTRUCTOR w/ no argument
TestClass::TestClass () {
    varInt = new int;
    *varInt = '0';
}

// CONSTRUCTOR w/ 1 argument
TestClass::TestClass (int x) {
    varInt = new int;
    *varInt = x;
}

// DESTRUCTOR
TestClass::~TestClass() {
    delete varInt;
}



/////////////////////////
/////// Setters ////////
///////////////////////

// Sets a reference to the varInt
void TestClass::setVarInt(int x) {
    //year = new int;
    
    *varInt = x;
}



/////////////////////////
/////// Getters ////////
///////////////////////


// Returns a reference to the YEAR
int * TestClass::getVarInt() {
    return varInt;
}



/////////////////////////////
//////// Others... /////////
///////////////////////////



// Prompts for and receives input
void TestClass::contentQuery(void) {
    //cout << endl << "hello, this is a test of the input method" << endl;
    cout << "Give me an integer?" << endl << "feed me here: ";
    cin >> *varInt;
	cin.ignore (100, '\n');
    cout << endl << endl << "I got " << *varInt << " stored at the location " << varInt << endl << endl << endl;
    

	cout << "and now give me a word or two" << endl << "enter: ";
	cin.get(varArrayChar, 100);
	cin.ignore (100, '\n');
	cout << endl << endl << "I got: " << varArrayChar << " stored at the location: " << &varArrayChar << endl << endl;
	
    //cout << "What is the Month? (give a number)" << endl << "enter: ";
    //cin.get(month, 1);
    //cin.ignore(5, '\n');
    //cout << "What is the day? (give a number)" << endl << "enter: ";
    //cin.get(day, 1);
    //cin.ignore(5, '\n');
    //cout << endl << endl;
    }












