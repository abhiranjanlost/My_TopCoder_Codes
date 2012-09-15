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
int64 mod = 1000000007ll;

// a ^ n
int64 __pow(int64 a, int64 n) {
	if(n == 0)
		return 1ll;
	
	int64 tmp = __pow(a, n/2);
	tmp = (tmp*tmp) % mod;
	if(n % 2 == 1)
		tmp = (tmp * a) % mod;
	return tmp;
}

class SuperSum
{
public:
	int calculate(int k, int n)
	{
		int64 num = 1, den = 1;
		
		forab(i, 0, k)
			num = (num * (n + i)) % mod;
			
		forab(i, 1, k+1)
			den = (den * (i)) % mod;
		
		num = num * __pow(den, mod-2);
		num %= mod;
		
		return num;
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, int p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1;
	cout << "]" << endl;
	SuperSum *obj;
	int answer;
	obj = new SuperSum();
	clock_t startTime = clock();
	answer = obj->calculate(p0, p1);
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
	p0 = 1;
	p1 = 3;
	p2 = 6;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 2;
	p1 = 3;
	p2 = 10;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 4;
	p1 = 10;
	p2 = 2002;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 10;
	p1 = 35;
	p2 = 150595840;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
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
// SuperSum is a function defined as:
// 
// 
//  SuperSum(0 , n) = n, for all positive n.
//  SuperSum(k , n) = SuperSum(k-1 , 1) + SuperSum(k-1 , 2) + ... + SuperSum(k-1 , n), for all positive k, n.
// 
// Given k and n, return the value for SuperSum(k , n) modulo 1000000007.
// 
// 
// DEFINITION
// Class:SuperSum
// Method:calculate
// Parameters:int, int
// Returns:int
// Method signature:int calculate(int k, int n)
// 
// 
// CONSTRAINTS
// -k will be between 1 and 50, inclusive.
// -n will be between 1 and 1000000000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// 1
// 3
// 
// Returns: 6
// 
// When k = 1, SuperSum is equal to the sum of the first n = 3 numbers: 1 + 2 + 3 = 6.
// 
// 1)
// 2
// 3
// 
// Returns: 10
// 
// SuperSum(2 , 3) = SuperSum(1 , 1) + SuperSum(1 , 2) + SuperSum(1 , 3) = 1 + 3 + 6 = 10.
// 
// 2)
// 4
// 10
// 
// Returns: 2002
// 
// 
// 
// 3)
// 10
// 35
// 
// Returns: 150595840
// 
// 
// 
// END KAWIGIEDIT TESTING




//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
