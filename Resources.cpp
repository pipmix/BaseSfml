#include "Resources.h"

map<string, pair<int, unique_ptr<Texture>>> Resources::m_textures;
int Resources::m_currentId = 0;

Resources::Resources(){
}

int Resources::AddTexture(string filePath){


	auto it = m_textures.find(filePath);
	if (it != m_textures.end()) return it->second.first;
	m_currentId++;
	unique_ptr<Texture> texture = make_unique<Texture>();
	if (!texture->loadFromFile(filePath)) return -1;
	
	m_textures.insert(make_pair(filePath, make_pair(m_currentId, std::move(texture))));
	return m_currentId;
}

void Resources::RemoveTexture(int textureID){
	for (auto it = m_textures.begin(); it != m_textures.end(); ++it){
		if (it->second.first == textureID) m_textures.erase(it->first);
		
	}
}

Texture & Resources::GetTexture(int textureId){
	for (auto it = m_textures.begin(); it != m_textures.end(); ++it){
		if (it->second.first == textureId) return *it->second.second;
	}
}