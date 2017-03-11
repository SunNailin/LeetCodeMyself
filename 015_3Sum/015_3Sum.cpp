#include <stdio.h>
#include <vector>
#include <iostream>
#include <windows.h>
#include <unordered_map>

using namespace std;

class Solution{
public:
	static vector<vector<int>> threeSum(vector<int>& nums)
	{
		vector<vector<int>> result;
		
		int j = 0;
		int vecLen = nums.size();
		for (int i = 0; i < vecLen; i++)
		{
			vector<int> tempResult;
			vector<int> two_Sum;
			int first = nums[i];
			int target = 0 - first;
		//	result[0][0] = 0;
			tempResult.push_back(first);
			two_Sum = twoSum(nums, target, i);
			if (two_Sum.size() != 0)
			{
				tempResult.push_back(two_Sum[0]);
				tempResult.push_back(two_Sum[1]);
				result.push_back(tempResult);
				//j++;
			}
		}
		return result;

	}

	static vector<int> twoSum(vector<int>& nums, int target, int currentIndex)
	{
		//unordered_map<int, int> hash;
		vector<int> result;
		int numToBeFind;
		int vecLen = nums.size();
		for (int i = currentIndex+1; i < vecLen; i++)
		{
			//if (i == currentIndex) continue;
			
				int count = i+1;
				numToBeFind = target - nums[i];
				while (count < vecLen )
				{
					if (nums[count] == numToBeFind)
					{
						result.push_back(target - numToBeFind);
						result.push_back(numToBeFind);
						return result;
					}
					count++;
				}
			

		}
		return result;
	}
};

int main(){
	vector<vector<int>> result;
	vector<int> nums = { -1, 0, 1, 2, -1, -4 };
	result = Solution::threeSum(nums);
	system("Pause");
	/*int vecLen;
	cin >> vecLen;
	for (int i = 0; i < vecLen; i++)
	{
	cin >> nums[i];
	}
	result = threeSum(nums);*/

}