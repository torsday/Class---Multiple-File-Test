//
//  Secondary Class.h
//  Class & Multiple File Test
//
//  Created by Chris Torstenson on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Class___Multiple_File_Test_SecondaryClass_h
#define Class___Multiple_File_Test_SecondaryClass_h

///////////////////////////////////
//////// Class INTERFACE /////////
/////////////////////////////////

class SecondaryClass {
private:
    int * varInt;
	char varArrayChar[100];
public:
    SecondaryClass (); // constructor
	SecondaryClass (int x); // constructor
    ~SecondaryClass (); // destructor
    void setVarInt(int x);
    int * getVarInt();
    void contentQuery(void);
};

#endif
