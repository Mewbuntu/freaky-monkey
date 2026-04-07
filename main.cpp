#include "engine/engine.h"
#include "renderer/renderer.h"
#include "input/input.h"

//  NOTE:   Temporary until direct resizing in-engine is possible
const int TEMP_WINDOW_WIDTH = 1280;
const int TEMP_WINDOW_HEIGHT = 720;

int main()
{
    NEEngine::initGLFW();

    GLFWwindow* window = glfwCreateWindow(TEMP_WINDOW_WIDTH, TEMP_WINDOW_HEIGHT, "Window", NULL, NULL);

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

    glfwSetFramebufferSizeCallback(window, NEEngine::framebuffer_size_callback);

    std::cout << "Starting Program..." << std::endl;

    NERenderer::doShaderCrap();

    //  Main loop
    while (!glfwWindowShouldClose(window))
    {
        NEInput::processInput(window);
        NEInput::getDeltaTime();

        std::cout << NEInput::deltaTime * 2 << std::endl;

        NERenderer::startRendering();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    std::cout << "Program ending..." << std::endl;

    glfwTerminate();

    return 0;
}