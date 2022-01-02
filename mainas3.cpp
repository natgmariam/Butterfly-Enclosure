/* 
Description: Using user input and arythmatics already programed 
            into the code, to calculate all parts of the butterfly
            enclosure including volume, surface area and more.
Input: user is prompted to input an integar for the edge lenght of 
       the enclosure.  
Output: The output is the results of the calculation done by the 
        code ansering what the surface area, volume, and other aspects
        of the enclosure are. 
*/
#include <iostream> //library  
#include <cmath> //library to accsess sqrt(), pow()
using namespace std; 
int main() {    //a must a C++

double a = 0;  //a = edge length 
// A = surface area 
// V = volume 
// r = midsphere radius 
//volume of a sphere; 
const double pi = 3.14159265358979; // pi as a constant 
const double g = sqrt (5); //square root of 5 declared as a constant 
const double s = (0.4166666666666667); //5/12 delcated as a decimal constant 

// print welcome stament & ** to show up.
cout << "*************************************************" << endl;
cout << "* Welcome to the Butterfly Enclosure Calculator *" << endl; 
cout << "*************************************************" << endl;
cout << endl; 

//print the Edge lenght statment  
cout << "Edge length (feet): "; 
cin >> a; //prompt the user to input an integar for edge length 
cout << endl; 

// print Butterfly statment & --
cout << "--------------------------------" << endl;
cout << "Butterfly enclosure computations" << endl;
cout << "--------------------------------" << endl;
cout << endl; 

// calculations to for figuring out using the formulas 
double A = 5 * pow(a, 2) * (sqrt (3) + 6 * sqrt (5 + 2 * g)); //calculate surface are 
double V = s * pow(a, 3) * ( 99 + 47 * g ); //clacluate volume of enclosure 
double r = a /4 * (3 + g); //claculate midsphere radius 
double vS = (4.0/3.0)* pi * pow (r, 3);//calculate volume of sphere 

cout.precision(6); //allows 6 places after decimal to be visiable  
cout << fixed; //holds it fixed at 6 digets after decimal place 

// print out staments such as edge lenght & measurments
//prints edge lenght in scientfic notation
cout << "Edge Length: " << a << " feet" <<endl;

//dispalays result of calculation for surface area 
cout << "Surface area: " << A << " square feet" << endl; 

//dispalys results of calculation of vilume 
cout << "Volume: " << V << " cubic feet" << endl;

//dispalyes result of Surface area / Volume calculation 
cout << "Surface to volume ratio: " << A/V << endl;

//displayes results of calculations for radius and volume of sphere 
cout << "Sphere approximation radius: " << r << " feet volume: " << vS 
<< " cubic feet" << endl;
cout << endl; 

//prints Thank you statment 
cout << "Thank you for using zoo computational support" << endl;


return 0;
 }
