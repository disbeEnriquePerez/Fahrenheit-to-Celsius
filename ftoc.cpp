

#include <iostream>
#include <iomanip>
using namespace std;
void Convert(double,double &);
int main() {
    
    /**
     *      Name: Perez, Enrique
     *      Homework: #1
     *      Due: April 2, 2018
     *      Course: CS25602-sp18
     *
     *      Description:
     *          Fahrenheit to Celsius converter, obtains input from user in 
     *          Fahrenheit and outputs the value in Celsius
     */
    
    double Fahrenheit;
    double Celsius;
    cout <<  "E.Perez\'s Temperature Converter" << endl << endl;
    cout <<  "Enter the temperature in Fahrenheit:";
    cin >> Fahrenheit;
    cout << endl ;
    
    Convert(Fahrenheit, Celsius);
    
    cout << setprecision(2) << fixed << Fahrenheit << " Fahrenheit = " << Celsius << " Celsius" << endl ;
    
    return 0;
    
}

void Convert(double Fahrenheit,double &Celsius ){
    
   
    Celsius = 5 * (Fahrenheit - 32) / 9;

}
