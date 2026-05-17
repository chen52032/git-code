#include <iostream>
#include <memory>

class B;
class A{
    public:
        std::shared_ptr<B> aB;
        A(){std::cout << "constructer A" << "\n";}
        ~A(){std::cout << "destructer A" << "\n";}
};
class B{
    public:
        std::shared_ptr<A> bA;
        B(){std::cout << "constructer B" << "\n";}
        ~B(){std::cout << "destructer B" << "\n";}
};

int main(){
    std::shared_ptr<int> p1(new int[64]);
    std::shared_ptr<double> p2 = std::make_shared<double>(64);
    std::cout << "end of main()" << std::endl;


    std::cout << "======shared_ptr error example===========" << "\n";
    std::shared_ptr<A> pA = std::make_shared<A>();
    std::shared_ptr<B> pB(new B());
    pA->aB = pB;
    pB->bA = pA;
}