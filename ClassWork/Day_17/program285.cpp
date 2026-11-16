#include<iostream>

using namespace std;

class Arithematic
{
    public: 
        double No1;
        double No2;

        Arithematic(double A, double B);
        double Addition();
        double Substraction();
};

Arithematic :: Arithematic(double A, double B)
{
    No1 = A;
    No2 = B;
}

double Arithematic :: Addition()
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}

double Arithematic :: Substraction()
{
    double Ans;
    Ans = No1 - No2;
    return Ans;
}

int main()
{
    Arithematic aobj1(12.5,11.3);
    Arithematic aobj2(20.7,21.4);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    cout<<aobj1.Substraction()<<"\n";
    cout<<aobj2.Substraction()<<"\n";

    return EXIT_SUCCESS;
}

/*

return_value class_name :: function_name (parameters)
{
    //body
}

*/