


#ifndef STACKCLASS
#define STACKCLASS

#include <deque>
#include <iostream>

using namespace std;

template <class T>
class stackClass{
    public:

        const T& top(){
            return stack.front();
        }
        
        void push_stack(const T &num){
            stack.push_back(num);
        }

        T pop_stack(){

            T a = stack.front();
            stack.pop_front();
            return a;
        }

        void visit_stack() const{
            int n=0;
            for(auto i : stack){
                cout << ++n<<"st element -> " << i << endl;
            }
            cout<<endl;
        }

        size_t size_stack() const{
            return stack.size();
        }

        bool empty() const{
            return (stack.size()==0);
        }

    private: 
        deque<T>stack;
};

#endif