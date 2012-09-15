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

class MinskyMysteryDiv2
{
public:
	long long computeAnswer(long long N)
	{
		long long ret;
		
		return ret;
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, long long p0, bool hasAnswer, long long p1) {
	cout << "Test " << testNum << ": [" << p0;
	cout << "]" << endl;
	MinskyMysteryDiv2 *obj;
	long long answer;
	obj = new MinskyMysteryDiv2();
	clock_t startTime = clock();
	answer = obj->computeAnswer(p0);
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
	
	long long p0;
	long long p1;
	
	{
	// ----- test 0 -----
	p0 = 2ll;
	p1 = 3ll;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 3ll;
	p1 = 4ll;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 4ll;
	p1 = 4ll;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 15ll;
	p1 = 8ll;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 24ll;
	p1 = 14ll;
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
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
// Marvin plays a simple game. The game is played with an infinite supply of marbles and five bags, labeled "bag 0" through "bag 4".
// 
// 
// 
// At the beginning, Marvin takes N marbles (where N is a nonnegative integer) and places them into bag 0. The remaining four bags are left empty.
// Marvin then follows this simple algorithm:
// 
// 
// 
//     Add a marble into bag 1.
//     Repeat forever:
//         Add a marble into bag 1.
//         Empty bag 4.
//         While there are marbles in bag 0:
//             While there are marbles both in bag 0 and in bag 1:
//                 Remove a marble from bag 0.
//                 Remove a marble from bag 1.
//                 Add a marble into bag 2.
//                 Add a marble into bag 3.
//             End While
//             Add a marble into bag 4.
//             If bags 0 and 1 are both empty:
//                 Move all marbles from bag 3 to bag 4.
//                 TERMINATE THE GAME
//             End If
//             Move all marbles from bag 3 to bag 1.
//         End While
//         Move all marbles from bag 2 to bag 0.
//     End Repeat
// 
// 
// 
// You are given a long long N. Return a long long containing the number of marbles that will be in bag 4 at the end of Marvin's game. If Marvin's game does not terminate for the given N, return -1 instead.
// 
// 
// DEFINITION
// Class:MinskyMysteryDiv2
// Method:computeAnswer
// Parameters:long long
// Returns:long long
// Method signature:long long computeAnswer(long long N)
// 
// 
// NOTES
// -You may assume that the answer always fits into a long long.
// -Note that N is allowed to be zero.
// 
// 
// CONSTRAINTS
// -N will be between 0 and 10^12, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 2
// 
// Returns: 3
// 
// 
// 
// 1)
// 3
// 
// Returns: 4
// 
// 
// 
// 2)
// 4
// 
// Returns: 4
// 
// 
// 
// 3)
// 15
// 
// Returns: 8
// 
// 
// 
// 4)
// 24
// 
// Returns: 14
// 
// END KAWIGIEDIT TESTING




//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
