//
//  primary Class.h
//  Class & Multiple File Test
//
//  Created by Chris Torstenson on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Class___Multiple_File_Test_primaryClass_h
#define Class___Multiple_File_Test_primaryClass_h

#include "secondaryClass.h"

///////////////////////////////////
//////// Class INTERFACE /////////
/////////////////////////////////

class PrimaryClass {
private:
    int * varInt;
	char varArrayChar[100];
	SecondaryClass InstanceOfSecClass;
public:
	
	// Constructors & Destructors
	
    PrimaryClass (); // constructor
	PrimaryClass (int x); // constructor
    ~PrimaryClass (); // destructor

	// Setters & Getters
	
    void setVarInt(int x);
    int * getVarInt();

	// Other

    void contentQuery(void);
};

#endif
