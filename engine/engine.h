#pragma once
#ifndef ENGINE_H
#define ENGINE_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Engine
{
	void initGLFW();
	void framebuffer_size_callback(GLFWwindow* window, int width, int height);
}

#endif // !ENGINE_H
