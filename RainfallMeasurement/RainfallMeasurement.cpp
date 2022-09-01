/* RainfallMeasurement.cpp
*  Carter McCall
*  30 August 2022
*  Purpose:
*		Create program to measure total and average rainfall throughout the year
*  Modified 1 September 2022
*		Rewrite the program
*/

#include <iostream>
using namespace std;

int main() {
	string repeat;
	do {
		const int NUM_MONTHS = 12;
		double rain, total = 0;
		string month[NUM_MONTHS] = { "January", "February", "March", "April", "May", "June", "July", "August",
			"September", "October", "November", "December" };
		double janRain = 0, febRain = 0, marRain = 0, aprRain = 0, mayRain = 0, junRain = 0, julRain = 0,
			augRain = 0, sepRain = 0, octRain = 0, novRain = 0, decRain = 0;
		double monthRain[NUM_MONTHS] = { janRain, febRain, marRain, aprRain, mayRain, junRain, julRain, augRain,
			sepRain, octRain, novRain, decRain };
		int year;
		cout << "What years rainfall do you want to calculate? ";
		cin >> year;
		for (int i = 0; i < 12; i++) {
			cout << "Enter the rainfall in inches for " << month[i] << ": ";
			cin >> rain;
			total += rain;
			monthRain[i] = rain;
		}
		cout << "\n" << year << " Rainfall Data" << endl;
		for (int i = 0; i < 12; i++) {
			cout << month[i] << ":    " << monthRain[i] << " in" << endl;
		}
		cout << "Total rainfall for " << year << ": " << total << " inches" << endl;
		cout << "Average rainfall per month: " << total / 12 << " inches" << endl;
		cout << "\nWould you like to calculate rainfall numbers for another year? ";
		cin >> repeat;
	} while (repeat == "yes");
}