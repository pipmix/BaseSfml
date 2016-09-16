#pragma once
#include "Headers.h"
using namespace std;
using namespace sf;


class Resources{
public:

							Resources		();
	static	int				AddTexture		(std::string filePath);
	static	void			RemoveTexture	(int textureID);
	static	Texture&		GetTexture		(int textureId);

private:

	static map<string, pair<int, unique_ptr<sf::Texture>>> m_textures;
	static int m_currentId;
};

