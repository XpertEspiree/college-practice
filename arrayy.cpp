//WAP to read an array of integer using DMA & display the maximum & minimum value

#include <stdio.h>
#include <stdlib.h>

void minmax(int *num, int n);

int main() {
    int n, i;
    int *num;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    num = (int*) calloc(n, sizeof(int));

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    minmax(num, n);

    return 0;
}

void minmax(int *num, int n) {
    int i, min, max;

    min = max = num[0];

    for(i = 1; i < n; i++) {
        if(num[i] > max) {
            max = num[i];
        }
        if(num[i] < min) {
            min = num[i];
        }
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
}
