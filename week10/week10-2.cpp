/// week10-2.cpp �m��class
#include <iostream>
using namespace std;
///�A��Jclass Cat �A�[�j�A��,CodeBlocks �L���A�[�n�U�A���B����
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
