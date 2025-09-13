//Name: Sameer Yasin
//PRN: 24070123092
//Division: B1
//Exp-13

//Function Overloading
//Program-3
#include<iostream>
#include<string>
using namespace std;

class Concat{
    public:

    string Concatenate(string a, string b){
        return a+b;
    }

    string Concatenate(char a, char b){
        string init = "";
        init += a;
        init += b;
        return init;
    }
};

int main(){

    Concat c;
    
    cout<<"Concatenated String is: "<<c.Concatenate("Nishka", "Ranadive")<<endl;
    cout<<"Concatenated Characters are: "<<c.Concatenate('N', 'R')<<endl;

    return 0;
}


/*==========OUTPUTS==========
Concatenated String is: NishkaRanadive
Concatenated Characters are: NR
*/
