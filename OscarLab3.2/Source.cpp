/*Oscar Hoegler, September 8th 2022, Laboratory 3.2 
 *OscarLab3.2 Takes Sum, Difference, Product, and Average of 2 numbers */

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	double number1, number2;
	cout << "Please input number 1 space number 2: "; cin >> number1 >> number2; 
	//requests the 2 numbers and stores them to number1 and number 2
	cout << "Sum: " << number1 + number2; //Sums the 2 numbers
	cout << endl << "Difference: " << number1 - number2; //Finds the difference
	cout << endl << "Product: " << number1 * number2; //Multiplies them
	cout << endl << "Average: " << (number1 + number2) / 2; //Sums them and divides by 2
	return 0;
}