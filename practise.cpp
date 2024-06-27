#include <iostream>
#include <vector>
#include <random>
#include <iomanip>

using namespace std;

const int N = 40;

template <class S>
S summIt(S &result, const S array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        result += array[i];
    }
    return result;
}

inline void sum(int &acc_sum, vector<int> &array)
{
    for (int i = 0; i < array.size(); i++)
    {
        acc_sum += array.at(i);
    }
}

int main(int argc, char const *argv[])
{
    int acc_sum = 0;

    vector<int> array;
    for (int i = 0; i < N; i++)
    {
        array.push_back(i);
    }
    sum(acc_sum, array);

    cout << acc_sum << endl;

    int *arr = new int[3];
    arr[0] = 1;
    arr[1] = 3;
    arr[2] = 2;

    int sum = 0;
    summIt(sum, arr, 3);

    cout << "The ouptut sum is " << sum << endl;

    const long long numIterations = 1000000000; // Adjust this number as needed
    int *diceProbability = new int[7]();

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 6);

    for (long long i = 0; i < numIterations; i++)
    {
        diceProbability[dis(gen)]++;
    }

    cout << fixed << setprecision(6); // Set precision for better readability
    for (int i = 1; i < 7; i++)
    {
        double probability = static_cast<double>(diceProbability[i]) / numIterations;
        cout << "The probability of getting " << i << " is " << probability << endl;
    }

    delete[] diceProbability;
    return 0;
}
