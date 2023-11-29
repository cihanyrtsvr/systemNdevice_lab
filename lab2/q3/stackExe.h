
#ifndef STACKEXE
#define STACKEXE

#include <iostream>
#include <vector>

class stackExe{
    public:
        void pushStack(int);
        int popStack();
        int getStackSize();
        void getStackMembers();
        bool empty();

    private:
        std::vector<int> sta;
};

#endif