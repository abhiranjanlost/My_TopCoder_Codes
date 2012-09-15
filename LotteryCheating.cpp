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

class LotteryCheating
{
public:
	int minimalChange(string ID);
};


int LotteryCheating::minimalChange (string ID) 
{
	vs v;
	int sz = ID.size();

	for(int64 n = 0; n*n <= (int64)1e11+11; n++) {
		SS ss;
		ss << n*n;
		ST st = ss.str();

		if(st.size() > sz)
			continue;
		reverse(all(st));
		while(st.size() < sz)
			st += '0';
		reverse(all(st));
		v.pb(st);
	}
	DEBUG(v.size());

	int ret = 10;

	tr(it, v) {
		int tmp = 0;
		forn(i, sz)
			if((*it)[i] != ID[i])
				tmp++;
		ret = min(ret, tmp);
	}
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"";
	cout << "]" << endl;
	LotteryCheating *obj;
	int answer;
	obj = new LotteryCheating();
	clock_t startTime = clock();
	answer = obj->minimalChange(p0);
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
	
	string p0;
	int p1;
	
	{
	// ----- test 0 -----
	p0 = "1";
	p1 = 0;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "1234";
	p1 = 2;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "9000000000";
	p1 = 1;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = "4294967296";
	p1 = 0;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = "7654321";
	p1 = 3;
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
// Bob likes to play the lottery, but it's so hard to win without cheating.  Each lottery ticket has an identifier which contains exactly n decimal digits.  If an identifier contains only '0's, it is considered a winning ticket.  Otherwise, the identifier is interpreted as a positive integer X written in decimal notation (possibly with leading zeros).  If X has an odd number of positive integer divisors, it is a winning ticket, otherwise, it is not.  A positive integer is a divisor of X if it divides X evenly.
// 
// 
// Unfortunately, Bob only has enough money to buy one ticket, and he cannot see the identifier before buying a ticket.  Therefore, he decides to cheat by buying a ticket and modifying its identifier to make it a winning ticket.  In a single change operation, he can choose one digit, erase it, and print some other digit in the same position.  No other types of modifications are allowed.  He can perform any number of these change operations, but he wants to perform as few as possible to minimize the risk of getting caught.
// 
// 
// You are given a string ID, the initial identifier on Bob's ticket.  Return the minimal number of change operations necessary to transform the identifier into a winning one.  If the initial identifier is already a winner, return 0.
// 
// DEFINITION
// Class:LotteryCheating
// Method:minimalChange
// Parameters:string
// Returns:int
// Method signature:int minimalChange(string ID)
// 
// 
// CONSTRAINTS
// -ID will contain between 1 and 10 characters, inclusive.
// -Each character in ID will be between '0' and '9', inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// "1"
// 
// Returns: 0
// 
// 1 is the only divisor of this identifier.  Since there are an odd number of divisors, it is already a winning ticket, and no changes are necessary.
// 
// 1)
// "1234"
// 
// Returns: 2
// 
// One possible solution is to transform "1234" into "1024". As 1024 is 2^10, it has 11 divisors: 2^0, 2^1, ..., 2^10.
// 
// 2)
// "9000000000"
// 
// Returns: 1
// 
// Bob can change the '9' into a '0'. The resulting identifier "0000000000" contains only '0's, so it is a winning ticket.
// 
// 3)
// "4294967296"
// 
// Returns: 0
// 
// The initial identifier represents the integer 2^32, so it has 33 divisors.
// 
// 4)
// "7654321"
// 
// Returns: 3
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
