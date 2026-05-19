#pragma once
#include <iostream>
#include "cstring"
class Mystring{
    private:
        int len;
        char *str;
    public:
        Mystring(int l=64, const char * c = NULL) : len(l){
            this->len = 0; str = NULL;
            create(l, c);
        }
        Mystring(const Mystring & mystring){
            this->len = 0; this->str = NULL;
            create(mystring.len, mystring.str);
        }
        ~Mystring(){
            release();
        }

        bool create(int l_create, const char * c_create){
            release();
            len = l_create;
            if( len != 0){
                str = new char[l_create]{};
            }
            if(c_create != NULL){
                strncpy(str, c_create, len);
            }

            return true;
        }
        bool release(){
            this->len = 0;
            if(this->str != NULL){
                delete [] this->str;
                this->str = NULL;
            }
            return 0;
        }

        Mystring  & operator=(const Mystring & my_assign){
            create(my_assign.len, my_assign.str);
            return *this;
        }
        friend std::ostream & operator<<(std::ostream & out, Mystring & my_cout){
            out << "len=: "
                << my_cout.len << "   "
                << "text: "
                << my_cout.str << "   "
                << "add: "
                << static_cast<void*>(my_cout.str) << "\n";
            return out;
        }
};