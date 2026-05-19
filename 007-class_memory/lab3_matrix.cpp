#include <iostream>
#include <memory>
using namespace std;

class Matrix{
    private:
        unsigned h;
        unsigned l;
        shared_ptr<float[]> data;
    public:
        Matrix(unsigned h1 = 0, unsigned l1 = 0) : h(h1), l(l1), data(NULL) {
            cout << "M1 constructer" << "\n";
            create(h1, l1);
        }
        void create(unsigned h1, unsigned l1){
            if(h1 == 0 || l1 == 0) return;
            data = shared_ptr<float[]>(new float[h1 * l1]{});
        }
        void set(unsigned i, unsigned j, float v){
            if(i >= h || j >= l){
                cout << "Error: Index out of bounds" << "\n";
                exit(1);
            }
            data[i*l + j] = v;
        }
        Matrix operator+(const Matrix & m) const {
            if(this->h != m.h || this->l != m.l){
                cout << "Error: Matrix size mismatch" << "\n";
                exit(1);
            }
            Matrix sum(h,l);
            for(int i =0 ; i < (h*l); i++){
                sum.data[i] = this->data[i] + m.data[i];
            }
            Matrix & tmp = sum;
            return tmp;
        }
        friend ostream & operator<<(ostream & os, const Matrix & m) {
            for(int i = 0; i < (m.h*m.l); i++){
                os << m.data[i] << " ";
                if((i+1) % m.l == 0 && i != 0) os << "\n";
            }
            return os;
        }
};

int main(){
    Matrix a(3, 4);
    a.set(1, 2, 3.0l);
    cout << "a:" << "\n" << a << "\n";
    Matrix b(3,4);
    b.set(0, 0, 1.0l);
    b.set(0, 1, 2.0l);
    b.set(0, 2, 3.0l);
    b.set(0, 3, 4.0l);
    cout << "b:" << "\n" << b << "\n";
    Matrix c = a + b;
    cout << "c:" << "\n" << c << "\n";
    Matrix d = a;
    cout << "d:" << "\n" << d << "\n";
    d = b;
    cout << "d:" << "\n" << d << "\n";
}