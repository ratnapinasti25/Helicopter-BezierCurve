#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2;
	float angle = 0;
	float rute_x[27] =
	{
		0, 0, 0,
		0, 0, 0,
		0, -5, -5,
		-10, -10, -5,
		-5, 0, 0,
		5, 5, 10,
		10, 5, 5,
		5, 5, 0,
		0, 0, 0
	};

	float rute_y[27] =
	{
		0, 0, 5,
		5, 10, 10,
		10, 15, 15,
		20, 20, 25,
		25, 25, 25,
		25, 25, 20,
		20, 15, 15,
		10, 10, 5,
		5, 0, 0
	};

	int ukuranBC = 27;
	int skalaBC = 3;
	int idxPos = 0;
	float px = 0;
	float py = 0;
	float segment = 0;
	bool translate = false;
	float segmentCount = 600;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	void BuildColoredCube();
	void BuildColoredCube1();
	void BuildColoredCube2();
	void BuildColoredCube3();
	void BuildColoredCube4();
	void BuildColoredPlane();
	void DrawColoredCube();
	void DrawColoredCube1();
	void DrawColoredCube2();
	void DrawColoredCube3();
	void DrawColoredCube4();
	void DrawColoredPlane();
	float bezier(float t, float p0, float p1, float p2);
};

