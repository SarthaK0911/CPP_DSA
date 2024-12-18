#include <iostream>
int hourglassSum(int arr[6][6], int i, int j) {
    return arr[i][j] + arr[i][j+1] + arr[i][j+2]
                     + arr[i+1][j+1]
           + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
}
int main() {
    int arr[6][6] = {
        {1, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {1, 1, 1, 0, 0, 0},
        {0, 0, 2, 4, 4, 0},
        {0, 0, 0, 2, 0, 0},
        {0, 0, 1, 2, 4, 0}
    };
    int maxSum = -63; 
    int numHourglasses = 0;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            int sum = hourglassSum(arr, i, j);
            if (sum > maxSum) {
                maxSum = sum;
            }
            numHourglasses++;
        }
    }

    std::cout << "Number of hourglasses in the matrix: " << numHourglasses << std::endl;
    std::cout << "Maximum hourglass sum is: " << maxSum << std::endl;

    return 0;
}