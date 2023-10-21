#include<iostream>
using namespace std;
class name{
    public:
    name()
    {
        cout<<"This is Vartika\n";
    }
};
class Firstname: public name{
};
int main()
{
    Firstname obj;
    return 0;
}

/*
Output
This is Vartika
*/
