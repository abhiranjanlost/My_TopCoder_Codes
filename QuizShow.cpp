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

class QuizShow
{
public:
	int wager(vector <int> scores, int wager1, int wager2)
	{
		int bid = 0, maxEven = 0, even;

		forn(i, scores[0]+1)
		{
			even = 0;

			forn(j, (1<<3))
			{
				vi wager(all(scores));
				if(j&1)	wager[0] += i;
				else	wager[0] -= i;

				if(j&2)	wager[1] += wager1;
				else	wager[1] -= wager1;

				if(j&4)	wager[2] += wager2;
				else	wager[2] -= wager2;

				if(wager[0] > wager[1] && wager[0] > wager[2])
					even++;
			}

			if(even > maxEven)
			{
				maxEven = even;
				bid = i;
			}
		}
		
		return bid;
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, int p1, int p2, bool hasAnswer, int p3) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << p1 << "," << p2;
	cout << "]" << endl;
	QuizShow *obj;
	int answer;
	obj = new QuizShow();
	clock_t startTime = clock();
	answer = obj->wager(p0, p1, p2);
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
	int p1;
	int p2;
	int p3;
	
	{
	// ----- test 0 -----
	int t0[] = {100,100,100};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 25;
	p2 = 75;
	p3 = 76;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {10,50,60};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 30;
	p2 = 41;
	p3 = 0;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {10,50,60};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 31;
	p2 = 41;
	p3 = 10;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {2,2,12};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 0;
	p2 = 10;
	p3 = 1;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {10000,10000,10000};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 9998;
	p2 = 9997;
	p3 = 9999;
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	int t0[] = {5824,4952,6230};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 364;
	p2 = 287;
	p3 = 694;
	all_right = KawigiEdit_RunTest(5, p0, p1, p2, true, p3) && all_right;
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
// You are a contestant on a TV quiz show.
// Throughout the game, you and your 2 opponents have accumulated points by answering trivia questions.
// At the end of the game, the three of you are given one final question.
// Before you hear the question, each contestant must decide how many points he or she wishes to wager.
// Each contestant who answers the question correctly will gain a number of points equal to his or her wager,
// while the others will lose a number of points equal to their respective wagers.
// The contestant who ends up with the highest score after the final question wins the game.
// 
// 
// It has come to the point in the game where you must select your wager.
// You can bet any amount between zero and your current score, inclusive.
// Given your current score, the scores of your two opponents, and how much you believe each of your opponents will wager,
// compute how much you should wager in order to have the highest probability of winning the game.  Assume that you and your opponents each independently have a 50% chance of answering the final question correctly.
// 
// 
// 
// You will be given the three scores as a vector <int>, scores.
// The first element is your score,
// the next element is your first opponent's score,
// and the last element is your second opponent's score.
// You will also be given wager1 and wager2,
// the amount of your first and second opponents' wagers, respectively.
// 
// 
// 
// Your goal is to maximize your chance of winning uncontested.
// As far as you're concerned, ending in a tie is as bad as losing.
// If there are multiple wagers that give you the same highest probability of winning, return the smallest such wager.
// If you have no chance of winning, return zero.
// 
// 
// 
// DEFINITION
// Class:QuizShow
// Method:wager
// Parameters:vector <int>, int, int
// Returns:int
// Method signature:int wager(vector <int> scores, int wager1, int wager2)
// 
// 
// CONSTRAINTS
// -scores will contain exactly 3 elements.
// -Each element of scores will be between 0 and 10000, inclusive.
// -wager1 will be between 0 and scores[1], inclusive.
// -wager2 will be between 0 and scores[2], inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// { 100, 100, 100 }
// 25
// 75
// 
// Returns: 76
// 
// If you bet 76, you have a 50% chance of winning.  In this case, it doesn't matter if your opponents are right or wrong.  If you are right, you win.  Otherwise, you lose.  If you wager less than 76, your chance of winning drops below 50%, and if you wager more, your chance of winning will not increase.  Therefore, the correct answer is 76.
// 
// 1)
// { 10, 50, 60 }
// 30
// 41
// 
// Returns: 0
// 
// Even if your opponents are both wrong, they will end up with 20 and 19 points.  Since you cannot win (even if you wager 10), the correct answer is 0.
// 
// 2)
// { 10, 50, 60 }
// 31
// 41
// 
// Returns: 10
// 
// This is the same as the previous example, except in this case your opponents will each end up with 19 points if they are both wrong.  Now, you have a 12.5% chance of winning if you wager 10.
// 
// 3)
// { 2, 2, 12 }
// 0
// 10
// 
// Returns: 1
// 
// 4)
// { 10000, 10000, 10000 }
// 9998
// 9997
// 
// Returns: 9999
// 
// 5)
// { 5824, 4952, 6230 }
// 364
// 287
// 
// Returns: 694
// 
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
