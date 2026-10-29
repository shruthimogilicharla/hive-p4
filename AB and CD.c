Problem.

Given a string S, repeatedly remove occurrences of the substrings AB or CD.

After each removal, the remaining characters join together, potentially forming new removable pairs.

Print the minimum possible length of the final string.

Input Format

The first and only line contains a string S.

Output Format

Print the minimum possible length of the string.

Constraints
'A' <= S[i] <= 'Z'
1 <= N <= 500
Example

Input

CCAAABBBDE

Output

2
Solution in C
#include <stdio.h>

int main() {
    char s[501], stack[501];
    scanf("%s", s);

    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (top >= 0 &&
            ((stack[top] == 'A' && s[i] == 'B') ||
             (stack[top] == 'C' && s[i] == 'D'))) {
            top--;
        } else {
            stack[++top] = s[i];
        }
    }

    printf("%d", top + 1);
    return 0;
}
Explanation
Read the string.
Use a stack to store characters that have not been removed.
Initialize top = -1, indicating an empty stack.
For each character, check whether it forms AB or CD with the stack's top character.
If it forms either pair, remove the top character.
Otherwise, push the current character onto the stack.
Print top + 1, which is the remaining string length.
Time Complexity

O(N), because each character is pushed and popped at most once.

Space Complexity

O(N), for the stack.
