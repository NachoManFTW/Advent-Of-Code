/*

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::ifstream inputFile("advent_of_code_2025_problem_1.txt");
//std::ifstream inputFile("test.txt");

int startPos = 50;
int g_ZeroCount = 0;


int GetValue(std::string string);
int CalcDial(int currentValue, int numOfRotations);
char GetDirection(std::string string);
int CalcDialWithZeros(int currentValue, int numberOfRotations, char direction);
std::pair<char, int> ParseLine(const std::string& line);



int main()
{
    std::string line;

    while (std::getline(inputFile, line))
    {
        auto [dir, val] = ParseLine(line);
        startPos = CalcDialWithZeros(startPos, val, dir);
    }
    inputFile.close();

    std::cout << g_ZeroCount;
}




std::pair<char, int> ParseLine(const std::string& line)
{
    char dir = line[0];
    int num = std::stoi(line.substr(1));
    return { dir, num };
}

int GetValue(std::string string)
{
    char direction = string[0];
    string.erase(0, 1);

    int num = std::stoi(string);

    return num;
    /*
    if (direction == 'L')
    {
        return -num;
    }
    else if (direction == 'R')
    {
        return num;
    }

}

char GetDirection(std::string string)
{
    char direction = string[0];
    return direction;

}

//50, 48 = 98
//85, 23 = 108 == 8
//5, -10 = -5 == 96
//95, 7 = 102 = 2
//95 96 97 98 99 0 1 2 3 4 5

int CalcDial(int currentValue, int numOfRotations)
{
    int newDialPos;

    newDialPos = currentValue + numOfRotations;

    if (newDialPos > 99)
    {
        newDialPos %= 100;
    }
    else if (newDialPos < 0)
    {
        newDialPos %= 100;
    }

    return newDialPos;

}


int CalcDialWithZeros(int currentValue, int numberOfRotations, char direction)
{
    int newDialPos = currentValue;

    for (int k = 0; k < numberOfRotations; ++k)
    {

        if (direction == 'L')
        {
            newDialPos--;
            if (newDialPos < 0) newDialPos = 99;
        }
        else
        {
            newDialPos++;
            if (newDialPos > 99) newDialPos = 0;
        }
        if (newDialPos == 0) g_ZeroCount++;
    }
    return newDialPos;
}


*/
