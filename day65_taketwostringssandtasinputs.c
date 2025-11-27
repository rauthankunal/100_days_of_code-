#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    scanf("%s %s", s, t);

    int freqS[26] = {0}, freqT[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
        freqS[s[i] - 'a']++;

    for (int i = 0; t[i] != '\0'; i++)
        freqT[t[i] - 'a']++;

    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freqS[i] != freqT[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}
