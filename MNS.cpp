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
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef string ST;
typedef stringstream SS;

#define pb	push_back
#define mp	make_pair
#define	SZ(a)	int((a).size())

#define	all(c)	(c).begin(), (c).end()
#define tr(i, c)	for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

#define	present(x, c)	((c).find(x) != (c).end())		//map & set//
#define	cpresent(x, c)	(find(all(c),x) != (c).end())	//vector & list//

#define forn(i, n)	for(int i = 0; i < n; i++)
#define forab(i, a, b)	for(int i = a; i <= b; i++)
#define rep(i, a, b)	for(int i = a; i>=b; i--)

class MNS
{
public:
	int combos(vector <int> num)
	{
		int ret  = 0;
		sort(all(num));

		while(next_permutation(all(num)))
		{
//			tr(it, num)	cout << *it << " ";
//			cout << endl;
			bool f = true;

			int s = (num[0] + num[1] + num[2]);
			int t = 0;
			forab(i, 3, 6)	t += num[i];
			if(t != s)	f = false;

			t = 0;
			forab(i, 6, 8)
				t += num[i];
			if(t!= s)	f = false;

			t = 0;


			forn(j, 3) 
			{
				t = 0;
				for(int i = j; i < 9; i+=3)	t += num[i];
				if(t != s)	f = false;
			}

			if(f)	++ret;
		}
		
		return ret;
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
	MNS *obj;
	int answer;
	obj = new MNS();
	clock_t startTime = clock();
	answer = obj->combos(p0);
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
	int t0[] = {1,2,3,3,2,1,2,2,2};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 18;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {4,4,4,4,4,4,4,4,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {1,5,1,2,5,6,2,3,2};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 36;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {1,2,6,6,6,4,2,6,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0;
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
// 9 numbers need to be arranged in a magic number square.  A magic number square is a square of numbers that is arranged such that every row and column has the same sum.  For example:
// 
// 
// 1 2 3
// 3 2 1
// 2 2 2
// 
// 
// Create a class MNS containing a method combos which takes as an argument a vector <int> numbers and returns the number of distinct ways those numbers can be arranged in a magic number square.  Two magic number squares are distinct if they differ in value at one or more positions.  For example, there is only one magic number square that can be made of 9 instances of the same number.
// 
// 
// DEFINITION
// Class:MNS
// Method:combos
// Parameters:vector <int>
// Returns:int
// Method signature:int combos(vector <int> numbers)
// 
// 
// NOTES
// -Unlike some versions of the magic number square, the numbers do not have to be unique.
// 
// 
// CONSTRAINTS
// -numbers will contain exactly 9 elements.
// -each element of numbers will be between 0 and 9, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {1,2,3,3,2,1,2,2,2}
// 
// Returns: 18
// 
// 1)
// {4,4,4,4,4,4,4,4,4}
// 
// Returns: 1
// 
// 2)
// {1,5,1,2,5,6,2,3,2}
// 
// Returns: 36
// 
// 3)
// {1,2,6,6,6,4,2,6,4}
// 
// Returns: 0
// 
// END KAWIGIEDIT TESTING


//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
