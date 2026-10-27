Problem.

Given a string S containing letters and digits, calculate its weight.

The weight is the sum of the ASCII values of all letters plus the numeric values of all digits.

Input Format

The first and only line contains a string S.

Output Format

Print the weight of the string.

Constraints
1 <= S.length() <= 100000
S[i] is in a-z, A-Z, or 0-9.
Example

Input

Aa27Z5

Output

266
Solution in C
#include <stdio.h>

char s[100005];

int main() {
    scanf("%s", s);

    long long sum = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9')
            sum += s[i] - '0';
        else
            sum += s[i];
    }

    printf("%lld\n", sum);
    return 0;
}
Explanation
Read the string.
Initialize sum to zero.
If the character is a digit, subtract '0' to obtain its numeric value.
Otherwise, add the character's ASCII value.
Print the total weight.

For Aa27Z5:

A = 65
a = 97
2 = 2
7 = 7
Z = 90
5 = 5

Total = 65 + 97 + 2 + 7 + 90 + 5 = 266.

Time Complexity

O(N), because each character is visited once.

Space Complexity

O(N), for storing the input string.
