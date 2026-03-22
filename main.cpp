#include "engine/engine.h"
#include "renderer/renderer.h"
#include "input/input.h"


//  NOTE:   Temporary until direct resizing in-engine is possible
const int TEMP_WINDOW_WIDTH = 1280;
const int TEMP_WINDOW_HEIGHT = 720;

int main()
{
    Engine::initGLFW();

    GLFWwindow* window = glfwCreateWindow(TEMP_WINDOW_WIDTH, TEMP_WINDOW_HEIGHT, "LearnOpenGL", NULL, NULL);

    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;

        glfwTerminate();

        return -1;
    }
    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    glfwSetFramebufferSizeCallback(window, Engine::framebuffer_size_callback);

    Renderer::generateBuffers();

    while (!glfwWindowShouldClose(window))
    {
        Input::processInput(window);
        Input::getDeltaTime();

        Renderer::startRendering();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}