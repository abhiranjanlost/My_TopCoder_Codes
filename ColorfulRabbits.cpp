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
typedef vector< vector <int> > vvi;
typedef pair<int,int> ii;
typedef string ST;
typedef stringstream SS;

#define Pf	printf
#define	Sf	scanf

#define	ep	1e-9
#define	PI	3.141592653589793
#define	E	2.718281828459045

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

class ColorfulRabbits
{
public:
	int getMinimum(vector <int> replies)
	{
		int ret = 0;

		map<int, int> m;

		tr(it, replies)
			m[*it]++;

//		tr(it, m)
//			cout << it->first << " " << it->second << endl;

		tr(it, m)
		{
//			int x = it->first, n = it->second;
			int x = it->first;
			m[x] = (x+1)*(m[x]/(x+1)) + (m[x]%(x+1) ? (x+1): 0);
		}

		tr(it, m)
		{
			ret +=  it->second;
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
	ColorfulRabbits *obj;
	int answer;
	obj = new ColorfulRabbits();
	clock_t startTime = clock();
	answer = obj->getMinimum(p0);
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
	int t0[] = {1,1,2,2};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 5;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {0};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {2,2,44,2,2,2,444,2,2};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 499;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
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
// Cat Pochi visited a town of rabbits and asked some of the rabbits the following question: 
// "How many rabbits in this town other than yourself have the same color as you?". 
// The rabbits all replied truthfully, and no rabbit was asked the question more than once. 
// You are given the rabbits' replies in the vector <int> replies. 
// Return the minimum possible number of rabbits in this town. 
// 
// 
// DEFINITION
// Class:ColorfulRabbits
// Method:getMinimum
// Parameters:vector <int>
// Returns:int
// Method signature:int getMinimum(vector <int> replies)
// 
// 
// CONSTRAINTS
// -replies will contain between 1 and 50 elements, inclusive. 
// -Each element of replies will be between 0 and 1,000,000, inclusive. 
// 
// 
// EXAMPLES
// 
// 0)
// { 1, 1, 2, 2 }
// 
// 
// Returns: 5
// 
// If there are 2 rabbits with a color and 3 rabbits with another color, 
// Pochi can get this set of replies. 
// 
// 
// 
// 
// 1)
// { 0 }
// 
// 
// Returns: 1
// 
// A poor lonely rabbit. 
// 
// 
// 2)
// { 2, 2, 44, 2, 2, 2, 444, 2, 2 }
// 
// 
// Returns: 499
// 
// 
// 
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
