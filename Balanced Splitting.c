Problem.

A balanced string contains an equal number of L and R characters.

Given a balanced string S, split it into substrings so that each substring is balanced. Print the maximum number of balanced substrings.

Input Format

The first and only line contains a string S.

Output Format

Print the maximum number of balanced substrings.

Constraints

2 <= len(S) <= 1000

Example

Input

LRRLLLLRRLRR

Output

3
Solution in C
#include <stdio.h>

int main() {
    char s[1001];
    scanf("%s", s);

    int l = 0, r = 0, count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'L')
            l++;
        else
            r++;

        if (l == r) {
            count++;
            l = 0;
            r = 0;
        }
    }

    printf("%d", count);
    return 0;
}
Explanation
Read the string.
Initialize counters l, r, and count to zero.
Count the occurrences of L and R.
Whenever l == r, a balanced substring is found.
Increase count and reset both counters.
Print count.
Time Complexity

O(N), because each character is visited once.

Space Complexity

O(1), because only three counters are used.
