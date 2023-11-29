#include "stackExe.h"


using namespace std; 

void stackExe::pushStack(int num){
    sta.push_back(num);
}

int stackExe::popStack(){
    int e = sta.back();
    sta.pop_back();
    return e;
}

void stackExe::getStackMembers(){
    cout<< "The stack members: "<<endl;
    int n=0;
    for(auto i : sta){
        cout << ++n << "-"<< i<<  endl;
    }
    cout<<endl;
}

int stackExe::getStackSize(){
    return sta.size();
}

bool stackExe::empty(){
    return(sta.size()==0);
}

