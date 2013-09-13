#include <iostream>
#include <fstream>
#include <sstream>

#include "object.h"
#include "scene.h"
using namespace std;

namespace Parser {
    Scene* parseScene(std::string filename);
    
	/* parse obj file for object geometry */
	Scene* parseObjFile(std::string filename);

	/* parse mtl file for material */
	void parseMtlFile(std::string filename, Scene* scene);
};

