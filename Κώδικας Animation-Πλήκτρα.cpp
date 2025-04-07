
#include <GL/glut.h>

#include <iostream>
#include <cmath>
#include "Cycle.h"


using namespace std;

float circleX = 320;
float circleY = 240;
float radius = 50;
float speedY = 2;       // + ����, -����
float Red = 1.0;


// ��������� ��� ����� ��� �����������
void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);

    //glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);        // ����� buffer
}

// ��������� ���������� 
void update(int value) {

    circleY += speedY;

    // �� ���������� ����
    if ( circleY+radius > 480 ) {
        speedY *= -1;
        Red -= 0.1;
    }

    // �� ���������� ����
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

    glVertex2f(circleX, circleY);             // �� ������� ��� ������� ��� ������
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

    // ������� ��� ���� ���������
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(10, 10);

    // ������ ���������
    glutCreateWindow("Omiros");

    // ������������
    init();
    

    // ������� ���������� ���������
    glutDisplayFunc(display);

    // ������� ���������� ����������
    glutTimerFunc(0, update, 0);

    // ������� ���������� ��������
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(specialkeyboard);

    // ������ ���������
    glutMainLoop();
    return 0;
}