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

class GogoXCake
{
	vs cake, cutter;
	bool in(int r, int c) {
		if(r + cutter.size() > cake.size())
			return false;
		if(c + cutter[0].size() > cake[0].size())
			return false;
		forn(i, cutter.size())
			forn(j, cutter[i].size())
				if(cake[r+i])
		return true;
	}
	
public:
	string solve(vector <string> _cake, vector <string> _cutter)
	{
		cake = _cake, cutter =_cutter;
		return "NO";
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, vector <string> p1, bool hasAnswer, string p2) {
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
	GogoXCake *obj;
	string answer;
	obj = new GogoXCake();
	clock_t startTime = clock();
	answer = obj->solve(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p2 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
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
	string p2;
	
	{
	// ----- test 0 -----
	string t0[] = {"X.X","...","...","X.X"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {".X","..","X."};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "YES";
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"..XX","...X","X...","XX.."};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"..",".."};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "NO";
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"...X..."};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"..."};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "YES";
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {".X.","X.X",".X."};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"."};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "YES";
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"XXXXXXX","X.....X","X.....X","X.....X","XXXXXXX"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {".X.","XXX",".X."};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "NO";
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	string t0[] = {"..","X.",".X"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"..",".X","X."};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "NO";
	all_right = KawigiEdit_RunTest(5, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 6 -----
	string t0[] = {"X..",".XX",".XX"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {".XX",".XX","X.."};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "NO";
	all_right = KawigiEdit_RunTest(6, p0, p1, true, p2) && all_right;
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
// Like all other software engineers, Gogo likes to cut and eat cake. He used a rectangular baking dish to make a cake. The dish is divided into a grid of unit square cells. Initially, all the cells contained the cake.
// 
// Gogo's friend John wanted to eat the cake. Gogo gave John a rectangular cake cutter with the following properties:
// 
// The cake cutter is divided into a grid of cells. The cells are of the same size as the cells of the dish.
// The cake cutter contains cells of two types: used cells and ignored cells.
// Each of the first row, the last row, the first column, and the last column of the cutter contains at least one used cell.
// 
// When used, the cake cutter must be placed on the dish according to the following rules:
// 
// Each cell of the cutter must contain a single cell of the dish.
// It is not allowed to flip or rotate the cutter. Rows and columns of the cutter must correspond to some consecutive rows and some consecutive columns of the dish in the given orientation. (See the last two examples.)
// Each used cell of the cutter must be placed onto a cell that still contains cake. The ignored cells may be placed onto any cells.
// 
// 
// When the cake cutter is used in the way described above, it removes the cake from all the used cells. John may have used the cake cutter multiple times, one after another.
// 
// After John went home, Gogo examined the cake that remained in the dish. He now wants to check whether John really cut the cake according to the above rules. You are given vector <string>s cake and cutter. The remaining cake is described by cake. More precisely, cake[i][j] is 'X' if the cell in the i-th row and j-th column of the dish still contains cake; otherwise cake[i][j] is '.' (a period). The cake cutter is described by cutter. More precisely, cutter[i][j] is '.' (a period) if the cell in the i-th row and j-th column of the cutter is used, and 'X' if the cell is ignored.
// 
// Return "YES" (quotes for clarity) if it is possible that John only ate the cake by using the cutter in the way described above. Return "NO" otherwise.
// 
// DEFINITION
// Class:GogoXCake
// Method:solve
// Parameters:vector <string>, vector <string>
// Returns:string
// Method signature:string solve(vector <string> cake, vector <string> cutter)
// 
// 
// NOTES
// -The used cells in the cutter do not have to be contiguous.
// 
// 
// CONSTRAINTS
// -cake will contain between 1 and 50 elements, inclusive.
// -Each element of cake will contain between 1 and 50 characters, inclusive.
// -All elements of cake will contain the same number of characters.
// -Each character in each element of cake will be either '.' or 'X'.
// -There will be at least one '.' in cake
// -cutter will contain between 1 and R elements, inclusive, where R is the number of elements in cake.
// -Each element of cutter will contain between 1 and C characters, inclusive, where C is the number of characters in each element of cake.
// -All elements of cutter will contain the same number of characters.
// -Each character in each element of cutter will be either '.' or 'X'.
// -Each of the first row, the first column, the last row, and the last column of the cutter will contain at least one '.'.
// 
// 
// EXAMPLES
// 
// 0)
// {"X.X"
// ,"..."
// ,"..."
// ,"X.X"}
// {".X"
// ,".."
// ,"X."}
// 
// Returns: "YES"
// 
// 
// 
// 1)
// {"..XX"
// ,"...X"
// ,"X..."
// ,"XX.."}
// {".."
// ,".."}
// 
// Returns: "NO"
// 
// 
// 
// 2)
// {"...X..."}
// {"..."}
// 
// Returns: "YES"
// 
// 
// 
// 3)
// {".X."
// ,"X.X"
// ,".X."}
// {"."}
// 
// Returns: "YES"
// 
// 
// 
// 4)
// {"XXXXXXX"
// ,"X.....X"
// ,"X.....X"
// ,"X.....X"
// ,"XXXXXXX"}
// {".X."
// ,"XXX"
// ,".X."}
// 
// Returns: "NO"
// 
// 
// 
// 5)
// {".."
// ,"X."
// ,".X"}
// {".."
// ,".X"
// ,"X."}
// 
// Returns: "NO"
// 
// You may not flip the cutter.
// 
// 6)
// {"X.."
// ,".XX"
// ,".XX"}
// {".XX"
// ,".XX"
// ,"X.."}
// 
// Returns: "NO"
// 
// You may not rotate the cutter.
// 
// END KAWIGIEDIT TESTING




//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
