#include <iostream>
using namespace std;

#include <stdio.h>
#include <vector>

void RemoveAt(std::vector<int> &pVec, int p)
{
    std::vector<int>::iterator it = pVec.begin();
    std::advance(it, p);
    pVec.erase(it);
}

int main()
{
    std::vector<int> wkVect;
    for (int I = 1; I <= 10; I++)
    {
        wkVect.push_back(I);
    }
    for (int I = 0; I <= (int)wkVect.size() - 1; I++)
    {
        printf("wkVect.at(%d)=%d\n", I, wkVect.at(I));
    }

    RemoveAt(wkVect, 0);
    RemoveAt(wkVect, 2);
    RemoveAt(wkVect, 4);

    for (int I = 0; I <= (int)wkVect.size() - 1; I++)
    {
        printf("wkVect.at(%d)=%d\n", I, wkVect.at(I));
    }
    return 0;
}