#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	static int searchInsert(vector<int>& nums, int target)
	{
		int low = 0;
		int high = nums.size() - 1;
		while (low <= high)
		{
			int mid = (low + high) / 2;
			if (nums[mid] < target)
				low = mid + 1;
			else high = mid - 1;
		}
		return low;
	}
};

int main()
{
	int target = 2;
	vector<int> nums = { 1, 3 };
	int res = Solution::searchInsert(nums, target);
	cout << res;
	system("Pause");
}