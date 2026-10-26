4. Anagram Basic
Problem

Given two strings A and B consisting of lowercase characters, check whether they are anagrams.

An anagram is a rearrangement of the letters of one word to form another word.

Input Format

The first line contains string A.

The second line contains string B.

Output Format

Print TRUE if the strings are anagrams; otherwise, print FALSE.

Constraints

1 <= len(A), len(B) <= 10^4

Example

Input

smartinterviews
viewsintersmart

Output

TRUE
Solution in C
#include <stdio.h>
#include <string.h>

int main() {
    char A[10001], B[10001];
    int count[26] = {0};

    scanf("%s", A);
    scanf("%s", B);

    if (strlen(A) != strlen(B)) {
        printf("FALSE");
        return 0;
    }

    for (int i = 0; A[i] != '\0'; i++) {
        count[A[i] - 'a']++;
        count[B[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("FALSE");
            return 0;
        }
    }

    printf("TRUE");
    return 0;
}
Explanation
Read both strings.
If their lengths differ, print FALSE.
Create an array of 26 integers to count letters.
Increase the count for each letter in A.
Decrease the count for each letter in B.
If any count is nonzero, print FALSE.
Otherwise, print TRUE.
Time Complexity

O(N), where N is the length of the strings, assuming equal lengths.

Space Complexity

O(1), because the count array always contains 26 integers.
