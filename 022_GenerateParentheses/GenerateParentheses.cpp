#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

	vector<string> generateParenthesis(int n) {
		vector<string> res;
		helper(res, "", n, n);
		return res;

	}

	void helper(vector<string> &v, string str, int left, int right)
	{
		if (left == 0 && right == 0)
		{
			v.push_back(str);
			return;
		}
		if (left > 0)
		{
			helper(v, str + '(', left - 1, right);
		}
		if (right > 0 && right > left)
		{
			helper(v, str + ')', left, right - 1);
		}
	}

};


void main()
{
	int n;
	cin >> n;
	Solution s;
	s.generateParenthesis(n);
	system("Pause");
}