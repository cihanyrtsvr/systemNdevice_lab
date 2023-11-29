#include "stackExe.h"
#include <iostream>

using namespace std;

int main(){

    stackExe stackss;

    stackss.pushStack(4);
    stackss.pushStack(5);
    stackss.pushStack(6);

    stackss.getStackMembers();

    stackss.popStack();

    stackss.getStackMembers();

    stackss.popStack();
    stackss.popStack();

    cout <<boolalpha<< stackss.empty()<<endl;


    return 0;
}