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
#define	tr(i, c)	for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

#define	present(x, c)	((c).find(x) != (c).end())		//map & set//
#define	cpresent(x, c)	(find(all(c),x) != (c).end())	//vector & list//

#define forn(i, n)	for(int i = 0, loop_ends_here = (int)n; i < loop_ends_here; i++)
#define forab(i, a, b)	for(int i = a, loop_ends_here = (int) b; i <= loop_ends_here; i++)
#define rep(i, a, b)	for(int i = a, loop_ends_here = (int)b; i>=loop_ends_here; i--)

class SmallBricks31
{
public:
	int countWays(int w, int h)
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
bool KawigiEdit_RunTest(int testNum, int p0, int p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1;
	cout << "]" << endl;
	SmallBricks31 *obj;
	int answer;
	obj = new SmallBricks31();
	clock_t startTime = clock();
	answer = obj->countWays(p0, p1);
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
	
	int p0;
	int p1;
	int p2;
	
	{
	// ----- test 0 -----
	p0 = 1;
	p1 = 3;
	p2 = 4;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 3;
	p1 = 1;
	p2 = 13;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 3;
	p1 = 2;
	p2 = 84;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 4;
	p1 = 9;
	p2 = 132976888;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 5;
	p1 = 5;
	p2 = 11676046;
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
// NOTE: This problem statement contains images that may not display properly if viewed outside of the applet.
// 
// We have three kinds of construction bricks. Those of dimensions 1x1x1, 1x1x2 and 1x1x3. We also have a special brick of dimensions 1x1xw which we will call the base.
// 
// 
// 
// We would like to use the bricks and the base to build structures. For the bricks to connect to each other and to the base, they all have to be aligned properly. Placing a brick at a non-integer position is not allowed. Also, to ensure stability, the longer bricks (1x1x2 and 1x1x3) must be placed in a way that their extremes both rest on top of another brick or bricks, including the base. There may be an empty space directly below the middle part of a 1x1x3 brick. The following image shows a valid structure and the other image shows a structure that is invalid for three reasons.
// 
// 
// 
// 
// 
// The height of a structure is the number of layers of bricks it contains. The base is not counted into the height of the structure.
// 
// Two structures are different if there is a position where they differ in any way. (There are two ways in which two given structures may differ: First, there may be a position where one structure has a brick and the other does not. Second, there may be a position where both structures have bricks, but the bricks are of different types.)
// 
// Given are two ints w and h. Count the total number of different structures that can be created using any number of 1x1x1, 1x1x2 and 1x1x3 bricks and a base of width w such that the height of the structure is at most h units. Since the result can be large, return the count modulo 1000000007.
// For example, the following image shows the 84 different structures for w=3, h=2:
// 
// 
// 
// DEFINITION
// Class:SmallBricks31
// Method:countWays
// Parameters:int, int
// Returns:int
// Method signature:int countWays(int w, int h)
// 
// 
// CONSTRAINTS
// -w will be between 1 and 10, inclusive.
// -h will be between 1 and 10, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 1
// 3
// 
// Returns: 4
// 
// 
// 
// 1)
// 3
// 1
// 
// Returns: 13
// 
// The leftmost column in the picture above shows the 13 different structures of width 3 and at most 1 unit of height.
// 
// 2)
// 3
// 2
// 
// Returns: 84
// 
// The picture above shows the 84 different structures of width 3 and at most 2 unit of height.
// 
// 3)
// 4
// 9
// 
// Returns: 132976888
// 
// 4)
// 5
// 5
// 
// Returns: 11676046
// 
// END KAWIGIEDIT TESTING




//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
