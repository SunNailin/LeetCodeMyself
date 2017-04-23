//Given two binary strings, return their sum(also a binary string).
//
//For example,
//a = "11"
//b = "1"
//Return "100".

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution{
public:
	static string addBinary(string a, string b)
	{
		string res = "";
		int aPos = a.size() - 1;
		int bPos = b.size() - 1;
		int carry = 0;
		int aDigit = 0;
		int bDigit = 0;
		while (aPos >= 0 || bPos >= 0 || carry > 0)
		{
			aDigit = bDigit = 0;
			if (aPos >= 0)
			{
				aDigit = a[aPos--] - '0';
			}
			if (bPos >= 0)
			{
				bDigit = b[bPos--] - '0';
			}
			carry = aDigit + bDigit + carry;

			if (carry == 0)
			{
				res = '0' + res;
			}
			else if (carry == 1)
			{
				res = '1' + res;
				carry = 0;
			}
			else if (carry == 2)
			{
				res = '0' + res;
				carry = 1;
			}
			else if (carry == 3)
			{
				res = '1' + res;
				carry = 1;
			}
		}
		return res;
	}
};

int main()
{
	string a = "1";
	string b = "1";
	string res = Solution::addBinary(a, b);
	cout << res;
	getchar();
}