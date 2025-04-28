#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        char s[101], t[101];
        scanf("%s %s", s, t);
        int i = 0, j = 0;
        int len1 = strlen(s);
        int len2 = strlen(t);

        while(i < len1 || j < len2) {
            if(i < len1) {
                printf("%c", s[i]);
                i++;
            }
            if(j < len2) {
                printf("%c", t[j]);
                j++;
            }
        }
        printf("\n");
    }
    return 0;
}
