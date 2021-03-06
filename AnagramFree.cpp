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


typedef string ST;


#define	all(c)	(c).begin(), (c).end()
#define tr(i, c)	for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)


class AnagramFree
{
public:
	int getMaximumSubset(vector <string> S)
	{
		int ret;
		
		map<string , int> m ;
		
		tr(it, S)
		{
			ST st = *it;
			
			sort(all(st));

			m[st]++;
		}
		ret = 0;

		return m.size();

	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <string> p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	AnagramFree *obj;
	int answer;
	obj = new AnagramFree();
	clock_t startTime = clock();
	answer = obj->getMaximumSubset(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p1 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p1;
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
	int p1;
	
	{
	// ----- test 0 -----
	string t0[] = {"abcd","abdc","dabc","bacd"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 1;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	string t0[] = {"abcd","abac","aabc","bacd"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 2;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	string t0[] = {"aa","aaaaa","aaa","a","bbaaaa","aaababaa"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 6;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	string t0[] = {"creation","sentence","reaction","sneak","star","rats","snake"};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 4;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
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
// A string X is an anagram of string Y if X can be obtained by arranging all characters of Y in some order, without removing any characters and without adding new characters. For example, each of the strings "baba", "abab", "aabb" and "abba" is an anagram of "aabb", and strings "aaab", "aab" and "aabc" are not anagrams of "aabb".
// 
// A set of strings is anagram-free if it contains no pair of strings which are anagrams of each other. Given a set of strings S, return the size of its largest anagram-free subset. Note that the entire set is considered a subset of itself.
// 
// DEFINITION
// Class:AnagramFree
// Method:getMaximumSubset
// Parameters:vector <string>
// Returns:int
// Method signature:int getMaximumSubset(vector <string> S)
// 
// 
// CONSTRAINTS
// -S will contain between 1 and 50 elements, inclusive.
// -Each element of S will contain between 1 and 50 characters, inclusive.
// -Each element of S will consist of lowercase letters ('a'-'z') only.
// -All elements of S will be distinct.
// 
// 
// EXAMPLES
// 
// 0)
// {"abcd","abdc","dabc","bacd"}
// 
// Returns: 1
// 
// All of the strings in S are anagrams of each other, so no two of them can simultaneously belong to an anagram-free set.
// 
// 1)
// {"abcd","abac","aabc","bacd"}
// 
// Returns: 2
// 
// One of the maximum anagram-free subsets of S is {"abcd","abac"}.
// 
// 2)
// {"aa","aaaaa","aaa","a","bbaaaa","aaababaa"}
// 
// Returns: 6
// 
// Note that strings of different length cannot be anagrams of each other.
// 
// 3)
// {"creation","sentence","reaction","sneak","star","rats","snake"}
// 
// Returns: 4
// 
// 
// 
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
