#include "../exp.hpp"
#include "./add.hpp"
#include <sstream>
using namespace std;

Add::Add(Exp* e1, Exp* e2){
    this->e1 = e1;
    this->e2 = e2;
}

int Add::eval(){
    return e1->eval()+e2->eval();
}

string Add::stringify(){
    stringstream ss1, ss2;
    string s,s2;
    ss1<<this->e1->eval();
    ss2<<this->e2->eval();
    ss1>>s;
    ss2>>s2;
    return "("+s+"+"+s2+")";
}
