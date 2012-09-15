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
#define	SZ(a)	int((a).size())

#define	all(c)	(c).begin(), (c).end()
#define	tr(i, c)	for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

#define	present(x, c)	((c).find(x) != (c).end())		//map & set//
#define	cpresent(x, c)	(find(all(c),x) != (c).end())	//vector & list//

#define	forn(i, n)	for(int i = 0; i < n; i++)
#define	forab(i, a, b)	for(int i = a; i <= b; i++)
#define	rep(i, a, b)	for(int i = a; i>=b; i--)

class CubeAnts
{
public:
	int getMinimumSteps(vector <int> pos)
	{
		vector <int> move(8, 0);
		move[1] = move[3] = move[4] = 1;
		move[2] = move[5] = move[7] = 2;
		move[6] = 3;
		
		forn(i, pos.size())
			pos[i] = move[pos[i]];
		
		return *max_element(all(pos));
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}";
	cout << "]" << endl;
	CubeAnts *obj;
	int answer;
	obj = new CubeAnts();
	clock_t startTime = clock();
	answer = obj->getMinimumSteps(p0);
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
	
	vector <int> p0;
	int p1;
	
	{
	// ----- test 0 -----
	int t0[] = {0,1,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {5,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {0};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {6,1,6};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {7,7,3,3,7,7,3,3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
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
// NOTE: This problem statement contains images that may not display properly if viewed outside of the applet.
// Fox Ciel is observing the behavior of ants. She has a cube whose vertices are indexed from 0 to 7 as follows.
// 
// You are given a vector <int> pos containing the initial locations of the ants.  The i-th element of pos is the index of the vertex where the i-th ant is located.  In an attempt to observe their moves, Ciel puts honey on the 0-th vertex.  The ants notice it immediately and start moving toward the honey.  In a single turn, each ant will either move to an adjacent vertex along an edge of the cube or stay in its current vertex.  All moves in a turn happen simultaneously, and at all times, it is legal for multiple ants to be at the same location of the cube.
// 
// Ciel observes the ants until they all move to the 0-th vertex.  In order to determine how clever they were, she wants to know the minimal number of turns that were required for this to happen.  Return this minimal number.
// 
// 
// DEFINITION
// Class:CubeAnts
// Method:getMinimumSteps
// Parameters:vector <int>
// Returns:int
// Method signature:int getMinimumSteps(vector <int> pos)
// 
// 
// CONSTRAINTS
// -pos will contain between 1 and 50 elements, inclusive.
// -Each element of pos will be between 0 and 7, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {0,1,1}
// 
// Returns: 1
// 
// 
// 
// 1)
// {5,4}
// 
// Returns: 2
// 
// 
// 
// 2)
// {0}
// 
// Returns: 0
// 
// There is only one ant, and it is already on the 0-th vertex, so the minimum number of turns required is 0.
// 
// 3)
// {6,1,6}
// 
// Returns: 3
// 
// 
// 
// 4)
// {7,7,3,3,7,7,3,3}
// 
// Returns: 2
// 
// 
// 
// END KAWIGIEDIT TESTING


//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
