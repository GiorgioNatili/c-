//
//  main.cpp
//  HelloStrings
//
//  Created by Natili, Giorgio on 6/22/15.
//  Copyright (c) 2015 Natili, Giorgio. All rights reserved.
//

#include <iostream>
#include <boost/algorithm/string.hpp>
#include <vector>
#include <util.h>
#include <fstream>

// TODO: get a list of names separated by commas and write them to a file

std::vector<std::string> populate_array(std::string input);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Type some names and have back a file!\n";
    
    std::string inputString;
    std::cin >> inputString;
    
    std::string clean_input = boost::erase_all_copy(std::string(inputString), " ");
    auto names = populate_array(std::move(clean_input));
    
    for (auto &val: names){
        
        
    }
    
    std::string content;
    
    for (int i = 0; i < names.size(); i++){
        
        std::cout << names[i] + "\n";
        content += names[i] + "\n";
        
    }
    
    {
        
        std::ofstream stream("/Users/Giorgio_Natili/file.boris", std::ios::app);
        stream << content;
        
    }
    
    // TODO write on the file system a .boris with all the names
    // Look at std::move and the meaning of copies
    // Look at the auto keyword in c++ 11
    
    return 0;
}

std::vector<std::string> populate_array(std::string input) {
    
    std::vector<std::string> v;
    split(v, input, boost::is_any_of(","));
    
    return v;
    
}




