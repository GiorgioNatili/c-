//
//  main.cpp
//  FileSystem
//
//  Created by Natili, Giorgio on 7/2/15.
//  Copyright (c) 2015 Natili, Giorgio. All rights reserved.
//

#include <iostream>
#include <boost/filesystem.hpp>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Please enther the directory you want to explore...\n";
    
    // User input to get the path
    std::string inpath;
    std::cin >> inpath;
    
    // Show the direcotry content recustively
    using namespace boost::filesystem;
    
    path currentPath = inpath;
    directory_iterator iterator {currentPath};
    
    while (iterator != directory_iterator{}) {
        
        std::cout << *iterator++ << '\n';
        
    }
    
    // Ask the user if he wants to print it out to a file
    
    return 0;
    
}
