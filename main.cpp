#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // tutorial: https://www.youtube.com/watch?v=ZzaPdXTrSb8

    // 1. Comments
    // this is a single line comment
    /* This is a multi-line comment.
    This line will be ignored.
    So will this one. */
    
    // 2. printing stuff
    cout << "first C++ program" << endl;

    // 3. variables
    int first_int = 100;
    cout << first_int << endl;

    double first_double = 10.224;       // doubles allow to store more stuff, e.g. decimal points
    cout << first_double << endl;

    // 4. constant variable so you cant change it 
    const int bruh = 10;
    cout << bruh << endl;

    // 5. swapping value of a and b
    int a = 1;
    int b = 2;
    int temp = a;   // this is a temporary file
    a = b;
    b = temp;

    cout << a << endl;  // value of a will be swapped with b, so it is now 2
    cout << b << endl;

    /* 6. naming conventions
    
       number_of_things     --> snake case
       number-of-things     --> kebab case
       NumberOfThings       --> pascal case
       numberOfThings       --> camel case
      
    */ 
   
    // 7 Math
    
    int x = 10;
    int y = 3;  
    int z1 = x + y;         // addition
    int z2 = x - y;         // subtraction
    int z3 = x * y;         // multiply
    int z4 = x / y;         // division by INTEGER
    double z5 = x / y;      // you may think answer will be 3.3333, but its not. to do so, need convert x/y into a double
    double x1 = 10;
    double z6 = x1 / y;     // here, we can get 3.3333
    int z7 = x % y;         // modulus gives remainder of division 

    cout << z1 << endl;
    cout << z2 << endl;
    cout << z3 << endl;
    cout << z4 << endl;
    cout << z5 << endl;
    cout << z6 << endl;
    cout << z7 << endl;

    // 8 Increments

    int g = 3;
    g = g + 100;
    cout << g << endl;      // this gives 103

    // Increment Operator (+1)

    int f = 1;
    f++;
    cout << f << endl;

    // Decrement Operator (-1)

    int h = 2;
    h--;
    cout << h << endl;

    // things to watch out! position of ++ and -- matters

    int u = 3;
    int w = u++;
    cout << u << endl;      // 4
    cout << w << endl;      // it is actually 3, since 3 gets assigned to w, then ++
   
    int t = 3;
    int s = ++t;
    cout << s << endl;      // this gives 4

    // 9 Receiving input
    /**/
    cout << "enter some number: ";
    double value;       // to ensure if someone enter decimal, output will also be decimal
    cin >> value;       // >> is string extraction operator
    cout << "Your value is: " << value << endl;

    cout << "enter 2 number to add up: ";
    double val1;
    double val2;
    cin >> val1 >> val2;    // taking input for val1 and val2
    cout << "sum is: " << val1 + val2 << endl;


    //10 CMath
    // for more CMath, check out https://cplusplus.com/reference/cmath/

    // floor 

    double result1 = floor(1.2);        // floor(1.2) = 1
    cout << result1 << endl;

    // power (expoential)

    double result2 = pow(2, 3);     // 2^3 = 8
    cout << result2 << endl;

    return 0;
}
