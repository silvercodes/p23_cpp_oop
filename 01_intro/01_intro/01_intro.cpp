#include <iostream>


int getRand(int min, int max)
{
    return rand() % (max - min + 1) + min;
}


int main()
{
    srand(time(0));

    for (int i = 1; i <= 100; ++i)
    {
        std::cout << getRand(15, 20) << '\t';
        if (i % 5 == 0)
            std::cout << '\n';
    }

}




