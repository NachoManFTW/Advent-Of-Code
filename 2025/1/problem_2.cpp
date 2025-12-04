/*
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <cmath>

std::ifstream inputFile("advent_of_code_2025_problem_2.txt");
//std::ifstream inputFile("test.txt");

//std::vector<std::string> invalids;

void IsInvalidId(std::string startRange, std::string endRange, unsigned long long& total);

int main(void)
{
    unsigned long long total{};

    std::vector<std::pair<std::string, std::string>> minMaxPairs;

    std::string line;

    while (std::getline(inputFile, line))
    {
        int firstSpaceIndex = line.find_first_of('-');
        IsInvalidId(line.substr(0, firstSpaceIndex - 1), line.substr(firstSpaceIndex + 1), total);
    }
    inputFile.close();


    std::cout << total;
}


void IsInvalidId(std::string startRange, std::string endRange, unsigned long long& total)
{
    unsigned long long minRange = std::stoull(startRange);
    unsigned long long maxRange = std::stoull(endRange);

    while (minRange <= maxRange)
    {
        std::string temp = std::to_string(minRange);
        size_t len = temp.size();

        for (int d : {2, 3, 5, 7, })
        {

            if (len % d == 0)
            {
                size_t chunkSize = len / d;
                std::string chunk = temp.substr(0, chunkSize);

                bool allEqual = true;
                for (int i = 1; i < d; ++i)
                {
                    if (temp.substr(i * chunkSize, chunkSize) != chunk)
                    {
                        allEqual = false;
                        break;
                    }
                }

                if (allEqual)
                {
                    std::cout << "Number: " << temp << " Split: " << d << "\n";
                    std::cout << "Chunk: " << temp.substr(chunkSize, chunkSize) << "\n";
                    total += std::stoull(temp);;
                    break;
                }
            }
        }
        minRange++;
    }
}
*/
