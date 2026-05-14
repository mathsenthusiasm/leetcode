// C++ code for the above approach:
#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

// Function to count the number of valid triples
int countValidTriples(int N)
{
    int count = 0;

    // Iterate over all possible values
    // of x, y, and z
    for (int x = 1; x <= N; x++) {
        for (int y = 1; y <= N; y++) {
            for (int z = 1; z <= N; z++) {

                // Check if the condition is
                // satisfied: x*y, y*z, and z*x
                // should be less than or equal
                // to N
                if (x * y <= N && y * z <= N
                    && z * x <= N) {
                    count++;

                    // Take modulo 998244353
                    // to ensure the result is
                    // within the given range
                    count %= MOD;
                }
            }
        }
    }

    return count;
}

// Drivers code
int main()
{

    // Define the value of N
    int N = 5;

    // Call the countValidTriples function
    // to get the count of valid triples
    int result = countValidTriples(N);

    // Display the result
    cout << "Count of valid triples: " << result << endl;

    return 0;
}