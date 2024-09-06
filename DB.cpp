#include "DB.h"

using namespace std;

DB::DB(ifstream &fin): Parser(fin){
    int i;
    max=0;
    for (i=0; i<n; i++)//инициализация вектора ответа
        answer.push_back(false);
};

void DB::writting(){ // функция записи ответа в файл
    ofstream out;
    out.open("answer.txt");
    if (out.is_open()){
        out<< max <<endl;
        for (int i=0; i<n; i++) 
            out << answer[i] << " ";
    }
    out.close();
}