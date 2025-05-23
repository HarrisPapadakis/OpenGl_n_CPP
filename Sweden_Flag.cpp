#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // ���� �����
    glColor3f(0.0f, 0.36f, 0.7f); // ���� ��� ��������
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();

    // ������� ������� �������
    glColor3f(1.0f, 0.85f, 0.0f); // ������� ��� �������
    glBegin(GL_QUADS);
    glVertex2f(-0.6f, 1.0f);
    glVertex2f(-0.4f, 1.0f);
    glVertex2f(-0.4f, -1.0f);
    glVertex2f(-0.6f, -1.0f);
    glEnd();

    // ������� ���������� �������
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, 0.1f);
    glVertex2f(1.0f, 0.1f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(-1.0f, -0.1f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("������ ��������");
    glutInitWindowSize(600, 400);
    glutInitWindowPosition(100, 100);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
