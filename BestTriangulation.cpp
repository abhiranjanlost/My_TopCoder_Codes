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
	#define debug 
#else 
	#define debug(x)	cout << #x << " = " << x << "\n"
#endif

class BestTriangulation
{
public:
	double maxArea(vector <string> vertices);
};

// SRM 278 Div1 Easy
double BestTriangulation::maxArea (vector <string> vertices) 
{
	double ret = -1;

	forn(i, vertices.size()) forn(j, vertices.size()) forn(k, vertices.size()) {
		if(i == j || i == k || j == k)
			continue;
		SS ss1(vertices[i]), ss2(vertices[j]), ss3(vertices[k]);
		int x1, y1, x2, y2, x3, y3;
		ss1 >> x1 >> y1;
		ss2 >> x2 >> y2;
		ss3 >> x3 >> y3;

		ret = max(ret, abs(x1*y2 + y1*x3 + x2*y3 - y2*x3 - y1*x2 - y3*x1)/2.0);
//		Pf("(%d, %d) (%d, %d) (%d, %d)\n", x1, y1, x2, y2, x3, y3);
	}
	
	return ret;
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
	BestTriangulation *obj;
	double answer;
	obj = new BestTriangulation();
	clock_t startTime = clock();
	answer = obj->maxArea(p0);
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
	string t0[] = {"1 1","2 3","3 2"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1.5;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"1 1","1 2","3 3","2 1"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1.5;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"1 2","1 3","2 4","3 4","4 3","4 2","3 1","2 1"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 3.0;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"6 2","2 1","1 2","1 4","2 6","5 6","6 5"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 10.0;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"10000 3469","9963 712","9957 634","9834 271","9700 165","9516 46","8836 4","1332 57","229 628","171 749","52 1269","30 1412","7 4937","35 8676","121 9917","2247 9960","3581 9986","6759 9995","9486 9998","9888 9890","9914 9318","9957 8206","9998 6402"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 4.8292483E7;
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
// You have a convex polygon. You select three consecutive vertices and create a triangle with them.  Remove this triangle from the polygon (if you had a polygon with N vertices, the resulting polygon would have N-1 vertices). Repeat this process until the remaining polygon is a triangle.
// You are given a vector <string> vertices, representing the vertices of the polygon in clockwise order. Each element will be formatted as "X Y", where X and Y are the coordinates of a vertex. Return a double representing the area of the largest possible triangle that can remain at the end.
// 
// DEFINITION
// Class:BestTriangulation
// Method:maxArea
// Parameters:vector <string>
// Returns:double
// Method signature:double maxArea(vector <string> vertices)
// 
// 
// NOTES
// -The returned value must be accurate to 1e-9 relative or absolute.
// 
// 
// CONSTRAINTS
// -vertices will contain between 3 and 35 elements, inclusive.
// -Each element of vertices will be formatted as "X Y", where X and Y are integers without leading zeroes.
// -Each X and Y will be between 1 and 10000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {"1 1", "2 3", "3 2"}
// 
// Returns: 1.5
// 
// The polygon is already a triangle, so you cannot perform any cuts.
// 
// 1)
// {"1 1", "1 2", "3 3", "2 1"}
// 
// Returns: 1.5
// 
// Here you must perform one cut.
// If you cut vertices (3, 0, 1), a triangle of area 1.5 will remain.
// If you cut vertices (0, 1, 2), a triangle of area 1 will remain.
// If you cut vertices (1, 2, 3), a triangle of area 0.5 will remain.
// If you cut vertices (2, 3, 0), a triangle of area 1 will remain.
// Your best option is to cut (3, 0, 1).
// 
// 2)
// {"1 2", "1 3", "2 4", "3 4", "4 3", "4 2", "3 1", "2 1"}
// 
// Returns: 3.0
// 
// In such an 8-gon, you must cut the following triangles in order: (7, 0, 1), (7, 1, 2), (2, 3, 4), (4, 5, 6), (4, 6, 7). Finally, a triangle with vertices (2, 4, 7) is left, and its area is 3.
// 
// 3)
// {"6 2", "2 1", "1 2", "1 4", "2 6", "5 6", "6 5"}
// 
// Returns: 10.0
// 
// 4)
// {"10000 3469", "9963 712", "9957 634", "9834 271", "9700 165",
//  "9516 46", "8836 4", "1332 57", "229 628", "171 749",
//  "52 1269", "30 1412", "7 4937", "35 8676", "121 9917",
//  "2247 9960", "3581 9986", "6759 9995", "9486 9998", "9888 9890",
//  "9914 9318", "9957 8206", "9998 6402"} 
// 
// Returns: 4.8292483E7
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
