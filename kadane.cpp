#include <iostream>
#include <vector>
using namespace std;

int main() {
    int input[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int len = sizeof(input) / sizeof(int);
    // sum is the maximum contiguous sum
    int sum = input[0]; 

    // sum of current subarray
    int current = sum;

    for (int i = 1; i < len; i++){
        // if the sum of current subarray(including current value at index i) 
        // is less than the num at index i, then there is no point keeping the old subarray 
        current = max(input[i], current + input[i]);
        if (current > sum){
            sum = current;
        }
    }

    cout << "Maximum contiguous sum is: " << sum << endl;
}