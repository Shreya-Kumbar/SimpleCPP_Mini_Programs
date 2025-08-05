#include <simplecpp>

void drawBranch(Turtle &t, double length, int depth) {
    if (depth == 0) return;

    t.forward(length);

    // Right branch
    t.right(30);
    drawBranch(t, length * 0.7, depth - 1);
    t.left(30);

    // Left branch
    t.left(30);
    drawBranch(t, length * 0.7, depth - 1);
    t.right(30);

    // Go back to previous position
    t.right(180);
    t.forward(length);
    t.left(180);

    drawBranch(t, length*0.5, depth-1);
}

main_program {
    initCanvas();
    Turtle t;
    t.penUp();
    // Move turtle to a lower starting point
    t.moveTo(300, 500);  // Lower y-value = lower on screen
    t.penDown();
    t.left(90);

    drawBranch(t, 100, 7);
    getClick();
}