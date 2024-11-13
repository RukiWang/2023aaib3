/// week10-2.cpp 練習class
#include <iostream>
using namespace std;
///你輸入class Cat 再加大括號,CodeBlocks 他幫你加好下括號、分號
class Mouse{
public:
    void print(){
        cout<<"I am a mouse,mou mou\n";
    }
};
class Cat{
public:
    void print(){
        cout<<"I am a cat,meow meow\n";
    }
};

int main(){
    Mouse mouse1,mouse2;
    Cat cat1,cat2;
    mouse1.print();
    mouse2.print();
    cat1.print();
    cat2.print();
}
