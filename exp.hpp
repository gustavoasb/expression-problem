#ifndef EXP_H
#define EXP_H

#include <string>
using namespace std;

class Exp{
    public:
        virtual int eval() = 0;
        virtual string stringify() = 0;
};

#endif