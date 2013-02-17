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

class PalindromicNumbers
{
public:
	int countPalNums(int lower, int upper);
};

int64 lower, upper;
int ret = 0;


int64 append(int64 a, int64 b) {
	while(b) {
		a = a*10 + b%10;
		b /= 10;
	}
	return a;
}

void generatePalindrome(int64 a) {
	int64 tmp = append(a, a);
	if(tmp >= lower && tmp <= upper)
		ret++;

	forn(i, 10) {
		tmp = append(a*10 + i, a);
		if(tmp >= lower && tmp <= upper)
			ret++;
	}
}

int PalindromicNumbers::countPalNums (int _lower, int _upper) 
{
	lower = _lower, upper = _upper;
	ret = 0;
	forab(i, 1, 9)
		if(i >= lower && i <= upper)
			ret++;

	forab(i, 1, 100000)
		generatePalindrome(i);

	return ret;

}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, int p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1;
	cout << "]" << endl;
	PalindromicNumbers *obj;
	int answer;
	obj = new PalindromicNumbers();
	clock_t startTime = clock();
	answer = obj->countPalNums(p0, p1);
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
	
	int p0;
	int p1;
	int p2;
	
	{
	// ----- test 0 -----
	p0 = 8;
	p1 = 25;
	p2 = 4;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 111;
	p1 = 222;
	p2 = 12;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 88966989;
	p1 = 88977987;
	p2 = 0;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 999999990;
	p1 = 1000000000;
	p2 = 1;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 11;
	p1 = 11;
	p2 = 1;
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = 13;
	p1 = 13;
	p2 = 0;
	all_right = KawigiEdit_RunTest(5, p0, p1, true, p2) && all_right;
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
// A palindromic number is a number that remains the same when its digits are reversed. For example, 4, 33, 101 and 6666 are palindromic numbers. 10, 51 and 156552 are not (when reversing digits, the number is considered to have no leading zeroes).
// 
// You will be given two ints lower and upper describing a range. Return the number of palindromic numbers between lower and upper, inclusive.
// 
// 
// DEFINITION
// Class:PalindromicNumbers
// Method:countPalNums
// Parameters:int, int
// Returns:int
// Method signature:int countPalNums(int lower, int upper)
// 
// 
// CONSTRAINTS
// -lower will be between 1 and 1000000000 (109), inclusive.
// -upper will be between lower and 1000000000 (109), inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 8
// 25
// 
// Returns: 4
// 
// 8, 9, 11 and 22 are palindromic numbers.
// 
// 1)
// 111
// 222
// 
// Returns: 12
// 
// 111, 121, 131, 141, 151, 161, 171, 181, 191, 202, 212 and 222 are palindromic numbers.
// 
// 2)
// 88966989
// 88977987
// 
// Returns: 0
// 
// 
// 
// 3)
// 999999990
// 1000000000
// 
// Returns: 1
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
