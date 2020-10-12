// code sample to generate random numbers in C++

#include <iostream>
#include <ctime>

int main()
{
    srand((unsigned int) time (NULL)); //activates the generator
    //...
    int a = rand()%10;        //gives a random from 0 to 9

    double r = ((double) rand() / (RAND_MAX));        //gives a random from 0 to 1

    int max, min;
    //...
    int c = (rand()%(max - min)) + min;              //gives a random from min to max
    //...
    return 0;
}