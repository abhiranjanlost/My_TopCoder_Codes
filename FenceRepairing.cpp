#include <iostream>
#include <ctime>
#include <vector>
#include <list>
#include <queue>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cassert>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <iterator>
#include <fstream>
using namespace std;

typedef long long 		int64;
typedef vector<int> 		vi;
typedef string 			ST;
typedef stringstream 		SS;
typedef vector< vector<int> > 	vvi;
typedef pair<int,int> 		ii;
typedef vector<string> 		vs;
/*
#if __cplusplus > 199711L	// for g++0x, value of __cplusplus must be greater thana 199711L.
	#define tr(i, c)	for(auto i = begin(c); i != end(c); i++)
#else
	#define tr(i, c)	for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#endif
*/
#define endl		("\n")
#define tr(i, c)	for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define PI		M_PI
#define E 		M_E
#define	eps		1e-9

#define	Sf		scanf
#define	Pf		printf

#define forn(i, n)	for(int i = 0, lets_stop_here = (int)n; i <  lets_stop_here; i++)
#define forab(i, a, b)	for(int i = a, lets_stop_here = (int)b; i <= lets_stop_here; i++)
#define rep(i, a, b)	for(int i = a, lets_stop_here = (int)b; i >= lets_stop_here; i--)

#define	all(c)		(c).begin(), (c).end()
#define	CL(a, b)	memset(a, b, sizeof(a))
#define mp		make_pair
#define pb		push_back

#define	present(x, c)	((c).find(x) != (c).end())	//map & set//
#define	cpresent(x, c)	(find( (c).begin(), (c).end(), x) != (c).end())	//vector & list//

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)

#if (0 or defined ONLINE_JUDGE)
	#define DEBUG
#else 
	#define DEBUG(x)	cout << #x << " = " << x << "\n"
#endif

class FenceRepairing
{
public:
	double calculateCost(vector <string> boards);
};

string board;
double ans[55*55];

int nextIdx[55*55], prevIdx[55*55];

void preprocess() {
	int idx = -1;

	forn(i, board.size()) {
		if(board[i] == 'X')
			idx = i;
		prevIdx[i] = idx;
	}

	idx = -1;
	rep(i, board.size()-1, 0) {
		if(board[i] == 'X')
			idx = i;
		nextIdx[i] = idx;
	}
/*
	forn(i, board.size())
		Pf("%d: next = %d, prev = %d\n", i, nextIdx[i], prevIdx[i]);
	cout << endl;
*/
}

int len(int l, int r) {
	int ret;
	if(nextIdx[l] == -1 || nextIdx[l] > r)
		ret = 0;
	else
		ret = prevIdx[r] - nextIdx[l] + 1;
	//Pf("[%d, %d] : %d  |  ", l, r, ret);
	return ret;
}

double FenceRepairing::calculateCost (vector <string> boards) 
{
	board.clear();
	tr(it, boards)
		board += *it;
	DEBUG(board);
	preprocess();
//	CL(_len, -1);

	forn(i, board.size()) {
		ans[i] = sqrt(len(0, i));

		forab(j, 0, i-1)
			ans[i] = min(ans[i], ans[j] + sqrt(len(j+1, i)));
	}

	return ans[board.size()-1];
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, bool hasAnswer, double p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	FenceRepairing *obj;
	double answer;
	obj = new FenceRepairing();
	clock_t startTime = clock();
	answer = obj->calculateCost(p0);
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
		res = answer == answer && fabs(p1 - answer) <= 1e-9 * max(1.0, fabs(p1));
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
	double p1;
	
	{
	// ----- test 0 -----
	string t0[] = {"X.X...X.X"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3.0;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"X.X.....X"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2.732050807568877;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"X.......","......XX",".X......",".X...X.."};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 5.0;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {".X.......X","..........","...X......","...X..X...","..........","..........","..X....XX.",".........X","XXX",".XXX.....X"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 9.591663046625438;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
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
// You are going to repair an old fence.  The fence consists of several consecutive boards, some of which are broken and some of which are fine.  The boards are numbered from left to right in increasing order.  To repair all the boards between i and j, inclusive, where j is greater than or equal to i, a woodworker charges sqrt(j-i+1), where sqrt is the square root function.  Due to the woodworker's pricing scheme, it is often necessary to repair boards even if they are not broken in order to get the best price (see examples).
// You will be given a vector <string> boards. Concatenate the elements of boards to create a single string representing the fence from left to right. Broken boards are represented by 'X' characters and good boards are represented by '.' characters. Return the minimal cost required to repair all broken boards.
// 
// 
// DEFINITION
// Class:FenceRepairing
// Method:calculateCost
// Parameters:vector <string>
// Returns:double
// Method signature:double calculateCost(vector <string> boards)
// 
// 
// NOTES
// -Your return value must have an absolute or relative error less than 1e-9.
// 
// 
// CONSTRAINTS
// -boards will contain between 1 and 50 elements, inclusive.
// -Each element of boards will contain between 1 and 50 characters, inclusive.
// -Each element of boards will contain only '.' and uppercase 'X' characters.
// 
// 
// EXAMPLES
// 
// 0)
// {"X.X...X.X"}
// 
// Returns: 3.0
// 
// The best choice is to repair the entire fence at once.  This will cost sqrt(8-0+1) = 3.
// 
// 
// 1)
// {"X.X.....X"}
// 
// Returns: 2.732050807568877
// 
// The best choice is to perform two repairs.  First, repair the three leftmost boards.  Then, repair the rightmost board.  The total cost is sqrt(2-0+1) + sqrt(8-8+1) = 2.73.
// 
// 2)
// {"X.......", "......XX", ".X......", ".X...X.."}
// 
// Returns: 5.0
// 
// 
// 
// 3)
// {".X.......X", "..........", "...X......", "...X..X...", "..........",
//  "..........", "..X....XX.", ".........X", "XXX", ".XXX.....X"}
// 
// Returns: 9.591663046625438
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
