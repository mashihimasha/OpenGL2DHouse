#include <Windows.h>
#include <glut.h>

void displayFunction() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.0);

	//y-axis line
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.0, 1.0);
	glVertex2f(0.0, -1.0);
	glEnd();

	//x-axis line
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(-1.0, 0.0);
	glEnd();

	//house roof
	glBegin(GL_TRIANGLES);
	glColor3f(0.8, 0.5, 0.2);
	glVertex2f(0.0, 0.7);//top
	glVertex2f(-0.6, 0.1);//left
	glVertex2f(0.6, 0.1);//right
	glEnd();

	//house chimney
	glBegin(GL_QUADS);
	glColor3f(0.65, 0.16, 0.16);
	glVertex2f(0.4, 0.5);//top left
	glVertex2f(0.5, 0.5);//top right
	glVertex2f(0.5, 0.2);//lower right
	glVertex2f(0.4, 0.2);//lower left
	glEnd();

	//house rectangle
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 0.5);
	glVertex2f(-0.55, 0.1);//top left
	glVertex2f(0.55, 0.1);//top right
	glVertex2f(0.55, -0.8);//lower right
	glVertex2f(-0.55, -0.8);//lower left
	glEnd();

	//house door
	glBegin(GL_QUADS);
	glColor3f(0.65, 0.16, 0.16);
	glVertex2f(-0.1, -0.1);//top left
	glVertex2f(0.1, -0.1);//top right
	glVertex2f(0.1, -0.8);//lower right
	glVertex2f(-0.1, -0.8);//lower left
	glEnd();

	//house window left
	glBegin(GL_QUADS);
	glColor3f(0.99, 0.99, 0.89);
	glVertex2f(-0.45, -0.2);//top left
	glVertex2f(-0.2, -0.2);//top right
	glVertex2f(-0.2, -0.45);//lower right
	glVertex2f(-0.45, -0.45);//lower left
	glEnd();

	//window line
	//x-axis line top
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-0.45, -0.2);//top left
	glVertex2f(-0.2, -0.2);//top right
	glEnd();

	//x-axis line bottom
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-0.45, -0.45);//lower left
	glVertex2f(-0.2, -0.45);//lower right
	glEnd();

	//y-axis line left
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-0.45, -0.2);//top left
	glVertex2f(-0.45, -0.45);//lower left
	glEnd();

	//y-axis line right
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-0.2, -0.2);//top right
	glVertex2f(-0.2, -0.45);//lower right
	glEnd();

	//y-axis line middle
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-0.325, -0.2);//top 
	glVertex2f(-0.325, -0.45);//lower 
	glEnd();

	//x-axis line middle
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-0.45, -0.325);//right 
	glVertex2f(-0.2, -0.325);//left 
	glEnd();


	//house window right ------
	glBegin(GL_QUADS);
	glColor3f(0.99, 0.99, 0.89);
	glVertex2f(0.2, -0.2);//top left
	glVertex2f(0.45, -0.2);//top right
	glVertex2f(0.45, -0.45);//lower right
	glVertex2f(0.2, -0.45);//lower left
	glEnd();


	//window line
	//x-axis line top
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0.45, -0.2);//top left
	glVertex2f(0.2, -0.2);//top right
	glEnd();

	//x-axis line bottom
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0.45, -0.45);//lower left
	glVertex2f(0.2, -0.45);//lower right
	glEnd();

	//y-axis line left
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0.45, -0.2);//top left
	glVertex2f(0.45, -0.45);//lower left
	glEnd();

	//y-axis line right
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0.2, -0.2);//top right
	glVertex2f(0.2, -0.45);//lower right
	glEnd();

	//y-axis line middle
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0.325, -0.2);//top 
	glVertex2f(0.325, -0.45);//lower 
	glEnd();

	//x-axis line middle
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0.45, -0.325);//right 
	glVertex2f(0.2, -0.325);//left 
	glEnd();

	//garden trapezium
	glBegin(GL_QUADS);
	glColor3f(0, 0.62, 0.42);
	glVertex2f(-0.55, -0.8);//top left
	glVertex2f(0.55, -0.8);//top right
	glVertex2f(0.60, -0.9);//lower right
	glVertex2f(-0.60, -0.9);//lower left
	glEnd();

	glFlush();
}

int main(int argsc, char** argsv) {

	//glut initialization
	glutInit(&argsc, argsv);
	glutInitDisplayMode(GLUT_SINGLE);


	//create display window
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(720, 480);
	glutCreateWindow("OpenGL 2D House");

	//create graphic
	glutDisplayFunc(displayFunction);
	glutMainLoop();
	return 0;
}