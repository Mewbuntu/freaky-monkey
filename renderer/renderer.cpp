#include "renderer.h"

float verts_triangle[] =
{
	-0.5, -0.5, 0.0f,
	 0.5, -0.5, 0.0f,
	 0.0f, 0.5f, 0.0f
};

void Renderer::generateBuffers()
{
	unsigned int VBO;

	glGenBuffers(1, &VBO);

	glBindBuffer(GL_ARRAY_BUFFER, VBO);

	glBufferData(GL_ARRAY_BUFFER, sizeof(verts_triangle), verts_triangle, GL_STATIC_DRAW);
}

void Renderer::startRendering()
{
	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
}