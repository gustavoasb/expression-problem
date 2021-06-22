#ifndef SUB_H
#define SUB_H

#include "../exp.hpp"

class Sub : public Exp{
    public:
        Exp* e1;
        Exp* e2;
        Sub(Exp* e1, Exp* e2);
        int eval();
        string stringify();
};

#endif