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

class DoorsGame
{
public:
	int determineOutcome(string doors, int trophy);
};

void removeDuplicate(set <char> &st1, set <char> &st2, set <char> &co) {
	tr(it, st1) {
		set <char> :: iterator jt = st2.find(*it);
		if(jt != st2.end()) {
			co.insert(*it);
			st1.erase(it);
			st2.erase(jt);
			if(it == st1.end())
				break;
		}
	}
}

int DoorsGame::determineOutcome (string doors, int trophy) 
{
	set <char> john, gogo, common;
	forn(i, doors.size())
		if(i < trophy)
			john.insert(doors[i]);
		else
			gogo.insert(doors[i]);

	removeDuplicate(john, gogo, common);
	removeDuplicate(gogo,  john, common);

	// print 
	tr(it, john)
		cout << *it << " ";
	cout << endl;
	tr(it, gogo)
		cout << *it << " ";
	cout << endl;
	tr(it, common)
		cout << *it << " ";
	cout << endl;


	int j = john.size(), g = gogo.size(), c = common.size();

	int step = 0;

	while(! ( (j == 0 || g == 0) && c == 0 ) ) {
		if(j == 0) 
			c--;
		else 
			j--;
		step++;
		if(j == 0 && g == 0 && c == 0)
			return 0;
		if(j == 0 && c == 0)
			return step;

		if(g == 0)
			c--;
		else
			g--;
		step++;
		if(j == 0 && g == 0 && c == 0)
			return 0;
		if(g == 0 && c == 0)
			return -step;

	}

	if(j == 0 && g== 0 && c == 0)
		return 0;
	else if(j == 0 && c == 0)
		return step;
	else if(g == 0 && c == 0)
		return -step;
	assert(0);
/*
	if(common.size() == 0) {
		DEBUG("nocommon");
		if(gogo.size() < john.size())
			return -2*gogo.size();
		else
			return 2*john.size() - 1;
	}

	DEBUG("YES common");
	if(gogo.size() < john.size())		// gogo wins
		if(gogo.size() + common.size() >= john.size())
			return 0;
		else
			return -(gogo.size() + min(gogo.size()+1, john.size()) + common.size());
	else					// john wins	
		if(john.size() + common.size() >= gogo.size() + 1 )
			return 0;
		else
			return john.size() + min(john.size(), gogo.size()) + common.size() +  common.size()-1;
*/
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, int p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"" << "," << p1;
	cout << "]" << endl;
	DoorsGame *obj;
	int answer;
	obj = new DoorsGame();
	clock_t startTime = clock();
	answer = obj->determineOutcome(p0, p1);
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
	
	string p0;
	int p1;
	int p2;
	
	{
	// ----- test 0 -----
	p0 = "ABCD";
	p1 = 2;
	p2 = 3;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "ABCC";
	p1 = 2;
	p2 = -2;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "ABABAB";
	p1 = 3;
	p2 = 0;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = "ABAPDCAA";
	p1 = 5;
	p2 = -4;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = "MOCFDCE";
	p1 = 3;
	p2 = 5;
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = "ABCCDE";
	p1 = 3;
	p2 = 0;
	all_right = KawigiEdit_RunTest(5, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 6 -----
	p0 = "ABCCD";
	p1 = 3;
	p2 = 0;
	all_right = KawigiEdit_RunTest(6, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 7 -----
	p0 = "ABCDEFGHIJKLMNOPABCDEFGHIJKLMNOP";
	p1 = 8;
	p2 = 15;
	all_right = KawigiEdit_RunTest(7, p0, p1, true, p2) && all_right;
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
// John and Gogo are playing Doors Game. This game is played in a building containing a single row of N+1 rooms, numbered 0 through N from left to right. One of the rooms is called the trophy room. There's a door between each pair of adjacent rooms. Each door has a color, and there are 16 possible colors (represented by uppercase letters 'A' through 'P'). All doors are initially closed.
// 
// 
// Initially, John is in room 0 and Gogo is in room N. The two players alternate turns, and John gets the first turn. On each turn, the current player chooses a color which hasn't yet been chosen from among the 16 possible colors. All doors, if any, with the chosen color are then opened. At this point, if one of the players can reach the trophy room by walking through only open doors, that player wins and the game ends. If both players can reach the trophy room, the game ends in a draw. If neither player can reach the trophy room, the game continues.
// 
// 
// Each player will play according to the following strategy:
// Each time a player needs to choose a color, he will make make his choice as follows:
// 
// If it's possible for him to choose a color in such a way that he will be able to win no matter what his opponent does, he will choose such a color. If there are several such colors, he will choose the one among them for which the game will end with the fewest total number of colors chosen, assuming that the opponent aims to maximize the number of colors chosen in the game.
// Otherwise, if it's possible for him to choose a color in such a way that he will be able to end the game in a draw no matter what his opponent does, he will choose any such color.
// Otherwise, he will choose a color for which the game will end with the largest total number of colors chosen, assuming that his opponent aims to win while minimizing the total number of colors chosen.
// 
// 
// You are given the colors of the doors in the string doors. The i-th character in doors is the color of the door connecting rooms i and i+1. You are also given an int trophy, which denotes the number of the trophy room. If the game ends in a draw, return 0. Otherwise, let X be the number of colors chosen in the game. If John wins, return X. If Gogo wins, return -X.
// 
// DEFINITION
// Class:DoorsGame
// Method:determineOutcome
// Parameters:string, int
// Returns:int
// Method signature:int determineOutcome(string doors, int trophy)
// 
// 
// CONSTRAINTS
// -doors will contain between 2 and 50 characters, inclusive.
// -Each character in doors will be an uppercase letter 'A'-'P'.
// -trophy will be between 1 and N-1, inclusive, where N is the number of characters in doors.
// 
// 
// EXAMPLES
// 
// 0)
// "ABCD"
// 2
// 
// Returns: 3
// 
// There are five rooms, with the trophy room in the middle. John will win after he chooses color A and B.
// 
// 1)
// "ABCC"
// 2
// 
// Returns: -2
// 
// In this case, Gogo will win by just choosing color C.
// 
// 2)
// "ABABAB"
// 3
// 
// Returns: 0
// 
// When colors A and B have been chosen, both players will be able to reach the trophy room.
// 
// 3)
// "ABAPDCAA"
// 5
// 
// Returns: -4
// 
// 
// 
// 4)
// "MOCFDCE"
// 3
// 
// Returns: 5
// 
// 
// 
// 5)
// "ABCCDE"
// 3
// 
// Returns: 0
// 
// 
// 
// 6)
// "ABCCD"
// 3
// 
// Returns: 0
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
