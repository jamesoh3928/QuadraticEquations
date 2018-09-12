//Input:
//value of a (the coefficient of x2), b (the coefficient of x), and c (the constant term)
//precondition: a cannot be 0
//Process:
//1. Get the input
//2. Calculate the b2-4ac
//3. Check the value of b2-4ac and determine how many roots they are
//4. Calculated the roots if the exists
//5. Display the outputs
//Output: outputs the type of roots of the equation,
//furthermore, if b2 – 4ac ≠ 0, the program should output the roots of the quadratic equation.
//Test data:
//White Box:
//One real root: 4x2 – 20x + 25 = 0, root (2.5)
//Two real roots: x2 – 3x – 4 = 0, roots (-1, 4)
//Complex roots: x2 – 10x + 34
//Black Box:
//if a=0: Display the message "a cannot be 0"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, discriminant;
    cout << "Enter a (the coefficient of x2), b (the coefficient of x), and c (the constant term)" << endl;
    cin >> a >> b >> c;
    if (a==0)
        cout << "a cannot be 0" << endl;
    else
        {discriminant = pow(b,2)-4*a*c;
        if (discriminant >0)
            cout << "Two real root, root(" << setprecision(2) << fixed << (-b - sqrt(discriminant))/(2*a) << ", " << (-b + sqrt(discriminant))/(2*a)<<")" << endl;
        else if (discriminant < 0)
            cout << "Complex roots" << endl;
        else
            cout << "One real root, root(" << setprecision(2) << fixed <<(-b + sqrt(discriminant))/(2*a) << ")"<<endl;
        return 0;}
}
