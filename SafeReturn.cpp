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

int D[55][55];
int sz;
const int inf = 1e6;

class SafeReturn
{
public:
	int minRisk(int N, vector <string> G)
	{
		forn(i, 55)	forn(j, 55)
			D[i][j] = inf;

		sz = G.size();
		forn(i, G.size()) {
			forn(j, G[i].size())
				if(G[i][j] != '-') {
					D[i][j] = (int)(G[i][j] - '0');
				}
		}
/*
		forn(i, sz) {
			forn(j, sz)
				if(D[i][j] == inf)
					Pf(" - ");
				else
					Pf("%2d ", D[i][j]);
			cout << endl;
		}
		cout << endl;
*/
		forn(k, sz) {
			forn(i, sz) {
				forn(j, sz) {
					if(D[i][k] < inf && D[k][j] < inf && D[i][k] + D[k][j] < D[i][j])
						D[i][j] = min(D[i][j], D[i][k] +  D[k][j] );
				}
			}
		}
/*
		forn(i, sz) {
			forn(j, sz)
				if(D[i][j] == inf)
					Pf(" - ");
				else
					Pf("%2d ", D[i][j]);
			cout << endl;
		}
		cout << endl;
*/
		set <int> s;

		forab(i, 1, N) {
			forab(j, 1, N) {
				if(i != j && D[0][i] < inf && D[0][j] < inf && D[j][i] < inf && D[0][i] == D[0][j] + D[j][i])
					s.insert(j);
			}
		}
/*
		tr(it, s)
			cout << *it << endl;
*/
		return N - s.size() ;
/*
		int ret;
		
		return ret;
*/	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, int p0, vector <string> p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << p0 << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p1[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	SafeReturn *obj;
	int answer;
	obj = new SafeReturn();
	clock_t startTime = clock();
	answer = obj->minRisk(p0, p1);
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
	vector <string> p1;
	int p2;
	
	{
	// ----- test 0 -----
	p0 = 3;
	string t1[] = {"-234","2---","3---","4---"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 3;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 2;
	string t1[] = {"-12","1-1","21-"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 1;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 3;
	string t1[] = {"-----7","--1---","-1-5--","--5-1-","---1-3","7---3-"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 1;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 2;
	string t1[] = {"-11","1-1","11-"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 2;
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
// You used to worry about your popularity with the troops, but not anymore. Your priority is their safety. You are the commander of N soldiers. Each soldier has an assignment to visit a different fort. They all leave fort 0 at the same time and travel through the streets of the city at the same time until each reaches his assigned destination. This is very risky and you would want each soldier to to reach his fort as soon as possible. It is also very dangerous to go alone, thus as a secondary objective, you must minimize the number of soldiers that are exposed to risk by going over at least one street alone.
// 
// There are T locations, where T >= N+1. The locations are numbered 0 to T-1. Location 0 is the fort where all soldiers start at time 0. For each i between 1 and N, inclusive, location i is the destination fort for one of the soldiers.
// The remaining locations have no specific meaning. Some pairs of locations are connected by bidirectional streets. The streets are given as a vector <string> streets. If there is no street connecting locations i and j, streets[i][j] will be '-' (quotes for clarity). Otherwise, streets[i][j] will be a digit between '1' and '9', inclusive. The digit represents the number of minutes it takes any soldier to walk along the street in either direction.
// 
// All soldiers can move at the same time, and multiple soldiers can move along the same street. If a group of soldiers reaches a fort that is the destination for one of them, that soldier enters the fort in zero time and the remaining ones keep on walking to other locations.
// 
// A soldier is safe if at each moment of his walk through the city he is accompanied by at least one other soldier.
// A soldier is endangered if he is not safe, i.e., if he walks alone for some time. Remember that the primary requirement is that each soldier must use one of the (possibly many) fastest paths to his destination fort. Given this requirement, you want to choose the paths in such a way that the number of soldiers in danger is minimized. Return the smallest possible number of endangered soldiers.
// 
// DEFINITION
// Class:SafeReturn
// Method:minRisk
// Parameters:int, vector <string>
// Returns:int
// Method signature:int minRisk(int N, vector <string> streets)
// 
// 
// CONSTRAINTS
// -N will be between 1 and 49, inclusive.
// -streets will contain T elements, where T is between N+1 and 50, inclusive.
// -Each element of streets will contain T characters.
// -Each character in each element of streets will either be '-', or one of '1'-'9'.
// -For each i, streets[i][i] will be '-'.
// -For each pair (i,j), streets[i][j] will be equal to streets[j][i].
// -For each  1 <= i <= N, there will always be at least one way of reaching location i from location 0 by using one or more streets.
// 
// 
// EXAMPLES
// 
// 0)
// 3
// {"-234",
//  "2---",
//  "3---",
//  "4---"}
// 
// Returns: 3
// 
// There are 3 soldiers assigned to 3 forts and 3 direct connections going from the starting fort to each of them. It is not possible for a soldier to accompany any other without losing the opportunity to reach his own fort in the minimum time possible.
// 
// 1)
// 2
// {"-12",
//  "1-1",
//  "21-"}
// 
// Returns: 1
// 
// The minimum time after which soldier #1 can reach fort is 1 minute and the minimum time for soldier #2 is 2 minutes. It is possible for soldier #2 to first drop soldier #1 off in his assigned fort before reaching his own one and both soldiers still reach their assigned fort in the minimum time.
// 
// 
// 2)
// 3
// {"-----7",
//  "--1---",
//  "-1-5--",
//  "--5-1-",
//  "---1-3",
//  "7---3-"}
// 
// Returns: 1
// 
// 
// 
// 3)
// 2
// {"-11",
//  "1-1",
//  "11-"}
// 
// Returns: 2
// 
// 
// 
// END KAWIGIEDIT TESTING




//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
