#include "DB.h"

using namespace std;

class Solver:public DB{
public:
    Solver(ifstream &fin);
    int solve(int L, int m);
};