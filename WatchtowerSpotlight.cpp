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

class WatchtowerSpotlight
{
public:
	int quickestEscape(string start, string end, string watchtower);
};

int startX, startY, endX, endY, towerX, towerY;
int d, s;
int X[] = {1, -1, 0,  0};
int Y[] = {0,  0, 1, -1};

bool valid(int x, int y) {	return x >= 0 && y >= 0 && x < 50 && y < 50; }

bool isWatched(int x, int y, int t) {
	int dx = x - towerX, dy = y - towerY;

	if(dx == 0 && dy == 0)
		return true;

	if(dx*dx + dy*dy > d*d)	return false;

	if(x > 0 && y == 0)
		return t==0 || t == s-1;

	double b = 2.0*PI*(t%s)/s;
	double e = 2*PI*(t%s + 1)/s;
	e = b + (2.0*PI)/ (double) s;
/*
	const double PII = 360.0;
	double b = 2*PII/s*(t%s);
	double e = 2*PII/s*(t%s + 1);
*/
	double ang = atan2(dy + 0.0, dx + 0.0);
	while(ang < b)
		ang += 2*PI;
	return !(ang <= e);

	if(ang < 0.0)
		ang += 4*cos(0.0);
//		ang += 2*PI;
//	ang = 360.0*ang/2/PI;

//	assert(ang > -1e9);
	

	return ang+ep >= b && ang <= e + ep? true : false;
}

struct Node {
	int x, y, t;
	Node(int _t, int _x, int _y) : x(_x), y(_y), t(_t) {}
};

int dp[110][55][55]; // returns time
//     time  X  Y
int WatchtowerSpotlight::quickestEscape (string start, string end, string watchtower) 
{
	sscanf(start.c_str(), "%d %d", &startX, &startY);
	sscanf(end.c_str(), "%d %d", &endX, &endY);
	sscanf(watchtower.c_str(), "%d %d %d %d", &towerX, &towerY, &s,     &d);
	forn(i, 110)	forn(j, 55)	forn(k, 55)	dp[i][j][k] = -1;

	Pf("start = (%d, %d), end = (%d, %d), tower = (%d, %d), s= %d, d = %d\n", startX, startY, endX, endY, towerX, towerY, s, d);

	if(isWatched(startX, startY, 0) == true) {
		cout << "Watched" << endl;
		return -1;
	}

	dp[0][startX][startY] = 0;
	queue <Node> que;
	que.push(Node(0, startX, startY));

	while(!que.empty()) {
		Node nd = que.front();
		que.pop();

		forn(i, 4) {
			int x = nd.x + X[i];
			int y = nd.y + Y[i];
			int t = nd.t+1;

			if(! valid(x, y))
				continue;
			if(dp[t%s][x][y] > -1)
				continue;
			if(isWatched(x, y, t))
				continue;

			dp[t%s][x][y] = t;
			que.push(Node(t, x, y));
		}
	}

	int ret = -1;

	forn(i, s)	if(dp[i][endX][endY] > -1)
		if(ret == -1)
			ret = dp[i][endX][endY];
		else
			ret = min(ret, dp[i][endX][endY]);
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, string p1, string p2, bool hasAnswer, int p3) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"" << "," << "\"" << p1 << "\"" << "," << "\"" << p2 << "\"";
	cout << "]" << endl;
	WatchtowerSpotlight *obj;
	int answer;
	obj = new WatchtowerSpotlight();
	clock_t startTime = clock();
	answer = obj->quickestEscape(p0, p1, p2);
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
	
	string p0;
	string p1;
	string p2;
	int p3;
	
	{
	// ----- test 0 -----
	p0 = "0 0";
	p1 = "10 10";
	p2 = "7 3 10 5";
	p3 = 20;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "0 0";
	p1 = "10 10";
	p2 = "3 7 9 4";
	p3 = 20;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "0 0";
	p1 = "10 10";
	p2 = "9 9 3 5";
	p3 = 32;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = "0 0";
	p1 = "49 49";
	p2 = "24 24 5 40";
	p3 = -1;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = "0 0";
	p1 = "26 26";
	p2 = "24 24 20 30";
	p3 = 52;
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = "10 13";
	p1 = "10 11";
	p2 = "5 10 70 6";
	p3 = 4;
	all_right = KawigiEdit_RunTest(5, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 6 -----
	p0 = "20 20";
	p1 = "21 20";
	p2 = "0 0 4 50";
	p3 = -1;
	all_right = KawigiEdit_RunTest(6, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 7 -----
	p0 = "0 0";
	p1 = "0 1";
	p2 = "0 1 99 10";
	p3 = -1;
	all_right = KawigiEdit_RunTest(7, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 8 -----
	p0 = "25 0";
	p1 = "25 49";
	p2 = "25 25 2 23";
	p3 = 97;
	all_right = KawigiEdit_RunTest(8, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 9 -----
	p0 = "0 0";
	p1 = "10 10";
	p2 = "9 9 3 5";
	p3 = 32;
	all_right = KawigiEdit_RunTest(9, p0, p1, p2, true, p3) && all_right;
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
// You are trying to drive across enemy lines under the cover of darkness in order to get to your main objective.  The enemy has erected a watchtower that is outfitted with a radar device.  The device emits a directional pulse that rotates counterclockwise at a given rate.  You are given its coordinates, the number of seconds it takes for it to make a complete revolution, and the distance the pulse can detect.  The field of view of the radar pulse covers the following angular interval at time t seconds:
// [(t % s) * 360 / s, (t % s) * 360 / s + 360 / s].
// Here % denotes the modulus operator. Note that the field of view forms an angle that might not be integral, the interval is inclusive on both ends, and the interval boundaries are measured counterclockwise from the line emanating from the tower in the positive x direction.  If you are further than d away (using standard cartesian distance) from the watchtower, you will not be seen by the radar, regardless of which direction it is pointing.  However, if you are exactly d away, you are still within range.  The radar pulses once at each integer value of t.
// 
// You are given the starting coordinates (your location at t = 0 seconds), and the coordinates of your target location.  You now wish to get to your target location as quickly as possible.  However, you cannot risk being captured by the enemy, and as such, can never be at a location that is within the field of view of the radar pulse.  Similarly, you can never be at the same location as the watchtower, since you would surely be spotted by the enemies manning the tower.  Also, you can never stop, for you would surely be spotted by ground forces.  Therefore, your path must be planned such that you avoid the radar pulse, taking into account the rate of rotation.
// 
// You may move one unit up, down, left or right each second, but may never remain at your current location or move diagonally.  If you are on coordinate (x, y) at time t seconds, then (x, y) must not be within the field of view of the radar pulse or at the watchtower at t seconds.  This includes second 0, and the second you reach the target.  For example, suppose you are at location (3,7) at time 0 and decide to move to location (3,8).  Then (3,7) at time t=0 and (3,8) at time t=1 should not be visible from the tower.
// 
// You are given strings start and end, each in the form "x y" (quotes added for clarity) indicating the start and end coordinates.  You are also given a string watchtower, which is in the form "x y s d" (quotes added for clarity), providing the coordinates of the watchtower, the number of seconds it takes for the radar to make one revolution, and the distance the radar can detect.
// 
// Because of the layout of the terrain, the starting location, ending location, tower location, and all points travelled must be within the grid from (0,0) to (49,49), inclusive.
// 
// You are to return an int indicating the minimum number of seconds it takes to reach your destination while staying out of radar view.  If it is not possible to reach your destination without getting caught, return -1.
// 
// 
// 
// DEFINITION
// Class:WatchtowerSpotlight
// Method:quickestEscape
// Parameters:string, string, string
// Returns:int
// Method signature:int quickestEscape(string start, string end, string watchtower)
// 
// 
// CONSTRAINTS
// -start will be in the form "x y". (quotes added for clarity)
// -end will be in the form "x y". (quotes added for clarity)
// -start and end will denote distinct points.
// -watchtower will be in the form "x y s d". (quotes added for clarity)
// -All x and y values will be integers between 0 and 49, inclusive.
// -s will be an integer between 2 and 99, inclusive.
// -d will be an integer between 1 and 50, inclusive.
// -The radial edges of the view area will not be within 1e-6 of a degree of a grid point, other than those with the same x or y coordinate as the tower. Grid points are all points with integer coordinates between 0 and 49 inclusive.
// -The integers specified in the inputs will not have leading zeros.
// 
// 
// EXAMPLES
// 
// 0)
// "0 0"
// "10 10"
// "7 3 10 5"
// 
// Returns: 20
// 
// Here, the watchtower has a range of 5 units. So, if we head up 10 units, and then right 10 units, we can stay completely outside the field of view of the watchtower. This takes us 20 seconds.
// 
// 1)
// "0 0"
// "10 10"
// "3 7 9 4"
// 
// Returns: 20
// 
// Here, we could still start out heading upward but avoiding the radar would slow us down.  A quicker route is to first go right 10 units, then up 10 units.
// 
// 2)
// "0 0"
// "10 10"
// "9 9 3 5"
// 
// Returns: 32
// 
// We head towards our target location, but must carefully avoid the radar once we are near it.
// 
// 3)
// "0 0"
// "49 49"
// "24 24 5 40"
// 
// Returns: -1
// 
// The radar is rotating too fast, and can see a long distance.  We can't possibly get to our target without being spotted.
// 
// 4)
// "0 0"
// "26 26"
// "24 24 20 30"
// 
// Returns: 52
// 
// 5)
// "10 13"
// "10 11"
// "5 10 70 6"
// 
// Returns: 4
// 
// Here, we can't go directly down.  We have to move at least one second out of the way for the radar to pass.
// 
// 6)
// "20 20"
// "21 20" 
// "0 0 4 50"
// 
// Returns: -1
// 
// The target is close, but you are caught by the radar before you can move.
// 
// 7)
// "0 0"
// "0 1"
// "0 1 99 10"
// 
// Returns: -1
// 
// Your clever enemy built the watchtower on top of the target!
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
