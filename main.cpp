
/////////////////////////////
///// Chris Torstenson /////
///////////////////////////

#include <iostream>
#include "testClass.h"

using namespace std;


/////////////////////////////
//////// Constants /////////
///////////////////////////



/////////////////////////////////
////// Method Prototypes ///////
///////////////////////////////



/////////////////////////////
////////// Main ////////////
///////////////////////////

int main(void) {
	

    TestClass testClassInstance(6);

    int x;

    cout << endl << endl << "age: " << x;

    x = * testClassInstance.getAge();


    cout << endl << endl << "age: " << x << endl << endl;

    testClassInstance.contentQuery();

    
    /*
    int usersInput = 0;
    TestClass usersValue = new TestClass

    cout << endl << "Your initial value is: " << usersValue;
	cout << endl << endl << "Enter a number" << endl;
    cout << "Enter: ";
    cin >> usersInput;
    cin.ignore(100, '\n');
    cout << endl << "Your final value is: " << usersValue;
    cout << endl << endl;
    */
	
	
	return 0;
}


/////////////////////////////
///////// METHODS //////////
///////////////////////////


