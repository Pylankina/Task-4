#include "Parser.h"
using namespace std;

class DB:public Parser{
protected:
    int max;
    vector<bool> answer;
public:
    DB(ifstream &f_in);
    void writting();
};