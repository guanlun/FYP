#include "material.h"

Material::Material(std::string n) : name(n) {
	ke = Vec3(0, 0, 0);
    ka = Vec3(0, 0, 0);
	kd = Vec3(0, 0, 0);
    ks = Vec3(0, 0, 0);
	// kt = Vec3(0.0, 0.0, 0.0);
    // kr = Vec3(0, 0, 0);
	// rate = Vec3(1.0f, 1.0f, 1.0f) - kt;
    
    diffuseMap = NULL;
    specularMap = NULL;
    displacementMap = NULL;
}