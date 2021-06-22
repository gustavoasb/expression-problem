#ifndef ADD_H
#define ADD_H

#include "../exp.hpp"
#include <string>

class Add : public Exp{
    public:
        Exp* e1;
        Exp* e2;
        Add(Exp* e1, Exp* e2);
        int eval();
        string stringify();
};

#endif