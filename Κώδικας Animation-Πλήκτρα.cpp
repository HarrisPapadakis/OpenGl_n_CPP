
#include <GL/glut.h>

#include <iostream>
#include <cmath>
#include "Cycle.h"


using namespace std;

float circleX = 320;
float circleY = 240;
float radius = 50;
float speedY = 2;       // + πάνω, -κάτω
float Red = 1.0;


// Συνάρτηση που κάνει την αρχικοποίση
void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);

    //glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);        // διπλό buffer
}

// Συνάρτηση ενημέρωσης 
void update(int value) {

    circleY += speedY;

    // Αν ακουμπήσει πάνω
    if ( circleY+radius > 480 ) {
        speedY *= -1;
        Red -= 0.1;
    }

    // Αν ακουμπήσει κάτω
    if (circleY - radius < 0 ) {
        speedY *= -1;
        Red -= 0.1;
    }
    
    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

void keyboard(unsigned char key, int x, int y) {

    if (key == 'a') {
        speedY++;
    }
    if (key == 'b') {
        speedY--;
    }
}

void specialkeyboard(int key, int x, int y) {

    if (key == GLUT_KEY_UP) {
        Red += 1;
    }
    if (key == GLUT_KEY_DOWN) {
        Red -= 1;
    }
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(Red, 0.0, 0.0);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(circleX, circleY);             // το σημείου του κέντρου του κύκλου
    for (int i = 0; i <= 360; i++) {
        float theta = i * 3.1415 / 180.0f;
        float x = circleX + radius * cos(theta);
        float y = circleY + radius * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();


    glutSwapBuffers(); //glFlush();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    // Μέγεθος και θέση παραθύρου
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(10, 10);

    // Τιτλος παραθύρου
    glutCreateWindow("Omiros");

    // Αρχικοποίηση
    init();
    

    // Ορισμός συνάρτησης εμφάνισης
    glutDisplayFunc(display);

    // Ορισμός συνάρτησης ενημέρωσης
    glutTimerFunc(0, update, 0);

    // Ορισμός συνάρτησης πλήκτρων
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(specialkeyboard);

    // Βασική συνάρτηση
    glutMainLoop();
    return 0;
}