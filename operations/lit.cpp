#include "../exp.hpp"
#include "./lit.hpp"
#include <sstream>

Lit::Lit(int x){
    this->x = x;
}

int Lit::eval(){
    return x;
};

string Lit::stringify(){
    stringstream ss;
    string s;
    ss<<this->x;
    ss>>s;
    return s;
}