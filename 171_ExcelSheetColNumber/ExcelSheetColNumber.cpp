#include <iostream>
#include <vector>

using namespace std;

class Solution{
public :
	static int titleToNumber(string s)
	{
		int inter = 'A' - 1;
		int count = 0;
		double res = 0;
		for (int i = s.length() - 1; i >= 0; i--)
		{
			res += (s[i] - inter)*pow(26, count);
			count++;
		}
		return res;
	}
};


int main()
{
	string s = "AA";
	int res = Solution::titleToNumber(s);
	cout << res;
	system("Pause");
}