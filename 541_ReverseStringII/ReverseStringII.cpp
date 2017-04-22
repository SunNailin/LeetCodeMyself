//Input: s = "abcdefg", k = 2
//Output : "bacdfeg"

#include <iostream>
#include <string>


using namespace std;

class Solution {
public:
	static string reverseStr(string s, int k)
	{
		int sLen = s.size();
		int count = sLen / k;
		int i = 0;
		if (count < 1)
		{
			reverse(s.begin(), s.end());
		}
		else
		{
			while (i <= count)
			{
				if (i % 2 == 0)
				{
					reverse(s.begin() + i*k, s.begin() + (i + 1)*k);
				}
				i++;
			}

		}
	}
};


int main()
{
	string s = "hyzqyljrnigxvdtneasepfahmtyhlohwxmkqcdfehybknvdmfrfvtbsovjbdhevlfxpdaovjgunjqlimjkfnqcqnajmebeddqsgl";
	string exp = "fdcqkmxwholhytmhafpesaentdvxginrjlyqzyhehybknvdmfrfvtbsovjbdhevlfxpdaovjgunjqllgsqddebemjanqcqnfkjmi";
	int k = 39;
	string res = Solution::reverseStr(s, k);
	cout << exp << endl;
	cout << res << endl;
	getchar();
}