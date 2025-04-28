#include<stdio.h>
#include<string.h>

int main() {
    char S[10000001]; 
    scanf("%s", S);

    int counts[26] = {0}; 
    int len = strlen(S);

    for (int i = 0; i < len; i++) {
        counts[S[i] - 'a']++; //here we are subtracting ascii value of 'a' from the character to get the index of the array. then incrementing the value of that index.
    }

    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            printf("%c : %d\n", 'a' + i, counts[i]); //here we are adding ascii value of 'a' to the index of the array to get the character.
        }
    }

    return 0;
}




