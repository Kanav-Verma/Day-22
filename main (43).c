
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0f;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0f;
        } else {
            float numerator = 2 * i - 1;
            float denominator = 2 * i;
            sum += numerator / denominator;
        }
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}