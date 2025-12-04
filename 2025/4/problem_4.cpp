/*
#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <algorithm>

std::ifstream inputFile("problem_4.txt");
//std::ifstream inputFile("test.txt");

void GetTotalCount(std::vector<std::string>& rows, int& total);

void CheckIfAreaAroundIsClear(std::string& previousRow, std::string& currentRow, std::string& nextRow, int& total, std::vector<std::vector<int>>& removePos, int& removed, int i);

void RemoveIfWasActive(std::vector<std::vector<int>> removePos, std::vector<std::string>& rows);

void PrintRemoveLocations(const std::vector<std::string>& rows, int step);


int main(void)
{
	int total{ 0 };
	std::vector<std::string> rows;
	std::string line;

	while (std::getline(inputFile, line))
		rows.push_back(line);

	GetTotalCount(rows, total);

	std::cout << total;

	return 0;
}

void GetTotalCount(std::vector<std::string>& rows, int& total)
{
	std::vector<std::vector<int>> removePos;
	int removed{ 0 };
	int step{ 0 };

	//PrintRemoveLocations(rows, step);

	do
	{
		removed = 0;
		removePos.clear();

		for (int i = 0; i < rows.size(); i++)
		{
			std::string previousRow{ (i > 0) ? rows[i - 1] : std::string(rows[i].size(), '.') };
			std::string currentRow = rows[i];
			std::string nextRow{ (i < rows.size() - 1) ? rows[i + 1] : std::string(rows[i].size(), '.') };

			CheckIfAreaAroundIsClear(previousRow, currentRow, nextRow, total, removePos, removed, i);
		}
		RemoveIfWasActive(removePos, rows);

		//PrintRemoveLocations(rows, ++step);

	} while (removed > 0);
}

void CheckIfAreaAroundIsClear(std::string& previousRow, std::string& currentRow, std::string& nextRow, int& total, std::vector<std::vector<int>>& removePos, int& removed, int i)
{
	std::vector<int> locations;
	for (int k = 0; k < currentRow.size(); k++)
	{
		if (currentRow[k] == '@')
		{
			int atCounter{ 0 };

			for (int dk = -1; dk <= 1; ++dk)
			{
				if (k + dk >= 0 && k + dk < currentRow.size())
				{
					if (previousRow[k + dk] == '@') atCounter++;
					if (nextRow[k + dk] == '@') atCounter++;
				}
			}

			if (k > 0 && currentRow[k - 1] == '@') atCounter++;
			if (k + 1 < currentRow.size() && currentRow[k + 1] == '@') atCounter++;

			if (atCounter < 4)
			{
				total++;
				removed++;
				locations.push_back(k);

			}
		}
	}
	removePos.push_back(locations);
}

void RemoveIfWasActive(std::vector<std::vector<int>> removePos, std::vector<std::string>& rows)
{
	for (int i = 0; i < removePos.size(); i++)
	{
		for (int pos : removePos[i])
		{
			rows[i][pos] = '.';
		}
	}
}

void PrintRemoveLocations(const std::vector<std::string>& rows, int step)
{
	std::cout << "Step: " << step << ":\n";
	for (const auto& row : rows)
	{
		std::cout << row << "\n";
	}
	std::cout << "\n\n";
}
*/


