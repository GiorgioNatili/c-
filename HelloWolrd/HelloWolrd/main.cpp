//
//  main.cpp
//  HelloWolrd
//
//  Created by Natili, Giorgio on 6/19/15.
//  Copyright (c) 2015 Natili, Giorgio. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void sayHello(string name);

// Specify the number of arguments and then the array with the arguments
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    string inputString;
    cin >> inputString;
    
    cout << "Hello " + inputString + "\n";
    
    sayHello("Boris");
    
    return 0;
    
}

void sayHello(string name) {
    
    cout << "Hello " + name + "!";

}