#pragma once
#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include <chrono>

#include "../engine/engine.h"

namespace NEInput
{
	void processInput(GLFWwindow* window);
	void getDeltaTime();

	extern float deltaTime;
}

#endif // !INPUT_H
