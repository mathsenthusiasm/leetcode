#include <stdio.h>
#include <string.h>

#define MAX_EMPTY 1000
#define MAX_EXCHANGE 1000

int memo[MAX_EMPTY][MAX_EXCHANGE];

int dp(int empties, int cost) {
    if (empties < cost) return 0; // Base case: can't exchange

    if (memo[empties][cost] != -1)
        return memo[empties][cost];

    // One exchange:
    // Use 'cost' empty bottles to get 1 full bottle
    // Drink it → gain 1 empty bottle back
    // So new empties = (empties - cost + 1)
    // Increase cost by 1
    int result = 1 + dp(empties - cost + 1, cost + 1);

    return memo[empties][cost] = result;
}

int numWaterBottles(int numBottles, int numExchange) {
    memset(memo, -1, sizeof(memo));
    return numBottles + dp(numBottles, numExchange); // Initial drink + recursive exchanges
}

int main() {
    int numBottles = 3;
    int numExchange = 1;

    int result = numWaterBottles(numBottles, numExchange);
    printf("Maximum bottles drank: %d\n", result);

    return 0;
}
