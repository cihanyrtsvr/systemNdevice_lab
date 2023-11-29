
#ifndef ENQUESEXE
#define ENQUESEXE

#include <iostream>
#include <vector>

class enquesExe{
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