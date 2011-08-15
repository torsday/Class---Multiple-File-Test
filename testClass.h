//
//  testClass.h
//  Class & Multiple File Test
//
//  Created by Chris Torstenson on 8/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Class___Multiple_File_Test_testClass_h
#define Class___Multiple_File_Test_testClass_h

///////////////////////////////////
//////// Class INTERFACE /////////
/////////////////////////////////

class TestClass {
private:
    int * varInt;
	char varArrayChar[100];
public:
    TestClass (int x); // constructor
    ~TestClass (); // destructor
    void setVarInt(int x);
    int * getVarInt();
    void contentQuery(void);
};

#endif
