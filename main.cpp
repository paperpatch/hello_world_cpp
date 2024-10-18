#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

// Print "Hello World"
/*
int main() {
    int file_size = 0;
    int counter = 0;
    double sales = 9.99;
    // std::cout << "Hello World!";
    std::cout << file_size;
    return 0;
}
*/

// Variables
/*
int main() {
    int a = 1;
    int b = 2;
    int temp = a;
    a = b;
    b = temp;
    std::cout << a;
    return 0;
}
*/

// Constants
/*
int main() {
    const double pi = 3.14;
    pi = 0;
    return 0;
}
*/

// Naming Conventions
/*
int main() {
    int file_size; // Snake Case
    int FileSize; // Pascal Case
    int fileSize; // Camel Case
    int iFileSizes; // HUngarian Notation
    return 0;
}
*/

// Mathematical Expressions
/*
int main() {
    int x = 10;
    int y = x++; // x = 11, y = 10
    int z = ++x; // x = 11, z = 11
    std::cout << z;
    return 0;
}
*/

// Order of Operations
// Just like math
/*
int main() {
    ()
    * and /
    + and -
    double x = ( 1 + 2) * 3;
    std:: cout << x;
    return 0;

    double x = 10;
    double y = 5;
    double z = (x + 10) / (3 * y);
    std:: cout << z;
    return 0;
}
*/

// Writing Output to the Console
/*
int main() {
    int x = 10;
    int y = 20;
    std::cout << "x = " << x << std::endl
              << "y = " << y;
    cout << "x = " << x << endl
        << "y = " << y;
    return 0;

    double sales = 95000;
    cout << "Sales: $" << sales << endl;

    const double stateTaxRate = .04;
    double stateTax = sales * stateTaxRate;
    cout << "State Tax: $" << stateTax << endl;

    const double countyTaxRate = .02;
    double countyTax = sales * countyTaxRate;
    cout << "County Tax: $" << countyTax << endl;

    double total = sales + stateTax + countyTax;
    cout << "total = $" << total << endl;
    return 0;
}
*/

// Reading from the Console
/*
int main() {
    cout << "Enter values for x and y: ";
    double x;
    double y;
    cin >> x >> y;
    cout << x + y;
    return 0;

    cout << "Fahrenheit: ";
    int fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) / 1.8;
    cout << celsius;
    return 0;
}
*/

// Writing to the Console
/*
int main() {
    double result = floor(1.2);
    cout << result << endl;
    double result2 = pow(2, 3);
    cout << result2;
    return 0;
}
*/

// Comments
// comments don't get compiled
/*
    block of comment
*/
/*
int main() {
    // ...
    // ...
    int x = 0; // ...
    return 0;
}
*/

// Initializing variables
/*
int main() {
    double price = 99.99;
    float interestRate = 3.67F;
    long fileSize = 90000L;
    char letter = 'a';
    bool isValid = false;
    auto isValid2 = false;
    return 0;
}
*/

// Numbers
/*
int main() {
    int number = {};
    cout << number;
    return 0;
}
*/

// Working with Numbers
/*
int main() {
    int number = 255;
    int number = 0b11111111;
    int number = 0xFF;
    unsigned int number = -255;
    cout << number;
    return 0;
}
*/

// Narrowing
/*
int main() {
    short number = 1'000'000;
    int another = number;
    cout << another;
    return 0;
}
*/

// Generating Random Numbers
// random not really random. we can adjust it based on null pointer time
/*
int main() {
    long elapsedSeconds = time(nullptr); // Jan 1 1970
    srand(elapsedSeconds);
    // or use srand(time(0));
    int number = rand() % 10; // 0-9
    cout << number;
    return 0;
}
*/

// Exercise: Roll dice
int main() {
    const short minValue = 1;
    const short maxValue = 6;
    srand(time(0));
    short first = (rand() % (maxValue - minValue + 1)) + minValue;
    short second = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << first << ", " << second;
    return 0;
}