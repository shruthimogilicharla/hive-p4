Problem

Given a string S and a character C, check whether all occurrences of C appear together in one continuous block.

Input Format

The first line contains a string S and a character C separated by a space.

Output Format

Print Yes if all occurrences of C appear together; otherwise, print No.

Constraints

1 <= |S| <= 10^3

Example 1

Input

snooze o

Output

Yes
Example 2

Input

ooosnoozeo o

Output

No
Solution in C
#include <stdio.h>

int main() {
    char s[1004], c;
    scanf("%s %c", s, &c);

    int first = -1, last = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    if (first == -1) {
        printf("No");
        return 0;
    }

    for (int i = first; i <= last; i++) {
        if (s[i] != c) {
            printf("No");
            return 0;
        }
    }

    printf("Yes");
    return 0;
}
Explanation
Read the string and character.
Find the first and last positions of the character.
If the character does not occur, print No.
Check every character between the first and last positions.
If any character differs from C, print No.
Otherwise, print Yes.
Time Complexity

O(N), because the string is scanned at most twice.

Space Complexity

O(1), because only a few variables are used.
