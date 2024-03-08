#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int index;
    double valueWeightRatio;
} Item;

int compareItems(const void *a, const void *b) {
    double ratioA = ((Item *)a)->valueWeightRatio;
    double ratioB = ((Item *)b)->valueWeightRatio;
    return (ratioB > ratioA) - (ratioB < ratioA);
}

int *knapsackGreedy(int *w, int *v, int n, int wx) {
    // Allocate memory for the result array
    int *result = (int *)calloc(n, sizeof(int));

    // Create an array of Items with their index and value-to-weight ratio
    Item *items = (Item *)malloc(n * sizeof(Item));
    for (int i = 0; i < n; i++) {
        items[i].index = i;
        items[i].valueWeightRatio = (double)v[i] / w[i];
    }

    // Sort the items based on value-to-weight ratio in descending order
    qsort(items, n, sizeof(Item), compareItems);

    // Greedy algorithm to fill the knapsack
    int currentWeight = 0;
    for (int i = 0; i < n; i++) {
        int currentItemIndex = items[i].index;
        if (currentWeight + w[currentItemIndex] <= wx) {
            result[currentItemIndex] = 1; // Include the item
            currentWeight += w[currentItemIndex];
        }
    }

    // Free memory for the items array
    free(items);

    return result;
}

int main() {
    int n = 8, wx = 14;
    int w[8] = {1, 2, 3, 5, 7, 8, 9, 9};
    int v[8] = {3, 7, 14, 21, 23, 25, 28, 31};

    int *x = knapsackGreedy(w, v, n, wx);

    printf("Selected items: ");
    for (int i = 0; i < n; i++) {
        if (x[i] == 1) {
            printf("%d ", i + 1);
        }
    }

    // Free memory for the result array
    free(x);

    return 0;
}
