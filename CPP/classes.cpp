#include<iostream>
class myclass{
    public:
    int num;
};
int main()
{
    myclass myobj,myobj2;
    myobj2.num = 30;
    myobj.num = 10;
    std::cout<<myobj.num<<std::endl<<myobj2.num;
}