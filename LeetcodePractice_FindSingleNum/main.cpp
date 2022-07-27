#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int missingNumber(std::vector<int>& nums)
{
	int ans = 0;
	std::sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++)
	{
		ans ^= nums[i];
	}
	return ans;
}

int main()
{
	std::vector<int> testArr{ 3, 2, 1, 2, 1 };
	
	int expectedAns = 3;
	int ans = missingNumber(testArr);
	std::cout << (ans == expectedAns);	
}