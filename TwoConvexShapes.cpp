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

#define endl 		("\n")
#define DEBUG(x)	cout << #x << " = " << x << "\n"
#define Pf		printf
#define	Sf		scanf

#define	ep		1e-9
#define PI		M_PI
#define E 		M_E

#define	CL(a, b)	memset(a, b, sizeof(a))
#define	mp		make_pair
#define	pb		push_back

#define	all(c)		(c).begin(), (c).end()
#define	tr(i, c)	for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

#define	present(x, c)	((c).find(x) != (c).end())		//map & set//
#define	cpresent(x, c)	(find(all(c),x) != (c).end())		//vector & list//

#define forn(i, n)	for(int i = 0, loop_ends_here = (int)n; i < loop_ends_here ; i++)
#define forab(i, a, b)	for(int i = a, loop_ends_here = (int)b; i <= loop_ends_here; i++)
#define rep(i, a, b)	for(int i = a, loop_ends_here = (int)b; i >= loop_ends_here; i--)

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)

class TwoConvexShapes
{
public:
	int countWays(vector <string> grid);
};


int TwoConvexShapes::countWays (vector <string> grid) 
{
	int ret;
	
	return ret;
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
	TwoConvexShapes *obj;
	int answer;
	obj = new TwoConvexShapes();
	clock_t startTime = clock();
	answer = obj->countWays(p0);
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
	string t0[] = {"?" "?","?" "?"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 14;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"B?","?" "?"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 7;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"WWB","WWW","WWW","WWW"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"BBBBBB","WWBBBB","WBBBBB"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"?BB?","BBBB","?BB?"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 5;
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	string t0[] = {"?WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW","B?WWWWWWWWWWWWWWWWWWWWWWWWWWWWW","BB?WWWWWWWWWWWWWWWWWWWWWWWWWWWW","BBB?WWWWWWWWWWWWWWWWWWWWWWWWWWW","BBBB?WWWWWWWWWWWWWWWWWWWWWWWWWW","BBBBB?WWWWWWWWWWWWWWWWWWWWWWWWW","BBBBBB?WWWWWWWWWWWWWWWWWWWWWWWW","BBBBBBB?WWWWWWWWWWWWWWWWWWWWWWW","BBBBBBBB?WWWWWWWWWWWWWWWWWWWWWW","BBBBBBBBB?WWWWWWWWWWWWWWWWWWWWW","BBBBBBBBBB?WWWWWWWWWWWWWWWWWWWW","BBBBBBBBBBB?WWWWWWWWWWWWWWWWWWW","BBBBBBBBBBBB?WWWWWWWWWWWWWWWWWW","BBBBBBBBBBBBB?WWWWWWWWWWWWWWWWW","BBBBBBBBBBBBBB?WWWWWWWWWWWWWWWW","BBBBBBBBBBBBBBB?WWWWWWWWWWWWWWW","BBBBBBBBBBBBBBBB?WWWWWWWWWWWWWW","BBBBBBBBBBBBBBBBB?WWWWWWWWWWWWW","BBBBBBBBBBBBBBBBBB?WWWWWWWWWWWW","BBBBBBBBBBBBBBBBBBB?WWWWWWWWWWW","BBBBBBBBBBBBBBBBBBBB?WWWWWWWWWW","BBBBBBBBBBBBBBBBBBBBB?WWWWWWWWW","BBBBBBBBBBBBBBBBBBBBBB?WWWWWWWW","BBBBBBBBBBBBBBBBBBBBBBB?WWWWWWW","BBBBBBBBBBBBBBBBBBBBBBBB?WWWWWW","BBBBBBBBBBBBBBBBBBBBBBBBB?WWWWW","BBBBBBBBBBBBBBBBBBBBBBBBBB?WWWW","BBBBBBBBBBBBBBBBBBBBBBBBBBB?WWW","BBBBBBBBBBBBBBBBBBBBBBBBBBBB?WW","BBBBBBBBBBBBBB"
			"BBBBBBBBBBBBBBB?W"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 73741817;
	all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
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
// A platypus has been given the mission to paint the cells on a grid either black or white according to the following two conditions:
// 
// For each color, all cells of that color must be connected.
// Formally, a pair of cells of color X is connected if there is a path of adjacent cells of color X between them.
// (Two cells are adjacent if they share a common edge.)
// We require that for each color, each pair of cells of that color must be connected.
// All the cells of each color must form a convex shape. 
// A group of cells of a given color is convex if in each row and each column the cells of that color form a connected segment (possibly taking the whole row or column).
// In other words, whenever two cells of the same color share the same row or the same column, all cells between them must also have that particular color.
// 
// The platypus is also allowed to paint the grid completely white or black.
// 
// The platypus may have already painted some of the cells. The current state of the grid is given as a vector <string> grid. The i-th character of the j-th element of grid that represents the cell at row j, column i is 'W' if it has been painted white, 'B' if it has been painted black, and '?' if it does not have a color yet. Let X be the number of different ways how to color the rest of the grid according to the above conditions. Return the value X modulo 1000000007 (10^9 + 7). Two ways to color a grid are different if the color of at least one cell differs.
// 
// 
// 
// DEFINITION
// Class:TwoConvexShapes
// Method:countWays
// Parameters:vector <string>
// Returns:int
// Method signature:int countWays(vector <string> grid)
// 
// 
// CONSTRAINTS
// -grid will contain between 1 and 50 elements, inclusive.
// -Element 0 of grid will contain between 1 and 50 characters, inclusive.
// -The remaining elements of grid will contain the same number of characters as element 0.
// -Each character in each element of grid will be one of 'B', 'W', and '?' (quotes for clarity).
// 
// 
// EXAMPLES
// 
// 0)
// {"??",
//  "??"}
// 
// Returns: 14
// 
// Of all the 16 different ways to color the grid, only the following 2 are not valid.
// 
// BW WB
// WB BW
// 
// This is because cells of the same color are not connected.
// 
// 1)
// {"B?",
//  "??"}
// 
// Returns: 7
// 
// The following seven ways to color the grid are correct:
// 
// BB BW BB BW BB BB BW
// BB BW WW WW WB BW BB
// 
// 
// 2)
// {"WWB",
//  "WWW",
//  "WWW",
//  "WWW"}
// 
// Returns: 1
// 
// All colors have already been picked. The only possible coloring is already valid.
// 
// 3)
// {"BBBBBB",
//  "WWBBBB",
//  "WBBBBB"}
// 
// Returns: 0
// 
// This coloring of the grid is not valid, the black cells do not form a convex shape.
// 
// 4)
// {"?BB?",
//  "BBBB",
//  "?BB?"}
// 
// Returns: 5
// 
// 
// 
// 5)
// {"?WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
//  "B?WWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
//  "BB?WWWWWWWWWWWWWWWWWWWWWWWWWWWW",
//  "BBB?WWWWWWWWWWWWWWWWWWWWWWWWWWW",
//  "BBBB?WWWWWWWWWWWWWWWWWWWWWWWWWW",
//  "BBBBB?WWWWWWWWWWWWWWWWWWWWWWWWW",
//  "BBBBBB?WWWWWWWWWWWWWWWWWWWWWWWW",
//  "BBBBBBB?WWWWWWWWWWWWWWWWWWWWWWW",
//  "BBBBBBBB?WWWWWWWWWWWWWWWWWWWWWW",
//  "BBBBBBBBB?WWWWWWWWWWWWWWWWWWWWW",
//  "BBBBBBBBBB?WWWWWWWWWWWWWWWWWWWW",
//  "BBBBBBBBBBB?WWWWWWWWWWWWWWWWWWW",
//  "BBBBBBBBBBBB?WWWWWWWWWWWWWWWWWW",
//  "BBBBBBBBBBBBB?WWWWWWWWWWWWWWWWW",
//  "BBBBBBBBBBBBBB?WWWWWWWWWWWWWWWW",
//  "BBBBBBBBBBBBBBB?WWWWWWWWWWWWWWW",
//  "BBBBBBBBBBBBBBBB?WWWWWWWWWWWWWW",
//  "BBBBBBBBBBBBBBBBB?WWWWWWWWWWWWW",
//  "BBBBBBBBBBBBBBBBBB?WWWWWWWWWWWW",
//  "BBBBBBBBBBBBBBBBBBB?WWWWWWWWWWW",
//  "BBBBBBBBBBBBBBBBBBBB?WWWWWWWWWW",
//  "BBBBBBBBBBBBBBBBBBBBB?WWWWWWWWW",
//  "BBBBBBBBBBBBBBBBBBBBBB?WWWWWWWW",
//  "BBBBBBBBBBBBBBBBBBBBBBB?WWWWWWW",
//  "BBBBBBBBBBBBBBBBBBBBBBBB?WWWWWW",
//  "BBBBBBBBBBBBBBBBBBBBBBBBB?WWWWW",
//  "BBBBBBBBBBBBBBBBBBBBBBBBBB?WWWW",
//  "BBBBBBBBBBBBBBBBBBBBBBBBBBB?WWW",
//  "BBBBBBBBBBBBBBBBBBBBBBBBBBBB?WW",
//  "BBBBBBBBBBBBBBBBBBBBBBBBBBBBB?W"}
// 
// Returns: 73741817
// 
// Each of the 2^30 ways to color the remaining cells in the grid is valid.
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
