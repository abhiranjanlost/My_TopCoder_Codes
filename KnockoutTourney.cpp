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

class KnockoutTourney
{
public:
	int meetRival(int N, int you, int rival)
	{
		int ret;
		
		return ret;
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, int p1, int p2, bool hasAnswer, int p3) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1 << "," << p2;
	cout << "]" << endl;
	KnockoutTourney *obj;
	int answer;
	obj = new KnockoutTourney();
	clock_t startTime = clock();
	answer = obj->meetRival(p0, p1, p2);
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
		res = answer == p3;
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
	int p3;
	
	{
	// ----- test 0 -----
	p0 = 16;
	p1 = 1;
	p2 = 2;
	p3 = 1;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 16;
	p1 = 8;
	p2 = 9;
	p3 = 4;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 1000;
	p1 = 20;
	p2 = 31;
	p3 = 4;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 65536;
	p1 = 1000;
	p2 = 35000;
	p3 = 16;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 60000;
	p1 = 101;
	p2 = 891;
	p3 = 10;
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
// You have just entered a knockout tournament with N competitors. The tournament is structured as follows: at the start, the competitors are written down in a list. Adjacent competitors in the list are then paired off, starting from the first competitor on the list, and each pair plays a match (competitor 1 plays against 2, 3 plays against 4, etc.). The losers of each match are eliminated and their names are crossed off the list, while the winners progress to the next round. If there are an odd number of competitors in a round, then the last competitor in the list advances to the next round automatically, without having to play a match. This process then repeats with the new list of competitors, until only a single competitor remains, who is declared the winner. Note that the ordering of the competitors is preserved between rounds.
// Your arch-rival has also entered the tournament and you want to know when you might end up playing against him. Your position in the list for the first round is you and your rival's position is rival (both indexed from 1). Assuming that both you and your rival win all the matches before you play each other, return the number of the round in which you will meet (counting the rounds from 1).
// 
// DEFINITION
// Class:KnockoutTourney
// Method:meetRival
// Parameters:int, int, int
// Returns:int
// Method signature:int meetRival(int N, int you, int rival)
// 
// 
// CONSTRAINTS
// -N will be between 2 and 100000, inclusive.
// -you and rival will each be between 1 and N, inclusive.
// -you and rival will be distinct.
// 
// 
// EXAMPLES
// 
// 0)
// 16
// 1
// 2
// 
// Returns: 1
// 
// This is a 4 round tournament, with 16 players, so every player plays a match in every round. You are paired with your rival in the first round.
// 
// 1)
// 16
// 8
// 9
// 
// Returns: 4
// 
// Despite being adjacent in the list, you are not paired with your rival until the final round.
// 
// 2)
// 1000
// 20
// 31
// 
// Returns: 4
// 
// 
// 
// 3)
// 65536
// 1000
// 35000
// 
// Returns: 16
// 
// 
// 
// 4)
// 60000
// 101
// 891
// 
// Returns: 10
// 
// 
// 
// END KAWIGIEDIT TESTING




//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
