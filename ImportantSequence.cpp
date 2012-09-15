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

const int64 inf = 1e15;

struct Node {
	int64 a, b;
	Node() {
		a = 1, b = inf;
	}
};

class ImportantSequence
{
public:
	int getCount(vector <int> B, string op)
	{
		int sz = B.size();
		vector <Node>  p (sz+1);

		forn(j, sz+1) {
			forn(i, sz) {
				if(op[i] == '+') {
					int64 s = B[i];
					p[i].b = min(p[i].b, s-1);
//					p[i].a = max(p[i].a, s-1);

//					if(p[i].a > 1e10 || p[i].a > p[i].b || p[i].b < 1)
//						return 0;

					p[i+1].b = min(p[i+1].b, s - p[i].a);
					p[i+1].a = max(p[i+1].a, s - p[i].b);

					if(j == 0)forn(k, sz+1)
						cout << p[k].a << " " << p[k].b << endl;
					if(!j)cout << endl;

//					if(p[i+1].a > 1e10 || p[i+1].a > p[i+1].b || p[i+1].b < 1)
//						return 0;
				}
				else {
					int64 d = B[i];
					p[i].a = max(p[i].a, d+1);
					p[i+1].a = max(p[i+1].a, d+1);
					
					p[i+1].a = max(p[i+1].a, p[i].a - d);
					p[i+1].b = min(p[i+1].b, p[i].b - d);
					
//					p[i].a = max(p[i].a, p[i+1].a - d);
//					p[i].b = min(p[i].b, p[i+1].b - d);					
				}
				forn(i, sz+1)
					if(p[i].a > 1e10 || p[i].a > p[i].b || p[i].b < 1)
						return 0;

//				cout << endl;
			}

		}
		if(p[0].b - p[0].a +1 < 1)
			return 0;
		return p[0].b - p[0].a +1;

//		forn(i, sz+1)
//			cout << p[i].a << " " << p[i].b << endl;

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
bool KawigiEdit_RunTest(int testNum, vector <int> p0, string p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << "\"" << p1 << "\"";
	cout << "]" << endl;
	ImportantSequence *obj;
	int answer;
	obj = new ImportantSequence();
	clock_t startTime = clock();
	answer = obj->getCount(p0, p1);
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
	string p1;
	int p2;
	
	{
	// ----- test 0 -----
	int t0[] = {3,-1,7};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "+-+";
	p2 = 2;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "-";
	p2 = -1;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {1};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "+";
	p2 = 0;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {10};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "+";
	p2 = 9;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {540,2012,540,2012,540,2012,540};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "-+-+-+-";
	p2 = 1471;
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	int t0[] = {3,-10,15};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "+++";
	all_right = KawigiEdit_RunTest(5, p0, p1, false, p2) && all_right;
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
// This problem statement contains superscripts and/or subscripts. It may not display properly outside the applet.
// 
// Little Rudolph had an important sequence of positive integers. The sequence consisted of N positive integers a0, a1, .., aN-1.
// 
// Rudolph wrote the sequence onto the blackboard in the classroom. While Rudolph had gone out, little Arthur came into the classroom and saw the sequence. Arthur likes to play with numbers as much as he likes to give his friends puzzles. So he did the following:
// 
// First, he wrote a '+' or a '-' between each pair of consecutive numbers (possibly using different signs for different pairs of numbers).
// 	
// Next, for each sign he computed the result of the corresponding operation and wrote it under the sign.
// I.e., if he used the '+' sign between ai and ai+1, he would write the sum ai+ai+1 under this '+' sign.
// Similarly, if he used the '-' sign between ai and ai+1, he would write the difference ai-ai+1. In this way he obtained a new sequence of N-1 numbers b0, b1, .., bN-2.
// Finally, he erased the original sequence. Now there was only the operator sequence o0, o1, .., oN-2 and the resulting number sequence b0, b2, .., bN-2 left on the blackboard.
// 
// For example, if the original sequence was {1, 2, 3, 4}, and Arthur wrote operators {+, -, +}, then the content of the blackboard changed like this:
// 
// 1   2   3   4    ->    1 + 2 - 3 + 4    ->    1 + 2 - 3 + 4    ->     +  -  +
//                                                 3  -1   7             3 -1  7
// 
// When Rudolph returned, he was shocked as his important sequence had disappeared. Arthur quickly told him what operations he had performed and that Rudolph has to simply reconstruct the orginal sequence.
// 
// Unfortunately, little Arthur did not realize that it is not necessarily possible to determine the original sequence uniquely. For example, both original sequences {1, 2, 3, 4} and {2, 1, 2, 5} lead to the same sequence {3, -1, 7} when operator sequence is {+, -, +}.
// 
// The only thing Rudolph remembers about his original sequence is that all the integers were positive. Rudolph now wants to count all sequences of positive integers that match the blackboard. You are given vector <int> B and string operators  both containing N-1 elements. The i-th element of B is the number bi and i-th element of operators will be '+' or '-', meaning that the i-th operator is + or -, respectively. Return the number of different positive integer sequences A that lead to sequence B when operators operators are used in the way described. If there are infinitely many such sequences, return -1. Note that there may be test cases where no valid sequence A exists. For such test cases the correct return value is 0.
// 
// DEFINITION
// Class:ImportantSequence
// Method:getCount
// Parameters:vector <int>, string
// Returns:int
// Method signature:int getCount(vector <int> B, string operators)
// 
// 
// NOTES
// -It is guaranteed that the correct answer will always fit into the 32-bit signed integer type.
// -The integer 0 (zero) is not positive. It may not occur in Rudolph's original sequence.
// 
// 
// CONSTRAINTS
// -B will contain between 1 and 50 elements, inclusive.
// -operators will contain the same number of characters as the number of elements in B.
// -Each element of B will be between -1000000000 (-109) and 1000000000 (109), inclusive.
// -Each character in operators will be either '+' or '-' (quotes for clarity).
// 
// 
// EXAMPLES
// 
// 0)
// {3, -1, 7}
// "+-+"
// 
// Returns: 2
// 
// From the problem statement.
// 
// 1)
// {1}
// "-"
// 
// Returns: -1
// 
// There are infinitely many pairs of positive integers that differ by one.
// 
// 2)
// {1}
// "+"
// 
// Returns: 0
// 
// Note that all numbers ai have to be positive integers.
// 
// 3)
// {10}
// "+"
// 
// Returns: 9
// 
// 4)
// {540, 2012, 540, 2012, 540, 2012, 540}
// "-+-+-+-"
// 
// Returns: 1471
// 
// END KAWIGIEDIT TESTING




//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
