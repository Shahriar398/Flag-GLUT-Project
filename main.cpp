#include <GL/freeglut.h>

void display() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Background: white
    glClear(GL_COLOR_BUFFER_BIT);

    // ===== Blue Background =====
    glColor3f(0.0, 0.4, 0.7); // Swedish blue
    glBegin(GL_POLYGON);
        glVertex2f(-0.8f, -0.5f);
        glVertex2f(0.8f, -0.5f);
        glVertex2f(0.8f, 0.5f);
        glVertex2f(-0.8f, 0.5f);
    glEnd();

    // ===== Yellow Cross (Vertical Bar) =====
    glColor3f(1.0, 0.8, 0.0); // Swedish yellow
    glBegin(GL_POLYGON);
        glVertex2f(-0.2f, -0.5f);
        glVertex2f(-0.1f, -0.5f);
        glVertex2f(-0.1f, 0.5f);
        glVertex2f(-0.2f, 0.5f);
    glEnd();

    // ===== Yellow Cross (Horizontal Bar) =====
    glBegin(GL_POLYGON);
        glVertex2f(-0.8f, -0.05f);
        glVertex2f(0.8f, -0.05f);
        glVertex2f(0.8f, 0.05f);
        glVertex2f(-0.8f, 0.05f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Flag of Sweden");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
