#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int cost1, qty1, cost2, qty2, cost3, qty3;
    int budget;
    float total_before_tax, total_after_tax;

    // Read inputs
    scanf("%d %d", &cost1, &qty1);
    scanf("%d %d", &cost2, &qty2);
    scanf("%d %d", &cost3, &qty3);
    scanf("%d", &budget);

    // Calculate total before tax
    total_before_tax = (cost1 * qty1) + (cost2 * qty2) + (cost3 * qty3);

    // Add 10% tax
    total_after_tax = total_before_tax * 1.10;

    // Print totals
    printf("Total (Before Tax): %.2f\n", total_before_tax);
    printf("Total (After Tax): %.2f\n", total_after_tax);

    // Check budget
    if (total_after_tax <= budget) {
        printf("Within Budget");
    } else {
        printf("Over Budget");
    }
    return 0;
}
