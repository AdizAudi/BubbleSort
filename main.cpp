#include <iostream>
#include <array>
using namespace std;

int main()
{
    /* Bubble sort Sortowanie b¹belkowe */


    int tab[] = {4,7,6,12,8,22,1,6,13,16,11};
    int sizeOfTab = (sizeof(tab)/sizeof(tab[0]));

    for(int i=0; i<sizeOfTab; i++)
            {
                for(int j=0; j<sizeOfTab-1;j++)
                {
                    if(tab[j]>tab[j+1])
                        swap(tab[j],tab[j+1]);
                }

            }

    for(int i = 0; i<sizeOfTab; i++)
        cout<<tab[i]<<"  ";

    return 0;
}
