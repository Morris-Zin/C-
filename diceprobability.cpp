#include <iostream>
#include <cstdlib>
#include <ctime>
//2 dice probabiltiy , the sum of two dices
using namespace std;

const int sides = 6;

inline int r_sides(void)
{
    return rand() % sides + 1;
}

int main(int argc, const char **argv)
{
    srand(clock());
    const int n_dice = 2;
    int d1 = 0, d2 = 0;
    int trials;
    cout << "\nHow many tirals do you want to run? " << endl;
    cin >> trials;

    // size of 2 * 6 = 12 + 1 = 13; 0 to 12 by index
    int *outcomes = new int[n_dice * sides + 1];

    for (int i = 0; i < trials; i++)
    {
        outcomes[(d1 = r_sides()) + (d2 = r_sides())]++;
    }
    cout << "\nProability" << endl;

    for (int j = 2; j < n_dice * sides + 1; j++)
    {
        cout << "j = " << j << " P : " << static_cast<double>(outcomes[j]) / trials << endl;
        }
    return 0;
}
