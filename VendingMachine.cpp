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


class VendingMachine
{
public:
	int motorUse(vector <string> prices, vector <string> purchases)
	{
		int ret;
		
		return ret;
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, vector <string> p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p1[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	VendingMachine *obj;
	int answer;
	obj = new VendingMachine();
	clock_t startTime = clock();
	answer = obj->motorUse(p0, p1);
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
	all_right = true;
	
	vector <string> p0;
	vector <string> p1;
	int p2;
	
	{
	// ----- test 0 -----
	string t0[] = {"100 100 100"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"0,0:0","0,2:5","0,1:10"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 4;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"100 200 300 400 500 600"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"0,2:0","0,3:5","0,1:10","0,4:15"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 17;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"100 200 300 400 500 600"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"0,2:0","0,3:4","0,1:8","0,4:12"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 11;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"100 100 100"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"0,0:10","0,0:11"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = -1;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"100 200 300","600 500 400"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"0,0:0","1,1:10","1,2:20","0,1:21","1,0:22","0,2:35"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 6;
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
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
// 
// Note that in the following problem statement, all quotes and angle brackets are for clarity
// 
// 
// 
// A certain vending machine delves out its goods from a rotating cylinder, which can rotate around in both clockwise and counter-clockwise directions.  The cylinder has a number of shelves on it, and each shelf is divided into a number of columns.  On the front of the machine, there is a panel of doors that extends the entire height of the column.  There is one door for each shelf, which is the width of one column.  When a purchase is made, the user uses two buttons to rotate the cylinder so their purchase is located at a door.  They make their purchase by sliding the appropriate door open, and removing the item (there can only be one item per column on a particular shelf).  The cylinder can rotate in a complete circle, and so there are always two ways to get from a particular column to another column.
// 
// 
// 
// Because the vending machine company wants to sell the most expensive items possible, and the machine can only show one column at a time, the machine will always try to put forth the most expensive column available.  The price of a column is calculated by adding up all the prices of the remaining items in that column.  The most expensive column is defined to be the one with the maximum price.  If 5 minutes have elapsed since the last purchase was made, the machine rotates the cylinder to the most expensive column.  If, however, another purchase has been made before the 5 minutes are up, the rotation does not occur, and the 5 minute timer is reset.
// 
// 
// 
// Recently, some machines' rotating motors have been failing early, and the company wants to see if it is because the machines rotate to show their expensive column too often.  To determine this, they have hired you to simulate purchases and see how long the motor is running.
// 
// 
// 
// You will be given the prices of all the items in the vending machine in a vector <string>.  Each element of prices will be a single-space separated list of integers, which are the prices (in cents) of the items.  The Nth integer in the Mth element of prices represents the price of the Nth column in the Mth shelf in the cylinder.  You will also be given a vector <string> purchases.  Each element in purchases will be in the format: "<shelf>,<column>:<time>"
// <shelf> is a 0-based integer which identifies the shelf that the item was purchased from.  <column> is a 0-based integer which identifies the column the item was purchased from.  <time> is an integer which represents the time, in minutes, since the machine was turned on.
// 
// 
// 
// In the simulation, the motor needs to run for 1 second in order to rotate to an adjacent column.  When the machine is turned on, column 0 is facing out, and it immediately rotates to the most expensive column, even if the first purchase is at time 0.  The machine also rotates to the most expensive column at the end of the simulation, after the last purchase.  Note that when an item is purchased, its price is no longer used in calculating the price of the column it is in.  When the machine rotates to the most expensive column, or when a user rotates the cylinder, the rotation is in the direction which takes the least amount of time.  For example, in a 4-column cylinder, if column 0 is displayed, and the cylinder is rotated to column 3, it can be rotated backwards, which takes 1 second, versus rotating forwards which takes 3 seconds.
// 
// 
// 
// If a user tries to purchase an item that was already purchased, this is an incorrect simulation, and your method should return -1.  Otherwise, your method should return how long the motor was running, in seconds.
// 
// 
// 
// DEFINITION
// Class:VendingMachine
// Method:motorUse
// Parameters:vector <string>, vector <string>
// Returns:int
// Method signature:int motorUse(vector <string> prices, vector <string> purchases)
// 
// 
// NOTES
// -When rotating to the most expensive column, if two columns have the same price, rotate to the one with the lowest column number (see example 0).
// -If two purchases are less than 5 minutes apart, the machine does not perform a rotation to the most expensive column between the purchases.  If two purchases are 5 or more minutes apart, the machine rotates to the most expensive column between the two purchases.
// 
// 
// CONSTRAINTS
// -prices will have between 1 and 50 elements, inclusive.
// -Each element of prices will have between 5 and 50 characters, is a single-space separated list of integers, and has no leading or trailing spaces.
// -Each element of prices will have the same number of integers in it.
// -Each element of prices will have at least 3 integers in it.
// -Each integer in prices will be between 1 and 10000, inclusive, and will not contain leading 0's.
// -purchases will have between 1 and 50 elements, inclusive.
// -Each element of purchases will be in the format "<shelf>,<column>:<time>" (angle brackets and quotes are for clarity only), where <shelf>, <column>, and <time> are all integers.
// -In each element of purchases, <shelf> will be between 0 and M - 1, inclusive, where M is the number of elements in prices.
// -In each element of purchases, <column> will be between 0 and N - 1, inclusive, where N is the number of integers in each element of prices.
// -In each element of purchases, <time> will be between 0 and 1000, inclusive.
// -In each element of purchases, <shelf>, <column>, and <time> will not contain extra leading 0's.
// -purchases will be sorted in strictly ascending order by <time>.  This means that each purchase must occur later than all previous ones.
// 
// 
// EXAMPLES
// 
// 0)
// {"100 100 100"}
// {"0,0:0", "0,2:5", "0,1:10"}
// 
// Returns: 4
// 
// 
// The vending machine has three columns, and only one row.  Since all three items are the same price, they are all the most expensive, and therefore, the lowest numbered column is rotated to.  Since the machine starts out at column 0, no rotation is performed before the first purchase.  The starting configuration is (*'s denote the currently displayed column):
// 
//  
// +-----+-----+-----+
// | 100 | 100 | 100 |
// +*****+-----+-----+
// 
// 
// 
// In the first purchase, the customer does not rotate the cylinder because the item he wants is already displayed. The configuration of the vending machine is now:
// 
// 
// +-----+-----+-----+
// |  0  | 100 | 100 |
// +*****+-----+-----+
// 
// 
// Since the next purchase is at least 5 minutes away, the machine performs a rotation to the most expensive column.  Both column 1 and 2 are now 100 apiece, so it rotates to the smallest index of these, column 1.  The fastest way there is to rotate forward 1 column, yielding 1 second of motor use:
// 
// 
// +-----+-----+-----+
// |  0  | 100 | 100 |
// +-----+*****+-----+
// 
// 
// 
// The next customer purchases the item in column 2, which is 1 column away, so add 1 second to the motor use.  Because another 5 minutes passes, the most expensive column is displayed, which is now column 1.  Add 1 more second for the rotation.  The configuration is now:
// 
// 
// +-----+-----+-----+
// |  0  | 100 |  0  |
// +-----+*****+-----+
// 
// 
// 
// The final customer purchases from column 1, (which is already displayed), and the final most expensive column is rotated to.  Since all columns are the same price again (0), column 0 is displayed.  It takes 1 second to get back there, so add 1 more second.
// 
// 
// 1)
// {"100 200 300 400 500 600"}
// {"0,2:0", "0,3:5", "0,1:10", "0,4:15"}
// 
// Returns: 17
// 
// 
// The most expensive column during this whole example is column 5.  Since all purchases are at least 5 minutes apart, the most expensive column is rotated to each time.
// 
// 
// 
// Before the purchases start, add 1 second for rotating to column 5.
// The first purchase  is 3 columns away, so add 3 seconds to get there, and 3 seconds to get back to column 5
// The second purchase is 2 columns away, so add 4 seconds to get there and back.
// The third purchase is also 2 columns away, so add 4 more seconds.
// The final purchase is only one column away, so add 2 more seconds.
// 
// 
// 
// The final configuration is:
// 
// 
// +-----+-----+-----+-----+-----+-----+
// | 100 |  0  |  0  |  0  |  0  | 600 |
// +-----+-----+-----+-----+-----+*****+
// 
// 
// 
// 2)
// {"100 200 300 400 500 600"}
// {"0,2:0", "0,3:4", "0,1:8", "0,4:12"}
// 
// Returns: 11
// 
// 
// This is the same as example 1, except now, the purchases are all less than 5 minutes apart.
// 
// 
// 3)
// {"100 100 100"}
// {"0,0:10", "0,0:11"}
// 
// Returns: -1
// 
// 
// The second purchase is illegal since the item was already purchased
// 
// 
// 4)
// {"100 200 300",
//  "600 500 400"}
// {"0,0:0", "1,1:10", "1,2:20",
//  "0,1:21", "1,0:22", "0,2:35"}
// 
// Returns: 6
// 
// 
// A two-row example.  The configurations just before each purchase are:
// 
// 
// purchase 1:
// +-----+-----+-----+
// | 100 | 200 | 300 |
// +-----+-----+-----+
// | 600 | 500 | 400 |
// +*****+-----+-----+
// 
// purchase 2:
// +-----+-----+-----+
// |  0  | 200 | 300 |
// +-----+-----+-----+
// | 600 | 500 | 400 |
// +-----+*****+-----+
// 
// purchase 3:
// +-----+-----+-----+
// |  0  | 200 | 300 |
// +-----+-----+-----+
// | 600 |  0  | 400 |
// +-----+-----+*****+
// 
// purchase 4:
// +-----+-----+-----+
// |  0  | 200 | 300 |
// +-----+-----+-----+
// | 600 |  0  |  0  |
// +-----+-----+*****+
// 
// purchase 5:
// +-----+-----+-----+
// |  0  |  0  | 300 |
// +-----+-----+-----+
// | 600 |  0  |  0  |
// +-----+*****+-----+
// 
// purchase 6:
// +-----+-----+-----+
// |  0  |  0  | 300 |
// +-----+-----+-----+
// |  0  |  0  |  0  |
// +-----+-----+*****+
// 
// final:
// +-----+-----+-----+
// |  0  |  0  |  0  |
// +-----+-----+-----+
// |  0  |  0  |  0  |
// +*****+-----+-----+
// 
// 
// END KAWIGIEDIT TESTING




//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
