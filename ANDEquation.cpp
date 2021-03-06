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

class ANDEquation
{
public:
	int restoreY(vector <int> A);
};


int ANDEquation::restoreY (vector <int> A) 
{
	forn(i, A.size()) {
		int ans = i == 0 ? A[1] : A[0];

		forn(j, A.size())
			if(i != j)
				ans &= A[j];
		if(ans == A[i])
			return ans;
	}
	return -1;
}

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
	ANDEquation *obj;
	int answer;
	obj = new ANDEquation();
	clock_t startTime = clock();
	answer = obj->restoreY(p0);
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
	int t0[] = {1,3,5};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {31,7};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = -1;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {31,7,7};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 7;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {1,0,0,1,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,1,0,1,1,0,0,0,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {191411,256951,191411,191411,191411,256951,195507,191411,192435,191411,191411,195511,191419,191411,256947,191415,191475,195579,191415,191411,191483,191411,191419,191475,256947,191411,191411,191411,191419,256947,191411,191411,191411};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 191411;
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	int t0[] = {1362,1066,1659,2010,1912,1720,1851,1593,1799,1805,1139,1493,1141,1163,1211};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = -1;
	all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 6 -----
	int t0[] = {2,3,7,19};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = -1;
	all_right = KawigiEdit_RunTest(6, p0, true, p1) && all_right;
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
// An AND-equation is an equation that looks like this:
// 
// X[0] AND X[1] AND ... AND X[N-1] = Y
// 
// Here X[i] and Y are non-negative integers and the bitwise AND operation is defined in the Notes.
// 
// In C++, C#, and Java the operator AND is denoted "&". So for example (P & Q & R) is the bitwise AND of numbers P, Q, and R.
// In VB the same operator is denoted "And".
// 
// You are given a vector <int> A that contains exactly N+1 elements. Your task is to construct an AND-equation using each element of A exactly once. (That is, N of them will be on the left hand side of the AND-equation and the remaining one will be on the right hand side.) If this is possible, return the value of Y in this AND-equation. If no AND-equation can be constructed, return -1. (It can be shown that for each A there is at most one possible value Y, so the return value is always defined correctly.)
// 
// DEFINITION
// Class:ANDEquation
// Method:restoreY
// Parameters:vector <int>
// Returns:int
// Method signature:int restoreY(vector <int> A)
// 
// 
// NOTES
// -AND is a binary operation, performed on two numbers in binary notation. First, the shorter number is prepended with leading zeroes until both numbers have the same number of digits (in binary). Then, the result is calculated as follows: for each position where both numbers have 1 in their binary representations, the result also has 1. It has 0 in all other positions.
// -For example 42 AND 7 is performed as follows. First, the numbers are converted to binary: 42 is 101010 and 7 is 111. Then the shorter number is prepended with leading zeros until both numbers have the same number of digits. This means 7 becomes 000111. Then 101010 AND 000111 = 000010 (the result has ones only in the positions where both numbers have ones). Then the result can be converted back to decimal notation. In this case 000010 = 2, so 42 AND 7 = 2.
// -One of the ways to calculate the AND of more than two numbers X[0], X[1], ..., X[N-1] is "X[0] AND (X[1] AND (... AND X[N-1]))..))". Since the function is commutative and associative, you can also express it as "X[0] AND X[1] AND ... AND X[N-1]" and group the operands in any way you like.
// 
// 
// CONSTRAINTS
// -A will contain between 2 and 50 elements, inclusive.
// -Each element of A will be between 0 and 1048575, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {1, 3, 5}
// 
// 
// Returns: 1
// 
// 5 AND 3 = 1
// 
// 
// 1)
// {31, 7}
// 
// 
// Returns: -1
// 
// Clearly, no AND-equation is possible in this case.
// 
// 
// 2)
// {31, 7, 7}
// 
// 
// Returns: 7
// 
// 7 AND 31 = 7
// 
// Note that duplicate elements are possible in the input. If an element appears several times in A, it must be used the same number of times in the equation.
// 
// 3)
// {1,0,0,1,0,1,0,1,0,0,0,0,0,0,0,1,0,0,
//  0,0,0,0,0,0,1,0,1,0,1,1,0,0,0,1}
// 
// Returns: 0
// 
// Zeros are possible in the input.
// 
// 4)
// {191411,256951,191411,191411,191411,256951,195507,191411,192435,191411,
//  191411,195511,191419,191411,256947,191415,191475,195579,191415,191411,
//  191483,191411,191419,191475,256947,191411,191411,191411,191419,256947,
//  191411,191411,191411}
// 
// Returns: 191411
// 
// 
// 
// 5)
// {1362,1066,1659,2010,1912,1720,1851,1593,1799,1805,1139,1493,1141,1163,1211}
// 
// Returns: -1
// 
// 6)
// {2, 3, 7, 19}
// 
// Returns: -1
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
