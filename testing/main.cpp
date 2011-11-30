//
//  main.cpp
//  testing
//
//  Created by Snorre Rist on 30.11.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>

using namespace std;

int main (int argc, const char * argv[])
{

    int a=3;
    int* b = &a;
    
    a=4;
    
    cout<<*b;
    cout<<a;
    
    
}

