#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	//����㷨

	int singleNumber(vector<int>& nums)
	{
		// ��ͬ�������֮��Ϊ0������ʣ��û����ƥ�������
		int res = nums[0];
		int numsLen = nums.size();
		for (int i = 1; i < numsLen; i++)
			res ^= nums[i];
		return res;
	}
};