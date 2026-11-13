#include<iostream>

using namespace std;

class Arithematic
{
    public: 
        float No1;
        float No2;

        Arithematic(float A, float B)
        {
            No1 = A;
            No2 = B;
        }

        float Addition()
        {
            float Ans;
            Ans = No1 + No2;
            return Ans;
        }
};

int main()
{
    Arithematic aobj1(10.5f,11.3f);
    Arithematic aobj2(20.7f,21.4f);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    return EXIT_SUCCESS;
}