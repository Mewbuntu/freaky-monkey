#pragma once
#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include <chrono>

#include "../engine/engine.h"

extern float deltaTime;

namespace Input
{
	void processInput(GLFWwindow* window);
	void getDeltaTime();
}

#endif // !INPUT_H
