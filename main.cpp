#include <iostream>
#include <GL/glew.h>
#include "display.h"
#include  "mesh.h"

using namespace std;

int main()
{

Display display (1280, 720, "RPG");

Vertex vertices[] = {Vertex(glm::vec3(-0.5, 0.5, 0)),
                     Vertex(glm::vec3(0, 0.5, 0)),
                     Vertex(glm::vec3(0.5, -0.5, 0)), };

Mesh mesh(vertices, sizeof(vertices)/sizeof(vertices[0]));

while(!display.isClosed()){

display.Clear(0.4f,0.0f,0.0f,1.0f);

mesh.Draw();
display.Update();
}


    return 0;
}
