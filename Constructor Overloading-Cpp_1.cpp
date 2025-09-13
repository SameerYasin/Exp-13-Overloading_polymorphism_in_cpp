//Name: Sameer Yasin
//PRN: 24070123092
//Division: B1
//Exp-13

//Constructor Overloading
//Program-1
#include<iostream>
using namespace std;

class Add{
    public:

    Add(int a, int b){
        cout<<"Sum is(int): "<<a+b<<endl;
    }

    Add(float a, float b){
        cout<<"Sum is(double): "<<a+b<<endl;
    }

    Add(int a, int b, int c){
        cout<<"Sum is(3 digits): "<<a+b+c<<endl;
    }
};

int main(){

    Add a1(2, 3);
    Add a2(1.2f, 2.1f);
    Add a3(1, 2, 3);

    return 0;
}


/*==========OUTPUTS==========
Sum is(int): 5
Sum is(double): 3.3
Sum is(3 digits): 6
*/
