#include <iostream>
#include <string>

using namespace std;

class Solution{
public :
	static string addStrings(string num1, string num2)
	{
		string res = "";
		int aPos = num1.size() - 1;
		int bPos = num2.size() - 1;
		int aDecimal = 0;
		int bDecimal = 0;
		int carry = 0;
		while (aPos >= 0 || bPos >= 0 || carry > 0)
		{
			aDecimal = bDecimal = 0;
			if (aPos >= 0)
			{
				aDecimal = num1[aPos--] - '0';
			}
			if (bPos >= 0)
			{
				bDecimal = num2[bPos--] - '0';
			}
			carry = aDecimal + bDecimal + carry;

			if (carry < 10)
			{
				res = char(carry + '0' - 0) + res;
				carry = 0;
			}
			else if (carry >= 10)
			{
				res = char(carry - 10 + '0' - 0) + res;
				carry = 1;
			}
		}
		return res;

	}
};
int main()
{
	string num1 = "1";
	string num2 = "9";
	string res = Solution::addStrings(num1, num2);
	cout << res;
}