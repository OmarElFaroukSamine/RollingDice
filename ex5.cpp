#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

bool rollDice(int *a)
{
    for (int i = 0; i < 6; i++)
    {
        a[i] = 1 + rand() % (6 - 1 + 1);
    }
    
    /*i wanted to do a checker in the first for to minimize the number of loops,
    but since the description said to simulate a roll of dice 5 times
     so it didn't feel right to break out of it without finishing the 5 rolls*/
    
    for (int i = 0; i < 6; i++)
    {
    }
}
void displayArray(int *a)
{
    cout << "[";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << ", ";
    }

    cout << a[5] << "]\n";
}


int main()
{
    srand(time(NULL));
    int c = 0;
    bool ch ;
    int *ra = new int[6];
    while(ch==true){
        ch = rollDice(ra);
        displayArray(ra);
    }
    delete[] ra;
    ra = NULL;
    return 0;
}