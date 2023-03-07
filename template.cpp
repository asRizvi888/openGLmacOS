#include <GLFW/glfw3.h>
#include <iostream>

using namespace std;

/* we'll write code here */
void draw () {

}

int main (int argc, char** argv) {
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(800, 800, "<WINDOW NAME HERE>", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Set the projection matrix */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 80.0, 0.0, 80.0, -1.0, 1.0);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        // this is to set the background color
        glClearColor(255, 255, 255, 1);

        /* Set the modelview matrix */
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();

        /* this function deals ith drawing */
        draw();

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
