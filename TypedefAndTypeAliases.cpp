#include <iostream>
#include <vector>

// typedef is a reserved keyword used to create an additional name (alias) for another data type.
 // It's a new identifier for an existing type, helps with readability and reduces typos.

//typedef std::vector<std::pair<std:::string, int>> pairlist_t; // this is just a very advanced example of how typedef can be used.
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;
// 'using' is now used instead of typedef due to it being more reliable for templates (not learnt yet).

int main (){

    text_t firstName = "Sabin"; // SO this now exactly behaves like a string.
    number_t age = 16;

    std::cout << firstName << '\n';
}

// I've learnt how to use a typedef and using keyword to give a new identifier to something.