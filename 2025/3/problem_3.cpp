/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::ifstream inputFile("advent_of_code_2025_problem_3.txt");
//std::ifstream inputFile("test.txt");

std::string maxSubsequence(const std::string& s, int k);


int main(void)
{
    uint64_t total{};

    std::string line;

    while (std::getline(inputFile, line))
    {
        total += std::stoull(maxSubsequence(line, 12));
        //LargestJoltsProduced(line, total);

    }
    std::cout << total << "\n";
}

std::string maxSubsequence(const std::string& s, int k)
{
    //K = subsequence length
    int size = s.size();
    int toRemove = size - k;
    std::vector<char> stack;

    for (int i = 0; i < size; ++i) {
        char c = s[i];
        while (!stack.empty() && toRemove > 0 && stack.back() < c && (stack.size() - 1 + (size - i)) >= k) {
            stack.pop_back();
            --toRemove;
        }
        stack.push_back(c);
    }

    // Trim to exactly k length
    while (stack.size() > k) {
        stack.pop_back();
    }

    return std::string(stack.begin(), stack.end());
}
*/
