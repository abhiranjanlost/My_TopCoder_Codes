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

class RGBColor
{
public:
	vector <int> getComplement(vector <int> rgb)
	{
		vector <int> ret;
		
		return ret;
	}
};

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
	RGBColor *obj;
	vector <int> answer;
	obj = new RGBColor();
	clock_t startTime = clock();
	answer = obj->getComplement(p0);
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
	int t0[] = {255,0,0};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {0,255,255};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {115,115,143};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {243,243,15};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {115,115,144};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {140,140,111};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {153,12,55};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {102,243,200};
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
// When doing any work with visual media it is often very useful to have the complement of a color on hand to create contrast and bring the focus of a picture to a particular place.  To create the complement of a color on a computer, each of the red, green, and blue values of a color are inverted.  Each of the red, green, and blue values of a color can range from 0 to 255, inclusive.  If a particular component of one color is 50, then that component of its complement is 255-50=205.
// Although this generally works well, it doesn't generate good complements for grey colors that have all three components right around 128.  To fix this you will return an alternate complement for grey colors.  If each component of a color and its corresponding component of the color's complement differ by 32 or less, then make the complement of each component by either adding 128 to a component's value, or by subtracting 128 from a component's value, whichever one results in a legal value.  For example, the color {120,130,140} would have the complement {125,105,115}, but each component in the color and the complement differ by 32 or less, so we make the complement {248,2,12}.
// Create a class RGBColor with a method getComplement that takes a vector <int> rgb representing the red, green, and blue values of a color, in that order, and returns a vector <int> representing the red, green, and blue values of the complement of that color, in that same order.
// 
// DEFINITION
// Class:RGBColor
// Method:getComplement
// Parameters:vector <int>
// Returns:vector <int>
// Method signature:vector <int> getComplement(vector <int> rgb)
// 
// 
// CONSTRAINTS
// -rgb will contain exactly three elements.
// -Each element of rgb will be a value between 0 and 255, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {255,0,0}
// 
// Returns: { 0,  255,  255 }
// 
// The complement of red is cyan.
// 
// 1)
// {115,115,143}
// 
// Returns: { 243,  243,  15 }
// 
// The complement of this bluish-grey would normally have been {140,140,112}.  But since each component of the complement would have been within 32 of the corresponding component of rgb we return the alternate complement instead.
// 
// 2)
// {115,115,144}
// 
// Returns: { 140,  140,  111 }
// 
// Also a bluish-grey, but in this case the blue component of the complement differs by 33 from the blue component of rgb, just enough so that we don't need to return the alternate complement.
// 
// 3)
// {153,12,55}
// 
// Returns: { 102,  243,  200 }
// 
// END KAWIGIEDIT TESTING




//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
