#include <GL/glut.h>
#include <iostream>

// Function to initialize OpenGL settings
void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0); // Set background color to white
    glMatrixMode(GL_PROJECTION);      // Set the projection matrix mode
    glLoadIdentity();                 // Reset the projection matrix
    gluOrtho2D(0.0, 640.0, 0.0, 480.0); // Define a 2D orthographic projection
}

// Function to display graphics
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the screen
    glColor3f(1.0, 0.0, 0.0);       // Set drawing color to red
    glPointSize(2.0);               // Set point size

    // Draw a triangle pointing upwards in the center of the window
    glBegin(GL_TRIANGLES);
    glVertex2i(320, 400); // Top vertex
    glVertex2i(220, 200); // Bottom-left vertex
    glVertex2i(420, 200); // Bottom-right vertex
    glEnd();

    glFlush(); // Render the graphics
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv); // Initialize GLUT

    // Set window size and position
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(10, 10);

    // Create window with title "Omiros"
    glutCreateWindow("Omiros");

    // Initialize OpenGL settings
    init();

    // Set the display function
    glutDisplayFunc(display);

    // Start the main event loop
    glutMainLoop();
    return 0;
}
