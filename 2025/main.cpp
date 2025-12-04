#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <algorithm>
#include <chrono>

//std::ifstream inputFile("problem_4.txt");
std::ifstream inputFile("test.txt");



int main(void)
{
	auto start = std::chrono::high_resolution_clock::now();
	std::string line{};

	while (std::getline(inputFile, line))
	{

	}
	inputFile.close();



	auto end = std::chrono::high_resolution_clock::now();
	auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
	std::cout << "\nExecution time: " << elapsed.count() << " milliseconds\n";

	return 0;
}

