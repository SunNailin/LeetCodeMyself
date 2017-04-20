#include <iostream>

using namespace std;

#define DBL_MIN 2.2250738585072014e-308 /* min positive value */

class Solution {
public:
	static double myPow(double x, int n) {
		double res = 1;
		if (n > 0)
		{
			for (int i = 0; i < n; i++)
			{
				res *= x;
			}
		}
		else if (n == 0)
			res = 1;
		else if (n < 0)
		{
			for (int i = 0; i < -n; i++)
			{
				res *= x;
				if (res < DBL_MIN)
				{
					return 0;
				}
			}
			res = 1/res;
		}
		return res;
	}
};

int main()
{
	double x;
	int n;
	cin >> x;
	cin >> n;
	double res = Solution::myPow(x, n);
	cout << res;
	system("Pause");
}