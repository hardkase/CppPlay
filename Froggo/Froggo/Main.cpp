#include <algorithm>
#include <iostream>

int solution(int x, int y, int z) 
{
	int numJumps = 0;
	int start = x;
	int finish = y;
	int leap = z;
	int travel = 0;
	int distance = y - x;
	while (travel < distance)
	{
		travel += leap;
		numJumps++;
	}
	return numJumps;
}
int main()
{
	int result = solution(12, 999995, 40);
	std::cout << "The Frog Jumps " << result << " times!" << std::endl;
	std::cin.get();
	return 0;
}