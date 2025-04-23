#include <stdio.h>

// Define the Point struct
struct Point {
    int x;
    int y;
};

// Function to move the point by dx and dy
void movePoint(struct Point *p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}

// Function to print the point
void printPoint(struct Point p) {
    printf("Point(x = %d, y = %d)\n", p.x, p.y);
}

int main() {
    // Create and initialize a Point
    struct Point myPoint = {3, 4};

    // Print the original point
    printf("Original: ");
    printPoint(myPoint);

    // Move the point using a pointer
    movePoint(&myPoint, 2, -1);

    // Print the updated point
    printf("After moving: ");
    printPoint(myPoint);

    return 0;
}
