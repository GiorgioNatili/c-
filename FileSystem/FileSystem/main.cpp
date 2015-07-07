//
//  main.cpp
//  FileSystem
//
//  Created by Natili, Giorgio on 7/2/15.
//  Copyright (c) 2015 Natili, Giorgio. All rights reserved.
//

#include <iostream>
#include <boost/filesystem.hpp>

std::string iterateDir(boost::filesystem::path currentPath, std::string &output);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Please enther the directory you want to explore...\n";
    
    // User input to get the path
    std::string inpath;
    std::cin >> inpath;
    
    // Show the direcotry content recustively
    using namespace boost::filesystem;
    
    path currentPath = inpath;
    
    std::string explodedPath;
    iterateDir(currentPath, explodedPath);
    
    std::cout << explodedPath;
    
    // Ask the user if he wants to print it out to a file
    
    return 0;
    
}

std::string iterateDir(boost::filesystem::path currentPath, std::string &output) {
    
    using namespace boost::filesystem;
    
    directory_iterator iterator {currentPath};
    
    while (iterator != directory_iterator{}) {
        
        file_status s = status(*iterator);
        
        // .operator is where the value of the derefenced variable is stored
        // file_status s = status(iterator.operator*());
        
        if (is_directory(s)){
            
            iterateDir(*iterator, output);
            
        }
        
        path current = *iterator++;
        output += current.string() + '\n';
        
    }
    
    return output;
    
}
