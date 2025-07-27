#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int totalBoosters = 0;

    for (int i = 1; i < N; i++) {
        if (A[i] < A[i - 1]) {
            int diff = A[i - 1] - A[i];

            // Use Booster-A as much as possible
            int useA = (diff <= X) ? diff : X;
            X -= useA;

            // Remaining diff use Booster-B (2 per km/h)
            int remaining = diff - useA;
            totalBoosters += useA + (2 * remaining);

            // Update speed after boosting
            A[i] = A[i - 1];
        }
    }

    printf("%d\n", totalBoosters);
    return 0;
}
