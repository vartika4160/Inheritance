#include<iostream>
using namespace std ;
class Vartika
{
    public:
    Vartika()
    {
        cout<<"This is Vartika \n";
    }
};
class name: public Vartika{

};
class Fullname : public name{

};
int main()
{
    Fullname obj;
    return 0;

};
