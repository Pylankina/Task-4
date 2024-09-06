#include "Solver.h"
#include <iostream>
#include <vector>

using namespace std;

Solver::Solver(ifstream &fin):DB(fin){
    int L=K; int m=n;
    max=solve(L, m);
}
int Solver::solve(int L, int m){
    if (w[m - 1].second > L)
        return solve(L, m - 1);

    int res1=solve(L - w[m - 1].second, m-1);
    res1=res1+w[m - 1].first;
    int res2=solve(L, m - 1);

    if (res1>res2){
        answer[m - 1] = true;
        return res1;
    }
    else{
        answer[m - 1] = false;
        return res2;
    }
}
