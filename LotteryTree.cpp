#include <bits/stdc++.h>
using namespace std;

class LotteryTree
{
public:
	string isFairTree(vector <int> tree, int P);
};

string LotteryTree::isFairTree (vector <int> tree, int P)
{
	string ret;
	return ret;
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit-pf 2.3.0
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, int p1, bool hasAnswer, string p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << p1;
	cout << "]" << endl;
	LotteryTree *obj;
	string answer;
	obj = new LotteryTree();
	clock_t startTime = clock();
	answer = obj->isFairTree(p0, p1);
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
	bool disabled;
	bool tests_disabled;
	all_right = true;
	tests_disabled = false;
	
	vector <int> p0;
	int p1;
	string p2;
	
	// ----- test 0 -----
	disabled = false;
	p0 = {0,0,0};
	p1 = 3;
	p2 = "YES";
	all_right = (disabled || KawigiEdit_RunTest(0, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 1 -----
	disabled = false;
	p0 = {0,0,0,1,1,2,2,3,3};
	p1 = 2;
	p2 = "YES";
	all_right = (disabled || KawigiEdit_RunTest(1, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 2 -----
	disabled = false;
	p0 = {0,0,1,1,2,2,4,4,4};
	p1 = 3;
	p2 = "NO";
	all_right = (disabled || KawigiEdit_RunTest(2, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 3 -----
	disabled = false;
	p0 = {0,0,1,1,1,3,3,3};
	p1 = 3;
	p2 = "NO";
	all_right = (disabled || KawigiEdit_RunTest(3, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 4 -----
	disabled = false;
	p0 = {0,0,0,3,0,0,3,6,3,1,0,2,0,4,6,15,1,15,11,11,1,4,11,2,11,2,6};
	p1 = 6;
	p2 = "YES";
	all_right = (disabled || KawigiEdit_RunTest(4, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 5 -----
	disabled = false;
	p0 = {0,1,2,3,1,1,4,4,0,1,6,9,1,12,9,2,4,8,6,13,8,5,11,12,17,19,13,9,3,24,30,29,28,28,11,27,2,26,6,14,8,26,15,25,33,38,1,24,15,43,3,39,26,8,13,50,28,8,6,27,8,38,27,50,17,50,25,40,7,29,22,40,2,24,22,30,33,40,19,14,26,39,5,43,7,4};
	p1 = 9;
	p2 = "NO";
	all_right = (disabled || KawigiEdit_RunTest(5, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 6 -----
	disabled = false;
	p0 = {0,1,0,0,4,0,2,2,0,2,6,1,3,6,5,9,11,13,1,10,14,4,7,21,16,8,25,4,5,22,25,14,12,11,12,26,21,8,2,38,3,5,4,38,27,35,38,30,38,9,16,36,6,10,7,27,30,33,17,26,17,10,35,10,38,41,15,9,3,27,8,15,38,22,41,33,33,36,30,13,18,22,18};
	p1 = 12;
	p2 = "YES";
	all_right = (disabled || KawigiEdit_RunTest(6, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 7 -----
	disabled = false;
	p0 = {0,0,2,3,4,3,2,1,8,6,8,8,2,7,14,2,8,1,11,11,12,16,12,19,20,13,7,12,26,11,18,19,18,20,4,9,1,1,6,16,1,35,27,24,37,30,36,41,32,36,8,2,6,14,41,1,35,6,30,16,12,2,35,25,50,13,1,24,8,32,26,50,9,19,9,20,26,27,6,12,25,9,37,37,9};
	p1 = 7;
	p2 = "NO";
	all_right = (disabled || KawigiEdit_RunTest(7, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	// ----- test 8 -----
	disabled = false;
	p0 = {0,0,1,0,2,3,0,0,8,5,7,5,2,12,12,14,14,13,8,2,1,7,18,16,8,24,18,2,24,3,11,5,24,4,34,6,31,13,38,19,4,3,22,3,11,12,21,34,41,8,19,4,13,29,33,8,14,50,18,45,16,50,44,50,38,5,43,31,29,7,6,45,38,4,19,41,50,21,44,41,43,22,33,6,8};
	p1 = 12;
	p2 = "YES";
	all_right = (disabled || KawigiEdit_RunTest(8, p0, p1, true, p2) ) && all_right;
	tests_disabled = tests_disabled || disabled;
	// ------------------
	
	if (all_right) {
		if (tests_disabled) {
			cout << "You're a stud (but some test cases were disabled)!" << endl;
		} else {
			cout << "You're a stud (at least on given cases)!" << endl;
		}
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
// You held a lottery and P people participated in it.
// Now you want to determine who won the lottery prize.
// 
// You have decided to choose the winner using a rooted tree.
// You are going to make a lottery with the tree as follows:
// 
// The participants are conveniently numbered from 1 to P, inclusive.
// First, you draw the tree onto a rectangular board in such a way that the tree satisfies the following conditions:
// 
// Each node of the tree corresponds to a small circle on the board.
// The circles are so small that you can ignore their size.
// Each edge of the tree corresponds to a line segment connecting two circles. 
// No two edges are allowed to intersect. 
// The root node must be drawn on the top edge of the board.
// For each node, all edges to its children must be going downwards. (In other words, the parent of a node must always be drawn above the node.)
// All of the leaves must be drawn on the bottom edge of the board.
// 
// 
// 
// Next, you split the bottom edge of the board into P segments in such a way that each leaf belongs to exactly one segment.
// For each segment, you choose a different integer between 1 and P, inclusive, and write that integer into each of the leaves that belong to that segment.
// 
// Now, you will repeat the following process:
// Find an empty node X such that you have already written integers into all of its children.
// If there are multiple nodes with this property, choose one uniformly at random.
// Choose a child of X uniformly at random, and copy the integer written in the chosen child into X.
// 
// The process terminates once the root node contains an integer.
// 
// 
// You are given the int P and a vector <int> tree that describes the tree you will use.
// The tree has N nodes, conveniently numbered 0 through N-1.
// Node 0 is the root of the tree.
// For each other node, the number of its parent is smaller than its own number.
// More precisely, for each i between 1 and N-1, inclusive, tree[i-1] is the parent of node i.
// 
// You want to make the lottery fair.
// That is, you want to guarantee that each of the participants will have the same probability to win the lottery. 
// To do that, you can choose how to draw the tree, and how to assign integers to its leaves (while following the above procedure).
// 
// Return "YES" (quotes for clarity) if you can make the lottery fair and "NO" otherwise.
// 
// 
// DEFINITION
// Class:LotteryTree
// Method:isFairTree
// Parameters:vector <int>, int
// Returns:string
// Method signature:string isFairTree(vector <int> tree, int P)
// 
// 
// CONSTRAINTS
// -tree will have between 2 and 100 elements, inclusive.
// -For each i, element i (0-based index) of tree will be between 0 and i, inclusive.
// -P will be between 2 and 100, inclusive.
// -Each node that is not a leaf will have at least 2 children.
// 
// 
// EXAMPLES
// 
// 0)
// {0, 0, 0}
// 3
// 
// Returns: "YES"
// 
// One of the ways to draw the tree is as follows:
// 
// 
// 
// 
// 
// 1)
// {0, 0, 0, 1, 1, 2, 2, 3, 3}
// 2
// 
// Returns: "YES"
// 
// One of the ways to draw the tree is as follows:
// 
// 
// 
// 
// 
// Note that you cannot assign integers to the leaves as follows:
// 
// 
// 
// 
// 2)
// {0, 0, 1, 1, 2, 2, 4, 4, 4}
// 3
// 
// Returns: "NO"
// 
// You would be able to make this tree fair if you were allowed to assign integers to leaves arbitrarily. However, given the additional restriction that each integer must be assigned to a consecutive segment of leaves, making this tree fair is not possible.
// 
// 3)
// {0, 0, 1, 1, 1, 3, 3, 3}
// 3
// 
// Returns: "NO"
// 
// 
// 
// 4)
// {0, 0, 0, 3, 0, 0, 3, 6, 3, 1, 0, 2, 0, 4, 6, 15, 1, 15, 11, 11, 1, 4, 11, 2, 11, 2, 6}
// 
// 6
// 
// Returns: "YES"
// 
// 
// 
// 5)
// {0, 1, 2, 3, 1, 1, 4, 4, 0, 1, 6, 9, 1, 12, 9, 2, 4, 8, 6, 13, 8, 5, 11, 12, 17, 
//  19, 13, 9, 3, 24, 30, 29, 28, 28, 11, 27, 2, 26, 6, 14, 8, 26, 15, 25, 33, 38, 
//  1, 24, 15, 43, 3, 39, 26, 8, 13, 50, 28, 8, 6, 27, 8, 38, 27, 50, 17, 50, 25, 
//  40, 7, 29, 22, 40, 2, 24, 22, 30, 33, 40, 19, 14, 26, 39, 5, 43, 7, 4}
// 9
// 
// Returns: "NO"
// 
// 
// 
// 6)
// {0, 1, 0, 0, 4, 0, 2, 2, 0, 2, 6, 1, 3, 6, 5, 9, 11, 13, 1, 10, 14, 4, 7, 21,
//  16, 8, 25, 4, 5, 22, 25, 14, 12, 11, 12, 26, 21, 8, 2, 38, 3, 5, 4, 38, 27, 
//  35, 38, 30, 38, 9, 16, 36, 6, 10, 7, 27, 30, 33, 17, 26, 17, 10, 35, 10, 38,
//  41, 15, 9, 3, 27, 8, 15, 38, 22, 41, 33, 33, 36, 30, 13, 18, 22, 18}
// 12
// 
// Returns: "YES"
// 
// 
// 
// 7)
// {0, 0, 2, 3, 4, 3, 2, 1, 8, 6, 8, 8, 2, 7, 14, 2, 8, 1, 11, 11, 12, 16, 12, 
//  19, 20, 13, 7, 12, 26, 11, 18, 19, 18, 20, 4, 9, 1, 1, 6, 16, 1, 35, 27, 24,
//  37, 30, 36, 41, 32, 36, 8, 2, 6, 14, 41, 1, 35, 6, 30, 16, 12, 2, 35, 25, 50,
//  13, 1, 24, 8, 32, 26, 50, 9, 19, 9, 20, 26, 27, 6, 12, 25, 9, 37, 37, 9} 
// 7
// 
// Returns: "NO"
// 
// 
// 
// 8)
// {0, 0, 1, 0, 2, 3, 0, 0, 8, 5, 7, 5, 2, 12, 12, 14, 14, 13, 8, 2, 1, 7, 18,
//  16, 8, 24, 18, 2, 24, 3, 11, 5, 24, 4, 34, 6, 31, 13, 38, 19, 4, 3, 22, 3,
//  11, 12, 21, 34, 41, 8, 19, 4, 13, 29, 33, 8, 14, 50, 18, 45, 16, 50, 44, 50,
//  38, 5, 43, 31, 29, 7, 6, 45, 38, 4, 19, 41, 50, 21, 44, 41, 43, 22, 33, 6, 8}
// 
// 12
// 
// Returns: "YES"
// 
// 
// 
// END KAWIGIEDIT TESTING