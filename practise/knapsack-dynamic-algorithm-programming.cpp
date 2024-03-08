#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int *knapsackDP(int *w, int *v, int n, int wx) {
    // Allocate memory for the result array
    int *result = (int *)malloc(n * sizeof(int));

    // Create a 2D array to store intermediate results
    int **dp = (int **)malloc((n + 1) * sizeof(int *));
    for (int i = 0; i <= n; i++) {
        dp[i] = (int *)malloc((wx + 1) * sizeof(int));
    }

    // Build the DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= wx; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (w[i - 1] <= j) {
                dp[i][j] = max(v[i - 1] + dp[i - 1][j - w[i - 1]], dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }

            // Print the value calculated at each step
            printf("%2d ", dp[i][j] );
        }
        printf("\n");
    }

    // Backtrack to find the selected items
    int i = n, j = wx;
    while (i > 0 && j > 0) {
        if (dp[i][j] != dp[i - 1][j]) {
            result[i - 1] = 1; // item i-1 is included
            j -= w[i - 1];
        }
        i--;
    }

    // Free memory for the DP table
    for (int i = 0; i <= n; i++) {
        free(dp[i]);
    }
    free(dp);

    return result;
}

int main() {
        
    int n = 5, wx = 11; int w[5] = {1, 2, 5, 6, 7}; int v[5] = {1, 6, 18, 22, 28};

    int *x = knapsackDP(w, v, n, wx);
 
    printf("\nSelected items: ");
    for (int i = 0; i < n; i++) {
        if (x[i] == 1) {
            printf("%d ", i + 1);
        }
    }

    // Free memory for the result array
    free(x);

    return 0;
}
