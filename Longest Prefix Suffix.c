Longest Prefix Suffix — Solution in C
Problem

Given a string S, find the length of the longest proper prefix that is also a suffix.

C Code
Longest Prefix Suffix – C Solution
#include <stdio.h>
#include <string.h>

int main() {
char s[101];
int i, j, n, len = 0;

```
scanf("%s", s);
n = strlen(s);

for (i = 1; i < n; i++) {
    j = 0;

    while (i + j < n && s[j] == s[i + j]) {
        j++;
    }

    if (i + j == n && j > len) {
        len = j;
    }
}

printf("%d\n", len);

return 0;
```

}
Example Input
smartintsmart
Output
5
Explanation
The prefix smart matches the suffix smart.
Its length is 5.
The whole string cannot be considered a proper prefix.
Complexity
Time Complexity: O(N²)
Space Complexity: O(1)

