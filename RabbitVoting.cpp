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
#include <cstring>
using namespace std;
;
typedef string ST;


#define tr(i, c)	for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

#define forn(i, n)	for(int i = 0; i < n; i++)

class RabbitVoting
{
public:
	string getWinner(vector <string> names, vector <string> votes)
	{
		string ret;
		int mx = 0;
		bool f;
		map <ST , int > m;

		forn(i, names.size())
		{
			if(names[i]==votes[i])	continue;
			m[votes[i]]++;
		}

		tr(it, m)
		{
			if(it->second > mx)
			{
				ret = it->first;
				f = false;
				mx = it->second;
			}
			else if(it->second == mx)
			{
				f = true;
			}
		}
		
		if(!f)
			return ret;
		else	return "";
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, vector <string> p1, bool hasAnswer, string p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p1[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	RabbitVoting *obj;
	string answer;
	obj = new RabbitVoting();
	clock_t startTime = clock();
	answer = obj->getWinner(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p2 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
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
	
	vector <string> p0;
	vector <string> p1;
	string p2;
	
	{
	// ----- test 0 -----
	string t0[] = {"Alice","Bill","Carol","Dick"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"Bill","Dick","Alice","Alice"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "Alice";
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"Alice","Bill","Carol","Dick"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"Carol","Carol","Bill","Bill"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "";
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"Alice","Bill","Carol","Dick"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"Alice","Alice","Bill","Bill"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "Bill";
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"Alice","Bill"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"Alice","Bill"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "";
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	string t0[] = {"WhiteRabbit","whiterabbit","whiteRabbit","Whiterabbit"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	string t1[] = {"whiteRabbit","whiteRabbit","whiteRabbit","WhiteRabbit"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	p2 = "whiteRabbit";
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
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
// Rabbits often feel lonely, so one group of rabbits decided to get together 
// and hold a beauty contest to determine who among them has the most beautiful ears. 
// The rules are as follows. 
// Each rabbit submits one vote. 
// If a rabbit votes for himself/herself, that vote is considered invalid and thrown away. 
// In the end, the rabbit who receives the most valid votes is the winner. 
// 
// You are given a vector <string> names and a vector <string> votes. 
// The i-th rabbit is named names[i], and he/she voted for the rabbit named votes[i]. 
// All rabbits have distinct names. 
// Return the name of the rabbit who received the most valid votes. 
// If there is a tie for most votes, return an empty string instead. 
// 
// 
// 
// DEFINITION
// Class:RabbitVoting
// Method:getWinner
// Parameters:vector <string>, vector <string>
// Returns:string
// Method signature:string getWinner(vector <string> names, vector <string> votes)
// 
// 
// NOTES
// -Rabbit names are case-sensitive. See example 4 for clarification.
// 
// 
// CONSTRAINTS
// -names will contain between 2 and 50 elements, inclusive. 
// -Each element of names will contain between 1 and 50 characters, inclusive. 
// -Each character in names will be a letter ('A'-'Z', 'a'-'z').
// -All elements of names will be distinct. 
// -votes will contain the same number of elements as names. 
// -Each element of votes will be the same as one of the elements of names. 
// 
// 
// EXAMPLES
// 
// 0)
// { "Alice", "Bill", "Carol", "Dick" }
// { "Bill", "Dick", "Alice", "Alice" }
// 
// Returns: "Alice"
// 
// 2 votes for Alice, 1 for Bill, 0 for Carol, and 1 for Dick. Alice got the most. 
// 
// 
// 1)
// { "Alice", "Bill", "Carol", "Dick" }
// { "Carol", "Carol", "Bill", "Bill" }
// 
// Returns: ""
// 
// Bill and Carol are tied with 2 votes each.
// 
// 2)
// { "Alice", "Bill", "Carol", "Dick" }
// { "Alice", "Alice", "Bill", "Bill" }
// 
// Returns: "Bill"
// 
// Alice's vote for herself is invalid. 1 valid vote for Alice, 2 for Bill.
// 
// 3)
// { "Alice", "Bill" }
// { "Alice", "Bill" }
// 
// Returns: ""
// 
// All votes are invalid. 
// 
// 
// 4)
// { "WhiteRabbit", "whiterabbit", "whiteRabbit", "Whiterabbit" }
// { "whiteRabbit", "whiteRabbit", "whiteRabbit", "WhiteRabbit" }
// 
// Returns: "whiteRabbit"
// 
// These four are different names. 
// 
// 
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
