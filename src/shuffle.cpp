#include "utils.h"
#include <cstdlib>

void Shuffle(int n, int card[])
{
    for(int i = n - 1; i >= 1; --i){
        Swap(card[i], card[rand() % i]);
    }
}

int main(void){
    int card[] = {1,2,3,4,5,6,7,8,9,10};
    int card2[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    Shuffle(n, card);
    PrintArr(n, card);
    Shuffle(n, card2);
    PrintArr(n, card2);
    return 0;
}