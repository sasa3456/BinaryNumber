#include <iostream>

using namespace std;

//-----------------------
//   class CHISLO
//-----------------------

class CHISLO
{
public:
    // Under the "OUTPUT" class
    class OUTPUT
    {
    private:
        long int d_10 = 0, i = 2, d_2 = 0;

        int dvo[200];

        int t = 0;

    public:
        int output() // Function output
        {
           
            cout << "Decimal number: ";
            cin >> d_10;
           
            while (d_10 > 1)
            {
                d_2 = d_10 % i;
                dvo[t] = d_2;
                d_10 /= i;
                t++;
            }
            t--;

            cout << "Binary number: ";
            cout << 1;
            while (t >= 0)
            {
                cout << dvo[t];
                t--;
            }
            cout << endl;

            return 0;
        }
    };


   
};

int main()
{
    CHISLO::OUTPUT out;

    out.output();
   
    return main();
}