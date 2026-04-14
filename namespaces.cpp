#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main (){
    /* Namespaces provide a solution for preventing name conflicts in large projects.
    A namespace will allow for identically named entities as long as the namespaces are different. */
    int x = 0;

    // We cant name the same variable twice, but as seen on lines 3 - 5, a namespace actually allows us to do so.

    std::cout << first::x;

    // If the variable isnt specified, the local one will simply be the one being displayed. We're gonna specify the "first" namespace though, so that the x variable in that namespace will be displayed.
    // If we were to type in the main group "using namespace first;" the variables in "first" will be shown without having to specify it.
    
}

// I've learnt how namespaces work and how they are used to prevent name conflicts and in how to give the same variable multiple values.