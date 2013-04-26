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

class PasswordXGrid
{
public:
	int minSum(vector <string> horizontal, vector <string> vertical);
};

int PasswordXGrid::minSum (vector <string> horizontal, vector <string> vertical) 
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
	PasswordXGrid *obj;
	int answer;
	obj = new PasswordXGrid();
	clock_t startTime = clock();
	answer = obj->minSum(p0, p1);
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
	string t0[] = {"1","4"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"32"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 7;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"47","59"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"361"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 19;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"36","23","49"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"890","176"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 28;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"8888585","5888585"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"58585858"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 58;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"7777777","7777777","7777777","7777777"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"44444444","44444444","44444444"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 61;
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
// Ms. Ciel loves rabbits. She has a large special cage for her rabbits. The cage is protected by a special lock: a board containing a grid.
// 
// 
// 
// The board contains an N times M grid.
// We can assign integer coordinates to the vertices of the grid.
// (Vertices are the points where horizontal and vertical grid lines intersect.)
// The top left corner of the grid will get the coordinates (0,0) and the bottom right corner coordinates (N,M).
// Each line segment between two adjacent vertices is labeled by an integer from 0 to 9, inclusive.
// You are given two vector <string>s horizontal and vertical containing these labels in the format defined below.
// 
// For all i, j such that 0 <= i <= N and 0 <= j <= M-1, there is a line segment between the points (i,j) and (i,j+1).
// This line segment has the label horizontal[i][j].
// For all i, j such that 0 <= i <= N-1 and 0 <= j <= M, there is a line segment between the points (i,j) and (i+1,j).
// This line segment has the label vertical[i][j].
// 
// 
// 
// 
// To unlock this board, you must put your finger on the point (0, 0), and move to the point (N, M).
// In each step you can only go down or right.
// I.e., if you are currently at the point (i,j), your next step may take you either to (i,j+1), or to (i+1,j).
// By moving your finger you picked one of the paths from the top left to the bottom right corner.
// The path consists of N+M line segments, and each of those line segments has an integer label.
// The cost of a path is the sum of those labels.
// Let S be the smallest value among the costs of all valid paths from the top left to the bottom right corner.
// Inside the board there is a counter that computes the sum of all numbers that are on the line segments you used in your path.
// The lock will open if and only if you picked a path with cost exactly S, i.e., a path with the smallest possible cost.
// 
// 
// 
// Finding the way to unlock a given board is a shortest path problem.
// You could surely solve it, but Ciel is just a young fox.
// She does not know any complicated algorithms such as Dijkstra, Bellman-Ford, or Floyd-Warshall.
// Thus unlocking the board is too hard for her.
// She wants you to modify her board to a state in which it can be unlocked by any path from the top left to the bottom right corner.
// In other words, on the resulting board all valid paths must have exactly the same cost T. 
// The only allowed operation is to increase some of the labels.
// (The new labels must again be integers, but they are allowed to exceed 9.)
// Compute and return the smallest possible value of T.
// 
// DEFINITION
// Class:PasswordXGrid
// Method:minSum
// Parameters:vector <string>, vector <string>
// Returns:int
// Method signature:int minSum(vector <string> horizontal, vector <string> vertical)
// 
// 
// NOTES
// -Note that Ciel can always achieve her goal: for example, she can increase every number to X, where X is the maximal number over all numbers on the board.
// 
// 
// CONSTRAINTS
// -N and M will be between 1 and 40, inclusive.
// -horizontal will contain N+1 elements.
// -Each element of horizontal will contain M characters.
// -vertical will contain N elements.
// -Each element of vertical will contain M+1 characters.
// -Each character in each element of horizontal and vertical will be a digit: '0'-'9'.
// 
// 
// EXAMPLES
// 
// 0)
// {"1","4"}
// {"32"}
// 
// Returns: 7
// 
// We have two possible paths.
// One of them has the cost 1+2 = 3, the other one 3+4 = 7.
// As the costs are not equal, we have to modify some of the labels.
// One possible solution is to increase the label 1 to 5.
// Then both paths have the same cost: 7.
// 
// 1)
// {"47", "59"}
// {"361"}
// 
// Returns: 19
// 
// This is how the grid looks like:
// 
// +--4--+--7--+
// |     |     |
// 3     6     1
// |     |     |
// +--5--+--9--+
// 
// One possible solution is to increase 3 to 5 and 7 to 14.
// 
// 2)
// {"36", "23", "49"}
// {"890", "176"}
// 
// Returns: 28
// 
// 
// 
// 3)
// {"8888585","5888585"}
// {"58585858"}
// 
// Returns: 58
// 
// 
// 
// 4)
// {"7777777","7777777","7777777","7777777"}
// {"44444444","44444444","44444444"}
// 
// Returns: 61
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!