Problem

A college has three subjects:

CPP — Subject ID 101
Java — Subject ID 201
Python — Subject ID 301

Process four types of queries:

Update a student's marks in all three subjects.
Display the student's marks in all subjects.
Display the student's marks in a particular subject.
Calculate the student's average marks to two decimal places.

If the student's marks have not been updated, print Student Marks are not updated yet.

C Code
Student Management System – C Solution
#include <stdio.h>

int main() {
int Q, type, x, m1, m2, m3, y, q;
int a[61][3];

```
for (int i = 0; i <= 60; i++) {
    for (int j = 0; j < 3; j++) {
        a[i][j] = -1;
    }
}

scanf("%d", &Q);

for (q = 1; q <= Q; q++) {
    scanf("%d", &type);

    if (type == 1) {
        scanf("%d %d %d %d", &x, &m1, &m2, &m3);

        a[x][0] = m1;
        a[x][1] = m2;
        a[x][2] = m3;

        printf("Query-%d: Student Marks added with Student Id = %d\n", q, x);
    }
    else if (type == 2) {
        scanf("%d", &x);

        if (a[x][0] == -1) {
            printf("Query-%d: Student Marks are not updated yet\n", q);
        } else {
            printf("Query-%d: Marks of Student-%d in CPP, Java, Python are %d, %d, %d respectively\n",
                   q, x, a[x][0], a[x][1], a[x][2]);
        }
    }
    else if (type == 3) {
        scanf("%d %d", &x, &y);

        if (a[x][0] == -1) {
            printf("Query-%d: Student Marks are not updated yet\n", q);
        }
        else if (y == 101) {
            printf("Query-%d: Marks of Student-%d in CPP is %d\n", q, x, a[x][0]);
        }
        else if (y == 201) {
            printf("Query-%d: Marks of Student-%d in Java is %d\n", q, x, a[x][1]);
        }
        else if (y == 301) {
            printf("Query-%d: Marks of Student-%d in Python is %d\n", q, x, a[x][2]);
        }
    }
    else if (type == 4) {
        scanf("%d", &x);

        if (a[x][0] == -1) {
            printf("Query-%d: Student Marks are not updated yet\n", q);
        } else {
            double avg = (a[x][0] + a[x][1] + a[x][2]) / 3.0;

            printf("Query-%d: Average Marks of Student-%d is %.2f\n", q, x, avg);
        }
    }
}

return 0;
```

}
Example Input
8
1 4 67 98 76
3 15 301
1 15 46 70 83
3 15 301
2 4
1 34 90 53 75
4 34
4 35
Example Output
Query-1: Student Marks added with Student Id = 4
Query-2: Student Marks are not updated yet
Query-3: Student Marks added with Student Id = 15
Query-4: Marks of Student-15 in Python is 83
Query-5: Marks of Student-4 in CPP, Java, Python are 67, 98, 76 respectively
Query-6: Student Marks added with Student Id = 34
Query-7: Average Marks of Student-34 is 72.67
Query-8: Student Marks are not updated yet
Explanation
Create a 61 × 3 array to store marks for student IDs from 1 to 60.
Initialize all marks to -1, indicating that marks have not been entered.
Type 1: Store marks for all three subjects.
Type 2: Display all three marks.
Type 3: Display marks for the requested subject ID.
Type 4: Calculate the average using division by 3.0 and print two decimal places.
Complexity
Time Complexity: O(Q)
Space Complexity: O(1) because the array has a fixed size.

