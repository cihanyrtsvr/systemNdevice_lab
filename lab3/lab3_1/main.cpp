#include "stackClass.h"
#include <iostream>
#include <string>

using namespace std;


int main(){

    stackClass<int> stackCls;
    stackClass<string> stackStr;

    stackCls.push_stack(7);
    stackCls.push_stack(6);
    stackCls.push_stack(5);

    stackCls.visit_stack();

    stackCls.pop_stack();

    stackCls.visit_stack(); 


    // string Template
    stackStr.push_stack("Galatasaray ");
    stackStr.push_stack("3-0 ");
    stackStr.push_stack("Man United");

    stackStr.visit_stack();
    


    return 0; 
}