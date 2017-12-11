/*============================================================================
* Name        : test.cpp
* Author      : Connor Gibson
* Version     : 1.0
* Description : it is a pythagorean theorem calculator
*============================================================================
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	int a;
	int b;
	cout << "a";
	cin >> a;
	cout << "b";
	cin >> b;
	int a2=a*a;
	int b2=b*b;
	double c=a2+b2;
	double ans;
	ans = sqrt (c);
	cout << ans <<endl;
	return 0;
}
