#include <bits/stdc++.h>
using namespace std;

class TheCoffeeTimeDivOne
{
public:
	long long find(int n, vector <int> tea);
};

long long TheCoffeeTimeDivOne::find (int n, vector <int> tea) 
{
	long long ret;
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit-pf 2.3.0
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, vector <int> p1, bool hasAnswer, long long p2) {
	cout << "Test " << testNum << ": [" << p0 << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p1[i];
	}
	cout << "}";
	cout << "]" << endl;
	TheCoffeeTimeDivOne *obj;
	long long answer;
	obj = new TheCoffeeTimeDivOne();
	clock_t startTime = clock();
	answer = obj->find(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p2 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p2;
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	bool disabled;
	bool tests_disabled;
	all_right = true;
	tests_disabled = false;
	
	int p0;
	vector <int> p1;
	long long p2;
	
	// ----- test 0 -----
	disabled = false;
	p0 = 2;
	p1 = {1};
	p2 = 108ll;
	all_right = (disabled || KawigiEdit_RunTest(0, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 1 -----
	disabled = false;
	p0 = 2;
	p1 = {2,1};
	p2 = 59ll;
	all_right = (disabled || KawigiEdit_RunTest(1, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 2 -----
	disabled = false;
	p0 = 15;
	p1 = {1,2,3,4,5,6,7};
	p2 = 261ll;
	all_right = (disabled || KawigiEdit_RunTest(2, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 3 -----
	disabled = false;
	p0 = 47;
	p1 = {1,10,6,2,4};
	p2 = 891ll;
	all_right = (disabled || KawigiEdit_RunTest(3, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	if (all_right) {
		if (tests_disabled) {
			cout << "You're a stud (but some test cases were disabled)!" << endl;
		} else {
			cout << "You're a stud (at least on given cases)!" << endl;
		}
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
// John and Brus are flying on an airplane and now it's coffee time.
// 
// There are n seats in the plane numbered from 1 to n, one seat in each row. All seats are occupied, thus there are n passengers overall (including John and Brus). A stewardess will serve a cup of coffee or tea to each passenger. She needs to serve tea to all passengers whose seat numbers are listed in vector <int> tea, and she needs to serve coffee to all other passengers.
// 
// A coffee and tea machine is located just before the first seat of the plane. The stewardess has a flask that can contain enough coffee or tea to serve at most 7 passengers. Initially, the stewardess is located near the coffee and tea machine and the flask is empty.
// 
// The stewardess can perform the following kinds of actions:
// 
// Move from the coffee and tea machine to seat 1 or move from seat 1 to the coffee and tea machine. Each of these two actions takes 1 second.
// Move from seat i, i > 1, to seat i-1. It takes 1 second.
// Move from seat i, i < n, to seat i+1. It takes 1 second.
// If she is near seat i, the passenger at this seat has not yet been served and the current type of drink in the flask is the same as the drink this passenger wants, she can serve this passenger with a cup of drink he/she wants. It takes 4 seconds.
// If she is near the coffee and tea machine and the flask is empty, she can fill the flask with either tea or coffee (but not both simultaneously). It takes 47 seconds. Note that she can fill the flask partially (to serve less than 7 passengers), but it still takes 47 seconds.
// 
// 
// Given int n and vector <int> tea, return the minimal time needed for the stewardess to serve all passengers with proper drinks and return to the coffee and tea machine.
// 
// DEFINITION
// Class:TheCoffeeTimeDivOne
// Method:find
// Parameters:int, vector <int>
// Returns:long long
// Method signature:long long find(int n, vector <int> tea)
// 
// 
// CONSTRAINTS
// -n will be between 2 and 44,777,777, inclusive.
// -tea will contain between 1 and 47 elements, inclusive.
// -Each element of tea will be between 1 and n, inclusive.
// -All elements of tea will be distinct.
// 
// 
// EXAMPLES
// 
// 0)
// 2
// {1}
// 
// Returns: 108
// 
// The stewardess will serve coffee in 47+2+4+2=55 seconds and tea in 47+1+4+1=53 seconds.
// 
// 1)
// 2
// {2, 1}
// 
// Returns: 59
// 
// Here she only needs to serve tea.
// 
// 2)
// 15
// {1, 2, 3, 4, 5, 6, 7}
// 
// Returns: 261
// 
// The stewardess will fill the flask three times overall: once with tea and two times with coffee.
// 
// 3)
// 47
// {1, 10, 6, 2, 4}
// 
// Returns: 891
// 
// END KAWIGIEDIT TESTING
