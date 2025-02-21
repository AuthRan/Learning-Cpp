#include <stdio.h>
#include <iostream>

using namespace std;

template <class T>
class add {
    private:
        T a;
        T b;
    public:
        add(T a, T b) {
            this->a=a;
            this->b=b;
        }
        T adition() {
            T c;
            c=a+b;
            return c;
        }
        T subs();
};
template <class T>
T add <T> :: subs() {
    
}

int main () {
    add <int> o(5,4);
    int c=o.adition();   
    printf("Sum is %d",c);
    
    


    return 0;
}