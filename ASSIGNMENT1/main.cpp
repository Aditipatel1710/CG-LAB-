#include <graphics.h>
#include <iostream>

int main() {
    // 1. Initialize the graphics window (Width: 800, Height: 600)
    initwindow(800, 600, "CGM Lab Assignment 1 - Basic Graphics Primitives");

    // Title Header
    setcolor(YELLOW);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(130, 25, (char*)"CGM LAB ASSIGNMENT 1: BASIC SHAPES");

    // Subtitle divider line
    setcolor(DARKGRAY);
    line(50, 60, 750, 60);

    // Grid divider lines dividing the canvas into 4 quadrants
    setcolor(DARKGRAY);
    line(400, 75, 400, 545); // Vertical split
    line(50, 305, 750, 305); // Horizontal split

    // Outer border
    rectangle(50, 75, 750, 545);

    // Set text style for labels
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);

    // -------------------------------------------------------------
    // Primitive 1: Straight Line (Top-Left Quadrant)
    // -------------------------------------------------------------
    setcolor(LIGHTCYAN);
    outtextxy(80, 95, (char*)"1. Straight Line: line(x1, y1, x2, y2)");
    setcolor(GREEN);
    line(100, 240, 340, 140);
    // Annotate end points
    setcolor(WHITE);
    outtextxy(90, 250, (char*)"(100, 240)");
    outtextxy(310, 125, (char*)"(340, 140)");

    // -------------------------------------------------------------
    // Primitive 2: Circle (Top-Right Quadrant)
    // -------------------------------------------------------------
    setcolor(LIGHTCYAN);
    outtextxy(430, 95, (char*)"2. Circle: circle(xc, yc, radius)");
    setcolor(LIGHTMAGENTA);
    circle(580, 195, 65);
    // Center point marker & annotation
    setcolor(YELLOW);
    circle(580, 195, 2);
    setcolor(WHITE);
    outtextxy(540, 205, (char*)"Center(580, 195), r=65");

    // -------------------------------------------------------------
    // Primitive 3: Rectangle (Bottom-Left Quadrant)
    // -------------------------------------------------------------
    setcolor(LIGHTCYAN);
    outtextxy(80, 325, (char*)"3. Rectangle: rectangle(l, t, r, b)");
    setcolor(YELLOW);
    rectangle(110, 365, 330, 495);
    // Corner annotations
    setcolor(WHITE);
    outtextxy(95, 350, (char*)"(110, 365)");
    outtextxy(310, 505, (char*)"(330, 495)");

    // -------------------------------------------------------------
    // Primitive 4: Triangle (Bottom-Right Quadrant)
    // -------------------------------------------------------------
    setcolor(LIGHTCYAN);
    outtextxy(430, 325, (char*)"4. Triangle: 3 Connected Lines");
    setcolor(LIGHTRED);
    // Vertices: P1(580, 360), P2(470, 500), P3(690, 500)
    line(580, 360, 470, 500); // Side 1
    line(470, 500, 690, 500); // Side 2
    line(690, 500, 580, 360); // Side 3
    // Vertices annotations
    setcolor(WHITE);
    outtextxy(560, 345, (char*)"P1(580, 360)");
    outtextxy(425, 510, (char*)"P2(470, 500)");
    outtextxy(650, 510, (char*)"P3(690, 500)");

    // Automatically save screenshot of the program output
    writeimagefile("cgm_assignment1_output.bmp");

    // Footer instruction
    setcolor(LIGHTGRAY);
    outtextxy(280, 565, (char*)"Press any key to close window...");

    // Wait for user keypress
    getch();

    // Close the graphics window
    closegraph();
    return 0;
}
