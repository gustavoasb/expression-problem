#ifndef LIT_H
#define LIT_H

#include "../exp.hpp"

class Lit : public Exp{
    public:
        int x;
        Lit(int x);
        int eval();
        string stringify();
};

#endif