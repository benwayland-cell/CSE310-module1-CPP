#include <iostream>
#include <functional>
#include <vector>
#include <map>
#include <string>
using namespace std;
#pragma once

class DieRoll 
{
    public:
        DieRoll(string input);
        int roll();
        void printProbabilityMap();
    
    private:
        vector<function<int()>> diceVector = {};
        map<int, int> probabilityMap = {};

        vector<int> getProbabilityMapKeys();
        void addDieToProbabilityMap(int dieSize);
        string getRoundPercent(int numberGiven, int total);
        
};