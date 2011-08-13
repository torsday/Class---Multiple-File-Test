//
//  testClass.cpp
//  Class & Multiple File Test
//
//  Created by Chris Torstenson on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//


#include "testClass.h"
#include <iostream>

using namespace std;



////////////////////////////////////////////
/////// CONSTRUCTORS & DeSTRUCTORS ////////
//////////////////////////////////////////


// CONSTRUCTOR
TestClass::TestClass (int x, char array[]) {
    age = new int;
    *age = x;

    array = "default line"

// ?
// How do you initialize a character array within a class?
// ?

}

// DESTRUCTOR
TestClass::~TestClass() {
    delete age;
}



/////////////////////////
/////// Setters ////////
///////////////////////

// Sets a reference to the Value
void TestClass::setAge(int x) {
    //year = new int;
    
    *age = x;
}



/////////////////////////
/////// Getters ////////
///////////////////////


// Returns a reference to the YEAR
int * TestClass::getAge() {
    return age;
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












