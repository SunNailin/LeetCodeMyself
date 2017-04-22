//Input: "Let's take LeetCode contest"
//Output : "s'teL ekat edoCteeL tsetnoc"

#include <iostream>
#include <string>
using namespace std;

class Solution{
public:
	static string reverseWords(string s)
	{
		int sLen = s.size();
		if (s.size() == 0)
			return s;
		for (int i = 0; i < sLen; i++)
		{
			if (s[i] != ' ')
			{
				int j = i;
				for (; j < sLen && s[j] != ' '; j++);
				reverse(s.begin() + i, s.begin() + j);
				i = j - 1;
			}
		}
		return s;
	}
};


int main()
{
	string s = "Let's take Leetcode contest";
	reverse(s.begin(), s.end());
	cout << s;

	/*cout << s.size() << endl;
	cout << s.length() << endl;
	cout << sizeof(s) << endl;
	cout << strlen(s) << endl;*/
	//system("Pause");
	getchar();

}