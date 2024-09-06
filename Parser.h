#include <iostream>
#include <string>
#include <fstream>
#include <ostream>
#include <sstream>
#include <vector>
#ifndef PARSER_H
#define PARSER_H

using namespace std;

class Parser{
protected:
    int K, n;
public:
    vector<pair<int,int>> w;
    Parser (ifstream &fin);
};

#endif