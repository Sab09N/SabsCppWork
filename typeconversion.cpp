#include <iostream>

int main (){
    // type conversion is the conversion of a value of one data type to another
    //                Implicit = automatic
    //                Explicit = Precede value with new data type (int)

    //double x = (int) 3.14; // This is implicit type conversion

    //std::cout << (char) 100;

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    // The one used here is instead explicit type conversion. We preceded the questions data type with (double).

    std::cout << score << "%";

return 0;
}

// I've learnt how to convert a value that is in one data type to another one with type conversion, divided in either implicit and explicit.