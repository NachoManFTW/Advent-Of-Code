/*
#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <algorithm>
#include <chrono>

std::ifstream inputFile("problem_5.txt");
//std::ifstream inputFile("test.txt");

uint64_t CheckIfIngredientIsBetweenIdRanges(std::vector<std::string>& idRanges, std::vector<std::string>& ingredientIds);
uint64_t GetAllRangesOfFreshIds(std::vector<std::string>& idRanges);
void CombineLikeRanges(std::vector<std::pair<uint64_t, uint64_t>>& minMaxIds);
uint64_t GetTotalIdRange(std::vector<std::pair<uint64_t, uint64_t>>& minMaxIds);


int main(void)
{
	auto start = std::chrono::high_resolution_clock::now();
	std::string line{};

	std::vector<std::string> idRanges{};
	std::vector<std::string> ingredientIds{};

	while (std::getline(inputFile, line))
	{
		if (line.find('-') != std::string::npos)
		{
			idRanges.push_back(line);
		}
		else
		{
			ingredientIds.push_back(line);
		}

	}
	inputFile.close();

	uint64_t totalFresh = CheckIfIngredientIsBetweenIdRanges(idRanges, ingredientIds);
	uint64_t numberOfFreshIds = GetAllRangesOfFreshIds(idRanges);

	std::cout << "Total Fresh Ingredients : " << totalFresh << "\n";
	std::cout << "Total Number of Fresh ID's: " << numberOfFreshIds << "\n";

	auto end = std::chrono::high_resolution_clock::now();
	auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
	std::cout << "\nExecution time: " << elapsed.count() << " milliseconds\n";

	return 0;
}


uint64_t CheckIfIngredientIsBetweenIdRanges(std::vector<std::string>& idRanges, std::vector<std::string>& ingredientIds)
{
	uint64_t totalFresh{};
	ingredientIds.erase(ingredientIds.begin());

	for (const std::string& id : ingredientIds)
	{
		uint64_t ingredientId = std::stoull(id);

		for (std::string& range : idRanges)
		{
			size_t dashPos = range.find('-');
			uint64_t startRange = std::stoull(range.substr(0, dashPos));
			uint64_t endRange = std::stoull(range.substr(dashPos + 1));

			if (ingredientId >= startRange && ingredientId <= endRange)
			{
				totalFresh++;
				break;
			}
		}
	}

	return totalFresh;
}

uint64_t GetAllRangesOfFreshIds(std::vector<std::string>& idRanges)
{
	std::vector<std::pair<uint64_t, uint64_t>> minMaxIds{};

	for (std::string& range : idRanges)
	{
		std::pair<uint64_t, uint64_t> field;

		size_t dashPos = range.find('-');
		uint64_t startRange = std::stoull(range.substr(0, dashPos));
		uint64_t endRange = std::stoull(range.substr(dashPos + 1));

		field.first = startRange, field.second = endRange;

		minMaxIds.push_back(field);
	}

	std::sort(minMaxIds.begin(), minMaxIds.end());

	CombineLikeRanges(minMaxIds);

	return GetTotalIdRange(minMaxIds);
}

void CombineLikeRanges(std::vector<std::pair<uint64_t, uint64_t>>& minMaxIds)
{
	std::vector<std::pair<uint64_t, uint64_t>> merged{};
	merged.push_back(minMaxIds[0]);

	for (size_t i = 1; i < minMaxIds.size(); ++i)
	{
		auto& last = merged.back();
		auto& current = minMaxIds[i];

		if (current.first <= last.second)
			last.second = std::max(last.second, current.second);
		else
			merged.push_back(current);
	}

	minMaxIds = std::move(merged);
}

uint64_t GetTotalIdRange(std::vector<std::pair<uint64_t, uint64_t>>& minMaxIds)
{
	uint64_t total{};
	for (auto& range : minMaxIds)
	{
		uint64_t max = range.second;
		uint64_t min = range.first;

		total += (max - min) + 1;
	}
	return total;
}


*/
