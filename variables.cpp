#include <iostream>

int main(){
    /*We are gonna start with declaration. The aasignment of a varibale instead allows us to assign a value to the variable we declared.
       We can store more than numbers. even sentences etc.*/
    //int x; //declaration
    //x = 5; //assignment
    int x = 5;
    int y = 6;
    int sum = x + y;
     //It is actually just easier to put both the declaration and the assignment together in the same codeline.
     std::cout << "x è uguale a "<< x << '\n';
     std::cout << "y è uguale a " << y << '\n';
     std::cout << "La somma tra x e y equivale a " << sum << '\n';

    return 0;
}