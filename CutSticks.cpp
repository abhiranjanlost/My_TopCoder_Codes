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
#define	cl(a, b)	memset(a, b, sizeof(a))
#define mp		make_pair
#define pb		push_back

#define	present(x, c)	((c).find(x) != (c).end())	//map & set//
#define	cpresent(x, c)	(find( (c).begin(), (c).end(), x) != (c).end())	//vector & list//

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)

//#define debug(x)
#define debug(x)	cout << #x << " = " << x << "\n"

class CutSticks
{
public:
	double maxKth(vector <int> sticks, int C, int K);
};

double CutSticks::maxKth (vector <int> sticks, int C, int K) 
{
	double ret;
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, int p1, int p2, bool hasAnswer, double p3) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << p1 << "," << p2;
	cout << "]" << endl;
	CutSticks *obj;
	double answer;
	obj = new CutSticks();
	clock_t startTime = clock();
	answer = obj->maxKth(p0, p1, p2);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p3 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == answer && fabs(p3 - answer) <= 1e-9 * max(1.0, fabs(p3));
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
	int p2;
	double p3;
	
	{
	// ----- test 0 -----
	int t0[] = {5,8};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	p2 = 1;
	p3 = 8.0;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {5,8};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	p2 = 2;
	p3 = 5.0;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {5,8};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	p2 = 3;
	p3 = 4.0;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {1000000000,1000000000,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	p2 = 5;
	p3 = 1.0;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {76,594,17,6984,26,57,9,876,5816,73,969,527,49};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 789;
	p2 = 456;
	p3 = 34.92;
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, true, p3) && all_right;
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
// John has some sticks of various lengths. You are given a vector <int> sticks, where each element is the length of a single stick.
// 
// 
// He is allowed to perform at most C cuts. With each cut, he chooses one of his sticks and divides it into exactly two sticks of arbitrary positive lengths (the sum of their lengths must equal the length of the original stick). Each of these sticks can then be chosen again when making subsequent cuts.
// 
// 
// After he performs all his cuts, he sorts the sticks in non-increasing order by length and chooses the K-th (1-based) stick. Return the maximal possible length of the stick he chooses. Note that he must perform at least as many cuts as are required to end up with K or more sticks.
// 
// DEFINITION
// Class:CutSticks
// Method:maxKth
// Parameters:vector <int>, int, int
// Returns:double
// Method signature:double maxKth(vector <int> sticks, int C, int K)
// 
// 
// NOTES
// -Your return value must have an absolute or relative error less than 1e-9.
// 
// 
// CONSTRAINTS
// -sticks will contain between 1 and 50 elements, inclusive.
// -Each element of sticks will be between 1 and 1,000,000,000, inclusive.
// -C will be between 1 and 1,000,000,000, inclusive.
// -K will be between 1 and n + C, inclusive, where n is the number of elements in sticks.
// 
// 
// EXAMPLES
// 
// 0)
// {5, 8}
// 1
// 1
// 
// Returns: 8.0
// 
// John can make at most one cut.  He should either cut the stick of length 5 (it doesn't matter where) or not make any cuts at all.  If he makes no cuts, then after he sorts the sticks, they will be in the following order: {8, 5}.  He chooses the 1st stick, which has length 8.
// 
// 1)
// {5, 8}
// 1
// 2
// 
// Returns: 5.0
// 
// Again, the easiest thing to do here is not make any cuts.
// 
// 2)
// {5, 8}
// 1
// 3
// 
// Returns: 4.0
// 
// John has 2 sticks and he can make at most one cut.  In this case, since K is 3, he is required to make a cut so he can end up with 3 sticks.  He should cut the longest stick into two equal sticks of length 4.  After he sorts the sticks, they will be in the following order: {5, 4, 4}.  He will choose the 3rd stick, which has length 4.
// 
// 3)
// {1000000000, 1000000000, 1}
// 2
// 5
// 
// Returns: 1.0
// 
// 
// 
// 4)
// {76, 594, 17, 6984, 26, 57, 9, 876, 5816, 73, 969, 527, 49}
// 789
// 456
// 
// Returns: 34.92
// 
// 
// 
// END KAWIGIEDIT TESTING


//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!