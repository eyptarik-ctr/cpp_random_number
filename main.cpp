#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // degerin sabit olmamasi icn
    srand((unsigned)time(0)); // bu kod degerin surekli ayni olmamsini saglar

    int my_arrray [20] {};
    int en_büyük_sayi=0;
    for (int i = 0; i <20; i++ )
    {

        my_arrray[i] = (rand()%100)+1 ;
    }
    for (int i =0 ; i < 20; i++)
    {
        if (my_arrray[i] > en_büyük_sayi)
        {
            en_büyük_sayi = my_arrray[i];
        }
    }
    cout << en_büyük_sayi;
}