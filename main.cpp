#include "./include.hpp"
using namespace std;

int main(void){
    Exp* expAdd = new Add(new Lit(3),new Lit(5));
    Exp* expSub = new Sub(new Lit(3),new Lit(5));
    cout << expAdd->eval() << endl;
    cout << expSub->eval() << endl;
    cout << expSub->stringify() << endl;
    
};