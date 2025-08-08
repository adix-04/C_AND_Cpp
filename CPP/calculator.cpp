#include<iostream>
/**
 * very simple and basic c++ code for calculator functions
 */
using namespace std ;

int sum(int a,int b){
    return a+b;
}
int diff(int a , int b){
    return a-b;
}
int mul(int a , int b){
    return a * b ;
}
int divi (int a , int b){
    if (a < 0 || b < 0){
        return 0;
    } 
    return a / b ;
}

int main(){
    int option,a,b;
    do
    {
        cout<<"\nEnter Two numbers(eg: 10 20)>>";
        cin>>a>>b; 
        cout<<">>>>>>>>Enter option to perform>>>>>>>>\n1.SUM\n2.DIFF\n3.MUL\n4.DIV\n5.EXIT\n";
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<sum(a,b);
            break;
        case 2:
            cout<<diff(a,b);
            break;
        case 3:
            cout<<mul(a,b);
            break;
        case 4:
            cout<<divi(a,b);
            break;
        default:
            break;
        }
       
    } while (option!=5);
    return 0;
}

