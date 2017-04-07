#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

//Given a roman numeral, convert it to an integer.
//Input is guaranteed to be within the range from 1 to 3999.

class Solution{
public:
	int romanToInt(string s)
	{
		unordered_map<char, int> T = { { 'I', 1 }, { 'V', 5 }, { 'X', 10 }, { 'L', 50 }, { 'C', 100 }, { 'D', 500 }, { 'm', 1000 } };
		int sum = T[s.back()]
	}
};