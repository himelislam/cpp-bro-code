#include<iostream>
#include<vector>

typedef std::vector<std::pair<std::string, int >> pairlist_t;

// typedef std::string text_t;

// using keyword instead of typedef

using text_t = std::string;

int main (){

    // new identifier for existing datatypes
    pairlist_t pairlist;

    text_t firstName = "Himel";

    return 0;
}