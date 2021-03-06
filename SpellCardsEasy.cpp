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
#define	cl(a, b)	memset(a, b, sizeof(a))
#define mp		make_pair
#define pb		push_back

#define	present(x, c)	((c).find(x) != (c).end())	//map & set//
#define	cpresent(x, c)	(find( (c).begin(), (c).end(), x) != (c).end())	//vector & list//

#define read(n)		scanf("%d", &n)
#define write(n)	printf("%d ", n)
#define writeln(n)	printf("%d\n", n)

//#define debug(x)
#define debug(x)	cout << #x << " = " << x << "\n"

class SpellCardsEasy
{
public:
	int maxDamage(vector <int> level, vector <int> damage);
};

int SpellCardsEasy::maxDamage (vector <int> level, vector <int> damage) 
{
	int ret;
	
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, vector <int> p1, bool hasAnswer, int p2) {
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
	cout << "}";
	cout << "]" << endl;
	SpellCardsEasy *obj;
	int answer;
	obj = new SpellCardsEasy();
	clock_t startTime = clock();
	answer = obj->maxDamage(p0, p1);
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
	
	vector <int> p0;
	vector <int> p1;
	int p2;
	
	{
	// ----- test 0 -----
	int t0[] = {1,1,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {10,20,30};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 60;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {3,3,3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {10,20,30};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 10;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {4,4,4};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {10,20,30};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 0;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {50,1,50,1,50};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {10,20,30,40,50};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 60;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {2,1,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {40,40,10};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 80;
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	int t0[] = {1,2,1,1,3,2,1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {10,40,10,10,90,40,10};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 150;
	all_right = KawigiEdit_RunTest(5, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 6 -----
	int t0[] = {1,2,2,3,1,4,2};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	int t1[] = {113,253,523,941,250,534,454};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = 1577;
	all_right = KawigiEdit_RunTest(6, p0, p1, true, p2) && all_right;
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
// You are playing a card game.
// In the card game, each card holds a magic spell with two properties: its level and its damage.
// During the game, you will play some of the cards (possibly none or all of them) to attack your enemy.
// 
// 
// 
// Initially, there are n cards.
// The cards are placed in a row and they are labeled from 0 to n-1, in order.
// You are given two vector <int>s: level and damage.
// For each i, the level of card i is level[i], and its damage is damage[i].
// 
// 
// 
// In each turn of the game, you can pick a card to play.
// You can only pick card i if there are at least another (level[i]-1) cards to the right of it.
// Picking a card with level L and damage D has the following effects:
// 
// Your opponent receives D damage.
// Starting with this card, L cards are discarded. 
// That is, if the chosen card was card i, then the discarded cards are cards i to (i+L-1), inclusive.
// 
// 
// 
// 
// Return the maximal total damage you can deal to your opponent.
// 
// DEFINITION
// Class:SpellCardsEasy
// Method:maxDamage
// Parameters:vector <int>, vector <int>
// Returns:int
// Method signature:int maxDamage(vector <int> level, vector <int> damage)
// 
// 
// CONSTRAINTS
// -level will contain between 1 and 50 elements, inclusive.
// -level and damage will contain the same number of elements.
// -Each element in level will be between 1 and 50, inclusive.
// -Each element in damage will be between 1 and 10,000, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {1,1,1}
// {10,20,30}
// 
// Returns: 60
// 
// You can use all three spell cards (in any order), so the total damage is: 10 + 20 + 30 = 60.
// 
// 1)
// {3,3,3}
// {10,20,30}
// 
// Returns: 10
// 
// You are only allowed to use card 0. Using it deals 10 damage and discards all three cards.
// 
// 2)
// {4,4,4}
// {10,20,30}
// 
// Returns: 0
// 
// This time you can't use any spell cards.
// 
// 3)
// {50,1,50,1,50}
// {10,20,30,40,50}
// 
// Returns: 60
// 
// You can use the spell cards with damage 20 and 40.
// 
// 4)
// {2,1,1}
// {40,40,10}
// 
// Returns: 80
// 
// 
// 
// 5)
// {1,2,1,1,3,2,1}
// {10,40,10,10,90,40,10}
// 
// Returns: 150
// 
// 
// 
// 6)
// {1,2,2,3,1,4,2}
// {113,253,523,941,250,534,454}
// 
// Returns: 1577
// 
// 
// 
// END KAWIGIEDIT TESTING


//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
