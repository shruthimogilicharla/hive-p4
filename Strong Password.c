Problem

Find the minimum number of characters to add to a password so that it satisfies these conditions:

At least 6 characters.
At least one digit.
At least one lowercase character.
At least one uppercase character.
At least one special character from !@#$%^&*()-+.
Input Format

The first and only line contains a string P.

Output Format

Print the minimum number of characters that must be added.

Constraints

1 <= len(P) <= 50

Example

Input

He!!0

Output

1
Solution in C
#include <stdio.h>
#include <string.h>

int main() {
    char p[51];
    scanf("%s", p);

    int n = strlen(p);
    int digit = 0, lower = 0, upper = 0, special = 0;

    for (int i = 0; p[i] != '\0'; i++) {
        if (p[i] >= '0' && p[i] <= '9')
            digit = 1;
        else if (p[i] >= 'a' && p[i] <= 'z')
            lower = 1;
        else if (p[i] >= 'A' && p[i] <= 'Z')
            upper = 1;
        else
            special = 1;
    }

    int missing = (digit == 0) + (lower == 0) +
                  (upper == 0) + (special == 0);

    int length = 6 - n;

    if (length < 0)
        length = 0;

    if (missing > length)
        printf("%d", missing);
    else
        printf("%d", length);

    return 0;
}
Explanation
Read the password and calculate its length.
Use four flags to check for digits, lowercase letters, uppercase letters, and special characters.
Count how many character types are missing.
Calculate how many characters are needed to reach length 6.
Print the larger of the missing character types and the required length.
Time Complexity

O(N), because each character is checked once.

Space Complexity

O(1), because only a few counters and flags are used.
