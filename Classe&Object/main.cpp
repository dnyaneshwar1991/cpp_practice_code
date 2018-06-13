#include <iostream>

using namespace std;

class HelloWorld{

public:
    void Func(void){
        cout << "I am in class\n" << endl;
    }
};

int main()
{
    HelloWorld HW_oject;
    HW_oject.Func();
    cout << "Hello world!\n" << endl;
    return 0;
}
