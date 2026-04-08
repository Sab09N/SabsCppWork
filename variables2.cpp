#include <iostream>

int main(){
    //integer (whole number)
    int age = 16;
    int years = 2026;
    int days = 7.5; //this is actually a double. What the program will do is troncate the decimal number if not specified with the double term

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //char (single character)
    char grade = 'A';
    char initial = 'B';
    char currency = '£';

    //boolean (true or false)
     bool student = false;
     bool power = true;
     bool forSale = true;

     //string (objects that represent a sequence of texts). They are given from the std namespace, so type in std
     std::string name = "Sabin";
     std::string day = "Sunday";
     std::string food = "Sushi";
     std::string address = "Via Pugnalin, 23";

     std::cout << "Hello " << name;
     std::cout << " You are " << age;


    return 0;
}
