
#include <algorithm>
#include <iostream>
#include <vector>


std::vector<int> solution(std::vector<int> &A, int K) 
{
	std::vector<int> start = A;
	size_t vecSize = start.size();
	size_t idx = vecSize - 1;
	std::vector<int> finish(vecSize, 0);
	int rotate = K;
	for (int v : start)
		std::cout << "Num: " << v << std::endl;
	for (int w : finish)
		std::cout << "Num: " << w << std::endl;
	std::cout << "Rotations: " << rotate << std::endl;
	std::cout << "Vector size: " << vecSize << std::endl;
	std::cout << "Index Length: " << idx << std::endl;
	for (int i = 1; i <= rotate; i++)
	{
		for (size_t q = 0; q <= idx; q++)
		{
			if (q == idx)
				(finish)[0] = (start)[q];
			else
				(finish)[q + 1] = (start)[q];
		}
		start.clear();
		start = finish;
	}
	return start;
}
int main()
{
	std::vector<int> testNums = { 9,7,0,5,3,3,4,8,3,2,6,1,6,0 };
	int flips = 8;
	std::vector<int> results = solution(testNums, flips);
	for (int i : results)
		std::cout << i << std::endl;
	std::cin.get();
	return 0;
}