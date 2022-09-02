/* RainfallMeasurement.cpp
*  Carter McCall
*  30 August 2022
*  Purpose:
*		Create program to measure total and average rainfall throughout the year
*  Modified 2 September 2022
*		Optimized loop to handle more than 1 year
*/

#include <iostream>
using namespace std;

int main() {
	string repeat;
	char repChar;
	do {
		const int NUM_MONTHS = 12;
		double rain, total = 0;
		string month[NUM_MONTHS] = { "January", "February", "March", "April", "May", "June",
			"July", "August", "September", "October", "November", "December" };
		double monthRain[NUM_MONTHS];
		int year;
		for (int i = 0; i < NUM_MONTHS; i++) monthRain[i] = 0;
		cout << "What years rainfall do you want to calculate? ";
		cin >> year;
		for (int i = 0; i < NUM_MONTHS; i++) {
			cout << "Enter the rainfall in inches for " << month[i] << ": ";
			cin >> rain;
			total += rain;
			monthRain[i] = rain;
		}
		cout << "\n" << year << " Rainfall Data" << endl;
		for (int i = 0; i < NUM_MONTHS; i++) {
			cout << month[i] << ":    " << monthRain[i] << " in" << endl;
		}
		cout << "Total rainfall for " << year << ": " << total << " inches" << endl;
		cout << "Average rainfall per month: " << total / 12 << " inches" << endl;
		cout << "\nWould you like to calculate rainfall numbers for another year? (Y|N) ";
		cin >> repeat;
		repChar = tolower(repeat[0]);
	} while (repChar == 'y');
}