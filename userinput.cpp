#include <iostream>

// cout << (insertion operator) This is the one we've been using so far. Now is time to learn how to apply user input aswell.
// cin >> (extraction operator)

int main (){

    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name); // Now this is a way to allow us to type a string including spaces, which wouldnt be allowed if we simply used the cin operator.
    
    /*There's 1 issue with this though. If we were to move the second question above the first,
     we accept some user input with "cin" followed by "getline", in our input buffer there is a "\n" character,
      so we accept the newline character that is still within the buffer. To prevent that from happening,
       we can apply this into the getline function: ">> std::ws" after cin.*/

    std::cout << "Hello " << name << '\n';
    std::cout << "You're " << age << " years old";

    // I've learnt how to do some basic codelines with user input.

    return 0;
}