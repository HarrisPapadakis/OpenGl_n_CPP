#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Σχεδίαση του σώματος του σπιτιού
    glColor3f(0.7f, 0.3f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5f, 0.2f);
    glVertex2f(-0.5f, 0.2f);
    glEnd();

    // Σχεδίαση της στέγης
    glColor3f(0.8f, 0.1f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.6f, 0.2f);
    glVertex2f(0.6f, 0.2f);
    glVertex2f(0.0f, 0.7f);
    glEnd();

    // Σχεδίαση της καμινάδας
    glColor3f(0.5f, 0.2f, 0.2f);
    glBegin(GL_QUADS);
    glVertex2f(0.2f, 0.35f);
    glVertex2f(0.35f, 0.35f);
    glVertex2f(0.35f, 0.6f);
    glVertex2f(0.2f, 0.6f);
    glEnd();

    // Σχεδίαση της πόρτας
    glColor3f(0.3f, 0.1f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.15f, -0.5f);
    glVertex2f(0.15f, -0.5f);
    glVertex2f(0.15f, -0.1f);
    glVertex2f(-0.15f, -0.1f);
    glEnd();

    glFlush();
}

void init() {
    glClearColor(0.5f, 0.8f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("House with Chimney");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}