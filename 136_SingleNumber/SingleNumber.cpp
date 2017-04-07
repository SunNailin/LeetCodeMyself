#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	//异或算法

	int singleNumber(vector<int>& nums)
	{
		// 相同的数异或之后为0，最后会剩下没有相匹配的数的
		int res = nums[0];
		int numsLen = nums.size();
		for (int i = 1; i < numsLen; i++)
			res ^= nums[i];
		return res;
	}
};