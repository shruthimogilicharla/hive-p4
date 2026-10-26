## 1. Toggle Case

**Problem:**

Given a string, toggle the case of each character in the given string.

### Input Format

The first and only line contains a string `S`, consisting of lowercase and uppercase characters.

### Output Format

Print the toggled string.

### Constraints

`1 <= len(S) <= 100`

### Example

**Input**

```text
SMartINTERviewS
```

**Output**

```text
smARTinterVIEWs
```

### Solution in C

#include <stdio.h>

int main() {
char s[101];
scanf("%s", s);

for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] = s[i] + 32;
    else
        s[i] = s[i] - 32;
}

printf("%s", s);
return 0;


}

### Explanation

1. Read the string `s`.
2. Loop through each character until the null character `'\0'`.
3. Uppercase and lowercase letters differ by 32 in ASCII (`'A' = 65`, `'a' = 97`).
4. If the character is uppercase, add 32 to make it lowercase.
5. Otherwise, subtract 32 to make it uppercase.
6. Print the modified string.

### Time Complexity

**O(N)**, because each character is visited once.

### Space Complexity

**O(1)**, because the string is changed in place.
