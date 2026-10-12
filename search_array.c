#include <stdio.h>

int main() {
    int a[100], n, i, key;
    int found = 0, low, high, mid;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size!");
        return 0;
    }

    printf("Enter sorted array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Linear Search: Found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Linear Search: Element not found\n");

    low = 0;
    high = n - 1;
    found = 0;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (a[mid] == key) {
            printf("Binary Search: Found at position %d\n", mid + 1);
            found = 1;
            break;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found)
        printf("Binary Search: Element not found\n");

    return 0;
}
