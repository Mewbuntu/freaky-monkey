#include "input.h"

std::chrono::steady_clock::time_point lastUpdate;

float deltaTime = 0.0f;

void Input::processInput(GLFWwindow* window)
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
	{
		glfwSetWindowShouldClose(window, true);
	}
}

void Input::getDeltaTime()
{
	auto now = std::chrono::steady_clock::now();

	deltaTime = std::chrono::duration_cast<std::chrono::microseconds>(now - lastUpdate).count() / 1000000.0f;

	lastUpdate = now;
}
