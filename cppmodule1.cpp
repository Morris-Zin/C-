#include <iostream>
#include <vector>
using namespace std;

//  Convert this program to C++

// change to C++ io

//  change to one line comments

//   change defines of constants to const
//   change array to vector<>

// inline any short function

const int N = 40;

inline void sumit(int &sum, int size, vector<int> array)
{
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
}

int main(int argc, char const *argv[])
{
    int i;

    int sum = 0;

    vector<int> data;

    for (i = 0; i < N; ++i)
        data.push_back(i);

    sumit(sum, N, data);

    cout << "sum is " << sum << endl;

    return 0;
}
