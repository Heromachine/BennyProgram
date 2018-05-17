#ifndef TEXTURE_H
#define TEXTURE_H

#include <string>
#include <GLEW\glew.h>

class Texture
{
private:
	Texture(const Texture& texture) {}
	void operator=(const Texture& texture) {}

	GLuint m_texture;
public:
	Texture(const std::string& fileName);

	void Bind();

	virtual ~Texture();

};

#endif
