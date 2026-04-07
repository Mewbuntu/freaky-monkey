#pragma once
#ifndef ENGINE_H
#define ENGINE_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace NEEngine
{
	void createVertexShader(unsigned int vertexShader, const char* vertexShaderSource);
	void createFragmentShader(unsigned int fragmentShader, const char* fragmentShaderSource);
	void initGLFW();
	void framebuffer_size_callback(GLFWwindow* window, int width, int height);
	// void makeShaderProgram();
}

#endif // !ENGINE_H
