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

int _abs(int a)
{
	return a < 0 ? -a : a;
}

class NinePuzzle
{
public:
	int getMinimumCost(string init, string goal)
	{
		int ret = 0;
		map <char, int> m1, m2;
		m1['B'] = m1['R'] = m1 ['G'] = m1['Y'] = 0;
		m2['B'] = m2['R'] = m2 ['G'] = m2['Y'] = 0;
		m1['*'] = m2['*'] = 0;

		forn(i, init.length())
			m1[init[i]]++;
		forn(i, goal.length())
			m2[goal[i]]++;

		ret += _abs(m1['R'] - m2['R'] );
		ret += _abs(m1['G'] - m2['G'] );
		ret += _abs(m1['B'] - m2['B'] );
		ret += _abs(m1['Y'] - m2['Y'] );
		
		return ret/2;
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, string p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"" << "," << "\"" << p1 << "\"";
	cout << "]" << endl;
	NinePuzzle *obj;
	int answer;
	obj = new NinePuzzle();
	clock_t startTime = clock();
	answer = obj->getMinimumCost(p0, p1);
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
	string p1;
	int p2;
	
	{
	// ----- test 0 -----
	p0 = "BG*YRGRRYR";
	p1 = "BGGY*YRRRR";
	p2 = 0;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "GBBB*BGBBG";
	p1 = "RYYY*YRYYR";
	p2 = 9;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "RRBR*BRBBB";
	p1 = "BBRB*RBRRR";
	p2 = 1;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
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
// Fox Ciel invented a game called Nine Puzzle.  The game is played on a board which is in the form of a regular triangle with side length 4.  There are 10 cells on the board, each in the form of a regular triangle with side length 1.  The cells are numbered 0 to 9 as shown in the picture below:
// 
// 
// 
// Nine of the cells on the board contain a triangular piece.  Each piece is painted red, green, blue or yellow.  The remaining tenth cell is empty.  The goal of the game is to arrange the cells to match a specified goal pattern.  To do this, the player can perform the following move any number of times: Choose a piece which is adjacent to an empty cell, and move the piece into that empty cell.  Two cells are considered adjacent if the distance between their centers is exactly 1.  An example of a valid move is shown in the following picture:
// 
// 
// 
// Ciel has painted the triangular pieces to form the starting pattern for the puzzle.  She has also chosen the goal pattern.  However, she has chosen both these patterns arbitrarily, so it's possible that the puzzle might not be solvable (i.e., it may be impossible to achieve the goal pattern from the given starting pattern using a sequence of valid moves).  If this is the case, she would like to repaint the minimum possible number of pieces in the starting pattern to make the puzzle solvable.
// 
// You are given two strings init and goal.  The i-th (0-indexed) character of init describes the content of the i-th cell in the starting pattern.  The '*' character denotes an empty cell.  'R', 'G', 'B' and 'Y' denote pieces which are colored red, green, blue and yellow, respectively.  The goal pattern is described in the string goal in the same format.
// 
// Return the minimum number of pieces which must be repainted in the starting pattern to make the puzzle solvable.  If the puzzle is already solvable without repainting, return 0.
// 
// 
// DEFINITION
// Class:NinePuzzle
// Method:getMinimumCost
// Parameters:string, string
// Returns:int
// Method signature:int getMinimumCost(string init, string goal)
// 
// 
// CONSTRAINTS
// -init and goal will each contain exactly 10 characters.
// -Each character of init and goal will be one of 'R', 'G', 'B', 'Y' or '*'.
// -init and goal will each contain exactly one '*' character.
// 
// 
// EXAMPLES
// 
// 0)
// "BG*YRGRRYR" 
// "BGGY*YRRRR" 
// 
// Returns: 0
// 
// No repainting is required because Ciel can achieve the goal pattern from the starting pattern in 3 moves:
// 
// 
// 
// 1)
// "GBBB*BGBBG" 
// "RYYY*YRYYR"
// 
// Returns: 9
// 
// Ciel incautiously chose the starting pattern and the goal pattern, so unfortunately, she must repaint all the pieces.
// 
// 2)
// "RRBR*BRBBB" 
// "BBRB*RBRRR" 
// 
// Returns: 1
// 
// 
// 
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
