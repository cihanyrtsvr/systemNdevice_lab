#include "enquesExe.h"
#include <iostream>

using namespace std;

int main(){

    enquesExe stackss;

    stackss.pushStack(4);
    stackss.pushStack(5);
    stackss.pushStack(6);

    stackss.getStackMembers();

    cout << "Eleminates: "<<stackss.popStack()<<"\n"<<endl;

    stackss.getStackMembers();

    stackss.popStack();
    stackss.popStack();

    cout <<boolalpha<< stackss.empty()<<endl;


    return 0;
}