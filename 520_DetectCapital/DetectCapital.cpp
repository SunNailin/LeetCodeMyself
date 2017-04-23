//给定一个单词，判断是否符合下列格式：
//All letters in this word are capitals, like "USA".
//All letters in this word are not capitals, like "leetcode".
//Only the first letter in this word is capital if it has more than one letter, like "Google".



#include <iostream>
#include <string>

using namespace std;

class Solution{
public:
	static bool detectCapitalUse(string word)
	{
		int strLen = word.size();
		int count = 0;
		if (word[0] >= 'A' && word[0] <= 'Z')
		{
			count = 1;
			for (int i = 1; i < strLen; i++)
			{
				if (word[i] >= 'A' && word[i] <= 'Z')
					count++;
			}
			if (count == strLen || count == 1)
			{
				return true;
			}
			else
				return false;
		}
		else if (word[0] >= 'a' && word[0] <= 'z')
		{
			count = 1;
			for (int i = 1; i < strLen; i++)
			{
				if (word[i] >= 'a' && word[i] <= 'z')
					count++;
			}
			if (count == strLen)
			{
				return true;
			}
			else
				return false;
		}
	}
};