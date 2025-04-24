#include <stdio.h>
#include <limits.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T > 0) {
        int N;
        scanf("%d", &N);
        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        int min_sum = INT_MAX;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int current = A[i] + A[j] + (j + 1) - (i + 1); 
                if (current < min_sum) {
                    min_sum = current;
                }
            }
        }
        printf("%d\n", min_sum);
        T--;
    }
    
    return 0;
}