// Include
#include "Chislo.h"


// Namespace
namespace BinaryNumber
{

	int chislo::output()
	{
        std::cout << "Decimal number: ";
        std::cin >> d_10;

        while (d_10 > 1)
        {
            d_2 = d_10 % i;
            dvo[t] = d_2;
            d_10 /= i;
            t++;
        }
        t--;

        std::cout << "Binary number: ";
        std::cout << 1;
        while (t >= 0)
        {
            std::cout << dvo[t];
            t--;
        }
        std::cout << std::endl;

        return 0;
	}

}