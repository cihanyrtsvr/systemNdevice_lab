#include "enquesExe.h"


using namespace std; 

void enquesExe::pushStack(int num){
    sta.push_back(num);
}

int enquesExe::popStack(){
    int e = sta.front();
    sta.erase(sta.begin());
    return e;
}

void enquesExe::getStackMembers(){
    cout<< "The stack members: "<<endl;
    int n=0;
    for(auto i : sta){
        cout << ++n << "-"<< i<<  endl;
    }
    cout<<endl;
}

int enquesExe::getStackSize(){
    return sta.size();
}

bool enquesExe::empty(){
    return(sta.size()==0);
}

