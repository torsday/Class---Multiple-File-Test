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


// CONSTRUCTOR
TestClass::TestClass (int x) {
    value = new int;
    *value = x;
}

// DESTRUCTOR
TestClass::~TestClass() {
    delete value;
}



/////////////////////////
/////// Setters ////////
///////////////////////

// Sets a reference to the Value
void TestClass::setValue(int x) {
    //year = new int;
    
    *value = x;
}



/////////////////////////
/////// Getters ////////
///////////////////////


// Returns a reference to the YEAR
int * TestClass::getValue() {
    return value;
}



/////////////////////////////
//////// Others... /////////
///////////////////////////



// Prompts for and receives input
void TestClass::contentQuery(void) {
    cout << endl << "hello, this is a test of the input method" << endl;
    //cout << "What value would you like for x?" << endl << "enter: ";
    //cin >> *value;
    //cout << endl << endl << "I got " << value << endl;
    
    //cout << "What is the Month? (give a number)" << endl << "enter: ";
    //cin.get(month, 1);
    //cin.ignore(5, '\n');
    //cout << "What is the day? (give a number)" << endl << "enter: ";
    //cin.get(day, 1);
    //cin.ignore(5, '\n');
    //cout << endl << endl;
    }












