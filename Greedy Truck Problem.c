#include <stdio.h>


typedef struct item {
    int weight;
    int value;
    float ratio;
} Item;


int compare_items(const void *a, const void *b) {
    Item *item_a = (Item *)a;
    Item *item_b = (Item *)b;
    if (item_a->ratio > item_b->ratio) {
        return -1;
    } else if (item_a->ratio < item_b->ratio) {
        return 1;
    } else {
        return 0;
    }
}

// Function to perform the fractional knapsack problem using a greedy algorithm
double fractionalKnapsack(int n, double W, double w[], double v[]) {

    // Calculate the value-to-weight ratio for each item
    // Your code here

    // Sort the items in descending order of their value-to-weight ratio
   // Your code here

    // Take items into the truck until the weight capacity is reached
    // Your code here



     Item items[n];
    for (int i = 0; i < n; i++) {
        items[i].weight = w[i];
        items[i].value = v[i];
        items[i].ratio = (float)v[i] / (float)w[i];
    }
    qsort(items, n, sizeof(Item), compare_items);
    float total_value = 0.0;
    int total_weight = 0;
    for (int i = 0; i < n; i++) {
        if (total_weight + items[i].weight <= W) {
            total_weight += items[i].weight;
            total_value += items[i].value;
        } else {
            int weight_remaining = W - total_weight;
            total_weight += weight_remaining;
            total_value += items[i].ratio * weight_remaining;
            break;
        }
    }
    return total_value;
}

int main() {
    int n, i;
    double W;

    scanf("%d", &n);

    double w[n], v[n];

    for (i = 0; i < n; i++) {

        scanf("%lf %lf", &w[i], &v[i]);
    }


    scanf("%lf", &W);

    // Compute the maximum value that can be transported within the weight capacity
    double maxProfit = fractionalKnapsack(n, W, w, v);

    printf("%.2lf\n", maxProfit);

    return 0;
}
