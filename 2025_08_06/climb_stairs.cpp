/* You have been given a number of stairs. 
Initially, you are at the 0th stair, and you need to reach the Nth stair. 
Each time you can either climb one step or two steps. 
You are supposed to return the number of distinct ways in which you can climb from the 0th step to Nth step. */

//Answer --->>>

#include <iostream>
using namespace std;

int countDistinctWayToClimbStair(long long nStairs)
{
    // base case
    if(nStairs < 0)
        return 0;
    if(nStairs == 0)
        return 1;

    // Recursive Case
    int ans = countDistinctWayToClimbStair(nStairs-1)
            + countDistinctWayToClimbStair(nStairs-2);

    return ans;
}

int main() {
    long long n;
    cout << "Enter number of stairs: ";
    cin >> n;
    cout << "Number of distinct ways to climb the stairs: " << countDistinctWayToClimbStair(n) << endl;
    return 0;
}
