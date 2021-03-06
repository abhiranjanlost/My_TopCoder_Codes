#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <climits>
#include <cstring>
using namespace std;

typedef long long  int64;
typedef vector<int> vi;
typedef string ST;
typedef stringstream SS;
typedef vector< vector <int> > vvi;
typedef pair<int,int> ii;
typedef vector <string> vs;

#define Pf	printf
#define	Sf	scanf

#define	ep	1e-9
#define PI M_PI
#define E M_E

#define	CL(a, b)	memset(a, b, sizeof(a))
#define	mp	make_pair

#define	pb	push_back

#define	all(c)	(c).begin(), (c).end()
#define	tr(i, c)	for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

#define	present(x, c)	((c).find(x) != (c).end())		//map & set//
#define	cpresent(x, c)	(find(all(c),x) != (c).end())	//vector & list//

#define forn(i, n)	for(int i = 0, loop_ends_here = (int)n; i < loop_ends_here; i++)
#define forab(i, a, b)	for(int i = a, loop_ends_here = (int) b; i <= loop_ends_here; i++)
#define rep(i, a, b)	for(int i = a, loop_ends_here = (int)b; i>=loop_ends_here; i--)

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)

class Iditarod
{
public:
	int avgMinutes(vector <string> times);
};


int Iditarod::avgMinutes (vector <string> times) 
{
	int ret = 0;
	forn(i, times.size()) {
		SS ss(times[i]);
		int h, m, d;
		char ch, am;
		ST tmp;

		ss >> h >> ch >> m >> am >> ch >> ch >> tmp >> d;
		if(h == 12)
			h-=12;
		if(am == 'P')
			h+=12;
		Pf("%d %d %c %d\n", h, m, am, d);

		int sum = 0;
		if(d ==  1)
			sum += (h-8)*60 + m;
		else
			sum += (24-8)*60;
		sum += max(0, d-2) *24 * 60;
		if(d > 1)
			sum += h*60 + m;
		cout << sum << endl;
		ret += sum;
	}
	return (int)(ret*1.0/times.size() + 0.5);
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	Iditarod *obj;
	int answer;
	obj = new Iditarod();
	clock_t startTime = clock();
	answer = obj->avgMinutes(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p1 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p1;
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
	all_right = true;
	
	vector <string> p0;
	int p1;
	
	{
	// ----- test 0 -----
	string t0[] = {"12:00 PM, DAY 1","12:01 PM, DAY 1"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 241;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"12:00 AM, DAY 2"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 960;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"02:00 PM, DAY 19","02:00 PM, DAY 20","01:58 PM, DAY 20"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 27239;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
// The Iditarod is a dogsled race from Anchorage to Nome that takes many days. 
// We want to take a list of the times when the competitors crossed the
// finish line and convert that into the average number of minutes to complete 
// the race.
// 
// The race starts on day 1 at 8:00 AM. We are given a list of finish times as
// a vector <string>, where each finish time is formatted as 
//                  hh:mm xM, DAY n  
// 
// where hh is exactly 2 digits giving the hour, mm is exactly 2 digits giving
// the minute, x is either 'A' or 'P', and n is a positive integer less than 100
// with no leading zeros.
// So each string has exactly 15 or 16 characters (depending on whether n is
// less than 10).
// 
// Create a class Iditarod containing method avgMinutes that is given a 
// vector <string>, times, and that returns the average number of minutes taken by the
// competitors to complete the race.  Round the returned value to the nearest
// minute, with .5 rounding up.
// 
// 
// 
// DEFINITION
// Class:Iditarod
// Method:avgMinutes
// Parameters:vector <string>
// Returns:int
// Method signature:int avgMinutes(vector <string> times)
// 
// 
// NOTES
// -"12:00 AM, DAY d" refers to midnight between DAY d-1 and DAY d
// -"12:00 PM, DAY d" refers to noon on DAY d
// 
// 
// CONSTRAINTS
// -times contains between 1 and 50 elements inclusive
// -each element of times is formatted as specified above, with hh between 01 and 12 inclusive, mm between 00 and 59 inclusive, and d between 1 and 99 inclusive
// -each element of times represents a time later than the start of the race
// 
// 
// EXAMPLES
// 
// 0)
// {"12:00 PM, DAY 1","12:01 PM, DAY 1"}
// 
// Returns: 241
// 
// From 8:00 AM to noon is 4 hours, so we have 4 hours for one competitor,
// and 4 hours, 1 minute for the other. These two values average to 240.5 minutes which is rounded up.
// 
// 1)
// {"12:00 AM, DAY 2"}
// 
// Returns: 960
// 
// The one competitor finished in 16 hours, just at the start of DAY 2.
// 
// 2)
// {"02:00 PM, DAY 19","02:00 PM, DAY 20", "01:58 PM, DAY 20"}
// 
// Returns: 27239
// 
// 26280 minutes, 27720 minutes, 27718 minutes average to 27239.333 which rounds down. 
// 
// END KAWIGIEDIT TESTING


//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
