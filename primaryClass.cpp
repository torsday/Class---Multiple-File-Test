//
//  primaryClass.cpp
//  Class & Multiple File Test
//
//  Created by Chris Torstenson on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "primaryClass.h"

using namespace std;



////////////////////////////////////////////
/////// CONSTRUCTORS & DeSTRUCTORS //////// 
//////////////////////////////////////////


// CONSTRUCTOR w/ no argument
PrimaryClass::PrimaryClass () {
    varInt = new int;
    *varInt = '0';
}

// CONSTRUCTOR w/ 1 argument
PrimaryClass::PrimaryClass (int x) {
    varInt = new int;
    *varInt = x;
}

// DESTRUCTOR
PrimaryClass::~PrimaryClass() {
    delete varInt;
}



/////////////////////////
/////// Setters ////////
///////////////////////

// Sets a reference to the varInt
void PrimaryClass::setVarInt(int x) {
    //year = new int;
    
    *varInt = x;
}



/////////////////////////
/////// Getters ////////
///////////////////////


// Returns a reference to the YEAR
int * PrimaryClass::getVarInt() {
    return varInt;
}



/////////////////////////////
//////// Others... /////////
///////////////////////////



// Prompts for and receives input
void PrimaryClass::contentQuery(void) {

    // Primary Class Input

    cout << "Enter an integer to be stored in the Primary Class" << endl << "enter: ";
    cin >> *varInt;
	cin.ignore (100, '\n');
    cout << endl << endl << "I got " << *varInt << " stored at the location " << varInt << endl << endl << endl;
    

	cout << "and now give me a word or two to be stored in the Primary Class" << endl << "enter: ";
	cin.get(varArrayChar, 100);
	cin.ignore (100, '\n');
	cout << endl << endl << "You said: " << varArrayChar << endl << " stored at the location: " << &varArrayChar << endl << endl;
	
	
	InstanceOfSecClass.contentQuery();
	
	
    //cout << "What is the Month? (give a number)" << endl << "enter: ";
    //cin.get(month, 1);
    //cin.ignore(5, '\n');
    //cout << "What is the day? (give a number)" << endl << "enter: ";
    //cin.get(day, 1);
    //cin.ignore(5, '\n');
    //cout << endl << endl;
    }












