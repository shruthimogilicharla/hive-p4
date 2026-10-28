Parking Lot Management System (V1) — Solution in C
Problem

A parking lot has N rows and M columns. Each slot can hold one vehicle. Process five types of queries:

Type 1: Park a vehicle at a given row and column.
Type 2: Remove a vehicle from a given row and column.
Type 3: Display the number of occupied and empty slots.
Type 4: Find the parking location of a vehicle.
Type 5: Check whether the parking lot is full.
C Code
#include <stdio.h>

int main() {
int N, M, Q, type, r, c, x;
int a[10][10] = {0};
int occupied = 0;

```
scanf("%d %d", &N, &M);
scanf("%d", &Q);

for (int q = 1; q <= Q; q++) {
    scanf("%d", &type);

    if (type == 1) {
        scanf("%d %d %d", &r, &c, &x);

        if (a[r][c] != 0) {
            printf("Query-%d: Slot already occupied\n", q);
        } else {
            a[r][c] = x;
            occupied++;

            printf("Query-%d: Vehicle-%d parked at (%d,%d)\n", q, x, r, c);
        }
    }
    else if (type == 2) {
        scanf("%d %d", &r, &c);

        if (a[r][c] == 0) {
            printf("Query-%d: Slot is empty\n", q);
        } else {
            printf("Query-%d: Vehicle-%d removed from (%d,%d)\n",
                   q, a[r][c], r, c);

            a[r][c] = 0;
            occupied--;
        }
    }
    else if (type == 3) {
        printf("Query-%d: Occupied slots = %d, Empty slots = %d\n",
               q, occupied, N * M - occupied);
    }
    else if (type == 4) {
        scanf("%d", &x);
        int found = 0;

        for (r = 0; r < N; r++) {
            for (c = 0; c < M; c++) {
                if (a[r][c] == x) {
                    printf("Query-%d: Slot of Vehicle-%d is (%d,%d)\n",
                           q, x, r, c);
                    found = 1;
                    break;
                }
            }

            if (found)
                break;
        }

        if (!found) {
            printf("Query-%d: Vehicle-%d not found\n", q, x);
        }
    }
    else if (type == 5) {
        if (occupied == N * M) {
            printf("Query-%d: Parking Lot is Full\n", q);
        } else {
            printf("Query-%d: Parking Slots Available\n", q);
        }
    }
}

return 0;
```

}
Example Input
3 5
10
1 1 1 45
1 2 2 32
1 1 1 50
3
4 32
4 30
2 0 1
2 1 1
3
5
Example Output
Query-1: Vehicle-45 parked at (1,1)
Query-2: Vehicle-32 parked at (2,2)
Query-3: Slot already occupied
Query-4: Occupied slots = 2, Empty slots = 13
Query-5: Slot of Vehicle-32 is (2,2)
Query-6: Vehicle-30 not found
Query-7: Slot is empty
Query-8: Vehicle-45 removed from (1,1)
Query-9: Occupied slots = 1, Empty slots = 14
Query-10: Parking Slots Available
Explanation
Use a two-dimensional array to represent the parking lot.
0 means the slot is empty; a nonzero value represents a vehicle ID.
Type 1: Park the vehicle if the slot is empty.
Type 2: Remove the vehicle if the slot is occupied.
Type 3: Calculate empty slots using N * M - occupied.
Type 4: Search the array for the vehicle ID.
Type 5: Compare occupied with N * M to check whether the parking lot is full.
Complexity
Time Complexity: O(N × M) per query in the worst case.
Space Complexity: O(N × M) for the parking array.

