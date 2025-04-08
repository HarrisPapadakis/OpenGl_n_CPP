
#include <GL/glut.h>

#include <iostream>

// ��������� ��� ����� ��� �����������
void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}



void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(2.0);

    // ���������� ��� ������� upwards in the center of the window
    glBegin(GL_TRIANGLES);
    glVertex2i(320, 400);
    glVertex2i(220, 200);
    glVertex2i(420, 200);
    glEnd();

    glFlush();
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

    // ������ ���������
    glutMainLoop();
    return 0;
}