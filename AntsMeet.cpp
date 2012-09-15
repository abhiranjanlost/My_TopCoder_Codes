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
#define	tr(i, c)	for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

#define	present(x, c)	((c).find(x) != (c).end())		//map & set//
#define	cpresent(x, c)	(find(all(c),x) != (c).end())	//vector & list//

#define forn(i, n)	for(int i = 0, loop_ends_here = (int)n; i < loop_ends_here; i++)
#define forab(i, a, b)	for(int i = a, loop_ends_here = (int) b; i <= loop_ends_here; i++)
#define rep(i, a, b)	for(int i = a, loop_ends_here = (int)b; i>=loop_ends_here; i--)

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)


class AntsMeet
{
public:

int countAnts(vector <int> x, vector <int> y, string d)
{
	forn(i, x.size())
		x[i] *=2,	y[i] *= 2;
	vector <bool> in(x.size(), true);
	
	forn(_xyz, 10000) {
		forn(i, x.size())	if(in[i]) {
			forab(j, i+1, x.size()-1)		if(in[j] && i != j && x[i] == x[j] && y[i] == y[j])
				in[i] = in[j] = false;
		}
		
		forn(i, x.size()) {
			if(d[i] == 'N')
				y[i]++;
			else if(d[i] == 'S')
				y[i]--;
			else if(d[i] == 'W')
				x[i]--;
			else if(d[i] == 'E')
				x[i]++;
			else
				assert(0);
		}
	}
	
	return count(all(in), true);






/*


	map <int, vector <ii> >m;
	vector <bool> enable(x.size(), true);
	
	m.clear();

	forn(i, x.size()) forn(j, x.size())	if(i != j) {

		if( (d[i] == 'N' && d[j] == 'S' && x[i] == x[j]) || (d[i] == 'W' && d[j] == 'E' && y[i] == y[j]) ) {
			int dist = max(abs(x[i] - x[j]), abs(y[i] - y[j]));

//			Pf("#1: i = %d, j = %d\n", i, j);
			
			if((x[i] != x[j] && x[i] > x[j] )|| (y[i] != y[j] && y[i] < y[j]))
				m[dist].pb(mp(i, j));
		}
		else if( (y[j] >= y[i] && d[j] == 'S' && (d[i] == 'W' || d[i] == 'E')) ) {
			int d1 = y[j] - y[i];
			int d2 = abs(x[i] - x[j]);

//			Pf("#2: i = %d, j = %d\n", i, j);

			if(d1 == d2 && ((x[i] >= x[j] && d[i] == 'W') || (x[i] <= x[j] && d[i] == 'E') ))
				m[2*d1].pb(mp(i, j));
		}

		else if( (y[j] <= y[i] && d[j] == 'N' && (d[i] == 'W' || d[i] == 'E')) ) {
			int d1 = abs(y[j] - y[i]);
			int d2 = abs(x[i] - x[j]);

//			Pf("#3: i = %d, j = %d\n", i, j);

			if(d1 == d2 && ((x[i] >= x[j] && d[i] == 'W') || (x[i] <= x[j] && d[i] == 'E') ))
				m[2*d1].pb(mp(i, j));
		}

	}

//	cout << endl;
	tr(it, m) {
 /*
		Pf("%d -> ", it->first);
		tr(jt, it->second)
//			Pf("(%d, %d)=(%d, %d, %c),(%d, %d, %c) \t ", jt->first, jt->second, x[jt->first], y[jt->first], d[jt->first], x[jt->second], y[jt->second], d[jt->second]);
			Pf("(%d, %d)\t ", jt->first, jt->second);
		cout << endl;
* /
		set <int> s;

		tr(jt, it->second)
			if(enable[jt->first] && enable[jt->second])
				s.insert(jt->first),	s.insert(jt->second);

		tr(jt, s) {
//			cout << *jt << " ";
			enable[*jt] = false;
		}
//		cout << endl;
 /*	
	forn(i, x.size())
			Pf("(%d, %c), ", i, enable[i] ? 'Y': 'N');
		cout << endl;
* /
//		cout << endl;
	}
//	cout << endl;

	return count(all(enable), true);
/*
	int ret =0;
	forn(i, x.size()) {

//		if(!enable[i])
//			cout << i << " ";
//		Pf("(%d, %c), ", i, enable[i] ? 'Y': 'N');

		if(enable[i])
			ret++;
	}
//	cout << endl;
	return ret;
*/
}

};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, vector <int> p1, string p2, bool hasAnswer, int p3) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p1[i];
	}
	cout << "}" << "," << "\"" << p2 << "\"";
	cout << "]" << endl;
	AntsMeet *obj;
	int answer;
	obj = new AntsMeet();
	clock_t startTime = clock();
	answer = obj->countAnts(p0, p1, p2);
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
	
	vector <int> p0;
	vector <int> p1;
	string p2;
	int p3;
	
	{
	// ----- test 0 -----
	int t0[] = {0,10,20,30};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {0,10,20,30};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "NWNE";
	p3 = 2;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {-10,0,0,10};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {0,-10,10,0};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "NEWS";
	p3 = 0;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {-1,-1,-1,0,0,0,1,1,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {-1,0,1,-1,0,1,-1,0,1};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "ESEWNNEWW";
	p3 = 4;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {4,7,6,2,6,5,7,7,8,4,7,8,8,8,5,4,8,9,1,5,9,3,4,0,0,1,0,7,2,6,9,6,3,0,5,5,1,2,0,4,9,7,7,1,8,1,9,2,7,3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {2,3,0,6,8,4,9,0,5,0,2,4,3,8,1,5,0,7,3,7,0,9,8,1,9,4,7,8,1,1,6,6,6,2,8,5,1,9,0,1,1,1,7,0,2,5,4,7,5,3};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "SSNWSWSENSWSESWEWSWSENWNNNESWSWSWWSSWEEWWNWWWNWENN";
	p3 = 25;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {478,-664,759,434,-405,513,565,-396,311,-174,56,993,251,-341,993,-112,242,129,383,513,-78,-341,-148,129,423,493,434,-405,478,-148,929,251,56,242,929,-78,423,-664,802,251,759,383,-112,-591,-591,-248,660,660,735,493};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {-186,98,948,795,289,-678,948,-170,-195,290,-354,-424,289,-157,-166,150,706,-678,684,-294,-234,36,36,-294,-216,-234,427,945,265,-157,265,715,275,715,-186,337,798,-170,427,706,754,961,286,-216,798,286,961,684,-424,337};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "WNSNNSSWWWEENWESNSWSWSEWWEWEWWWNWESNSSNNSNNWWWNESE";
	p3 = 44;
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
// Magical Girl Lein is observing ants. 
// There are N ants. At first, they have integer coordinates in the Cartesian plane. More precisely, ant i starts at the point (x[i], y[i]). 
// All ants move at the same speed. Each ant moves in one of the four basic directions. (I.e., either parallel to the x axis or parallel to the y axis.) 
// When 2 or more ants meet at the same time, these ants disappear. 
// You are given two vector <int>s x and y, containing N elements each, 
// and a string direction, containing N characters. 
// Character i of direction encodes the direction in which ant i is going: 
// 
//  'N' means north (y coordinate increases), 
//  'E' means east (x coordinate increases), 
//  'S' means south (y coordinate decreases), 
//  and 'W' means west (x coordinate decreases). 
// 
// Return the number of ants that still exist after the last meeting occurs.
// 
// DEFINITION
// Class:AntsMeet
// Method:countAnts
// Parameters:vector <int>, vector <int>, string
// Returns:int
// Method signature:int countAnts(vector <int> x, vector <int> y, string direction)
// 
// 
// CONSTRAINTS
// -x will contain between 1 and 50 elements, inclusive.
// -y will contain the same number of elements as x.
// -The number of characters in direction will be the same as the number of elements in x.
// -Each element of x and y will be between -1000 and 1000, inclusive.
// -No pair of points in the input will be equal.
// -Each character of direction will be one of 'N', 'E', 'W' and 'S'.
// 
// 
// EXAMPLES
// 
// 0)
// {0,10,20,30}
// {0,10,20,30}
// "NWNE"
// 
// Returns: 2
// 
// The ants that start at (0,0) and (10,10) will meet at (0, 10) at time 10.
// The remaining two ants will never meet.
// 
// 1)
// {-10,0,0,10}
// {0,-10,10,0}
// "NEWS"
// 
// Returns: 0
// 
// More than two ants can meet at the same time.
// 
// 2)
// {-1,-1,-1,0,0,0,1,1,1}
// {-1,0,1,-1,0,1,-1,0,1}
// "ESEWNNEWW"
// 
// Returns: 4
// 
// The ants that start at (-1,-1) and (0,-1) will meet at (-0.5,-1). 
// The ants that start at (-1,1), (0,0) and (1,1) will meet at (0,1). 
// Thus, 4 ants will remain after all meetings. 
// Note that ants that start at (-1,0) and (0,-1) won't meet at (-1,1) because one of them will disappear before reaching the meeting point.
// 
// 3)
// {4,7,6,2,6,5,7,7,8,4,7,8,8,8,5,4,8,9,1,5,9,3,4,0,0,1,0,7,2,6,9,6,3,0,5,5,1,2,0,4,9,7,7,1,8,1,9,2,7,3}
// {2,3,0,6,8,4,9,0,5,0,2,4,3,8,1,5,0,7,3,7,0,9,8,1,9,4,7,8,1,1,6,6,6,2,8,5,1,9,0,1,1,1,7,0,2,5,4,7,5,3}
// "SSNWSWSENSWSESWEWSWSENWNNNESWSWSWWSSWEEWWNWWWNWENN" 
// 
// Returns: 25
// 
// 
// 
// 4)
// {478,-664,759,434,-405,513,565,-396,311,-174,56,993,251,-341,993,-112,242,129,383,513,-78,-341,-148,129,423
// ,493,434,-405,478,-148,929,251,56,242,929,-78,423,-664,802,251,759,383,-112,-591,-591,-248,660,660,735,493}
// {-186,98,948,795,289,-678,948,-170,-195,290,-354,-424,289,-157,-166,150,706,-678,684,-294,-234,36,36,-294,-216
// ,-234,427,945,265,-157,265,715,275,715,-186,337,798,-170,427,706,754,961,286,-216,798,286,961,684,-424,337}
// "WNSNNSSWWWEENWESNSWSWSEWWEWEWWWNWESNSSNNSNNWWWNESE"
// 
// Returns: 44
// 
// 
// 
// END KAWIGIEDIT TESTING




//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
