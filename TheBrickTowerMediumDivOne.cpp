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

class TheBrickTowerMediumDivOne
{
public:
	vector <int> find(vector <int> heights);
};


vector <int> TheBrickTowerMediumDivOne::find (vector <int> heights) 
{
	vector < ii > vals;
	forn(i, heights.size())
		vals.pb(mp(heights[i], i));

	sort(all(vals));
	
	if(vals.size() == 3) {
		
	}

	if(vals.size() >= 2) {
		if(vals[1].second < vals[0].second) 
			swap(vals[0], vals[1]);
	}
	vector <int> ret;

	forn(i, vals.size())
		ret.pb(vals[i].second);
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, bool hasAnswer, vector <int> p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}";
	cout << "]" << endl;
	TheBrickTowerMediumDivOne *obj;
	vector <int> answer;
	obj = new TheBrickTowerMediumDivOne();
	clock_t startTime = clock();
	answer = obj->find(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "{";
		for (int i = 0; int(p1.size()) > i; ++i) {
			if (i > 0) {
				cout << ",";
			}
			cout << p1[i];
		}
		cout << "}" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "{";
	for (int i = 0; int(answer.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << answer[i];
	}
	cout << "}" << endl;
	if (hasAnswer) {
		if (answer.size() != p1.size()) {
			res = false;
		} else {
			for (int i = 0; int(answer.size()) > i; ++i) {
				if (answer[i] != p1[i]) {
					res = false;
				}
			}
		}
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
	
	vector <int> p0;
	vector <int> p1;
	
	{
	// ----- test 0 -----
	int t0[] = {4,7,5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {0,2,1};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {4,4,4,4,4,4,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {0,1,2,3,4,5,6};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {2,3,3,2};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {0,3,1,2};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {13,32,38,25,43,47,6};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {0,6,3,1,2,4,5};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
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
// 
// John and Brus just built some towers using toy bricks.
// They now have n towers numbered 0 through n-1.
// For each i, the height of the i-th tower (0-based index) is given in heights[i].
// 
// 
// 
// John and Brus want to arrange their towers into a line.
// That is, the bottoms of the towers will all stand on the same line.
// John and Brus don't like it when a tower falls down and knocks over another tower while falling.
// To avoid this, they have to put their towers sufficiently far apart.
// More precisely, the distance between any two neighboring towers must be at least equal to the maximum of their heights.
// John and Brus would like to minimize the distance between the first and the last tower in the line.
// 
// 
// 
// You are given the vector <int> heights.
// Return a vector <int> containing exactly n elements: the order in which the towers should be placed on the line.
// For each i, the i-th element of the return value should be the number of the tower that will be placed i-th on the line.
// If there is a tie (multiple solutions give the same minimal distance), return the lexicographically smallest order.
// 
// 
// 
// DEFINITION
// Class:TheBrickTowerMediumDivOne
// Method:find
// Parameters:vector <int>
// Returns:vector <int>
// Method signature:vector <int> find(vector <int> heights)
// 
// 
// NOTES
// -A vector <int> A is lexicographically smaller than a vector <int> B if it contains a smaller element at the first position where these vector <int>s differ.
// 
// 
// CONSTRAINTS
// -heights will contain between 1 and 47 elements, inclusive.
// -Each element of heights will be between 1 and 47 inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {4, 7, 5}
// 
// Returns: {0, 2, 1 }
// 
// There are six possible orderings, but only four of them have optimal distance 12 between the first and the last towers:
// 
// {0, 2, 1}
// {1, 0, 2}
// {1, 2, 0}
// {2, 0, 1}
// 
// Among these ordirings {0, 2, 1} is the lexicographically smallest one.
// 
// 
// 1)
// {4, 4, 4, 4, 4, 4, 4}
// 
// Returns: {0, 1, 2, 3, 4, 5, 6 }
// 
// Towers may have equal heights.
// 
// 2)
// {2, 3, 3, 2}
// 
// Returns: {0, 3, 1, 2 }
// 
// Towers of height 2 have to be neighboring in the optimal ordering.
// 
// 3)
// {13, 32, 38, 25, 43, 47, 6}
// 
// Returns: {0, 6, 3, 1, 2, 4, 5 }
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
