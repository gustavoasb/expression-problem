#include "../exp.hpp"
#include "./sub.hpp"
#include <sstream>

Sub::Sub(Exp* e1, Exp* e2){
    this->e1 = e1;
    this->e2 = e2;
}

int Sub::eval(){
    return e1->eval()-e2->eval();
}

string Sub::stringify(){
    stringstream ss1, ss2;
    string s,s2;
    ss1<<this->e1->eval();
    ss2<<this->e2->eval();
    ss1>>s;
    ss2>>s2;
    return "("+s+"-"+s2+")";
}

