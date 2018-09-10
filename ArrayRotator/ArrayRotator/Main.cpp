
#include <algorithm>
#include <iostream>
#include <vector>


std::vector<int> solution(std::vector<int> &A, int K) 
{
	// write your code in C++14 (g++ 6.2.0)
	int rotations = K;
	std::vector<int> start;
	start = A;
	std::vector<int> finish;
	int vecSize = start.size();
	std::cout << vecSize << std::endl;
	std::cout << finish.size() << std::endl;
	for (int i = 1; i <= rotations; i++)
	{
		std::cout << "rotating!..." << std::endl;
		for (int j = vecSize; j > 0; j--)
			if (j == vecSize)
				finish.at(0) = start.at(j);
			else
				finish.at(j + 1) = start.at(j);
	}
	return finish;
}
int main()
{
	std::vector<int> testNums = { 5,4,3,2,1 };
	int flips = 4;
	std::vector<int> results = solution(testNums, flips);
	for (int i : results)
		std::cout << i << std::endl;
	std::cin.get();
	return 0;
}