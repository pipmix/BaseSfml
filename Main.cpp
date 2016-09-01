#include <SFML\Graphics.hpp>
using namespace sf;

sf::RenderWindow renderWindow(sf::VideoMode(320, 200), "Game");

void Init();
void Update();
void Draw();
sf::Texture t;
sf::Sprite s1;


int main() {

	Init();

	while (renderWindow.isOpen()) {
		sf::Event e;
		while (renderWindow.pollEvent(e)) {
			if (e.type == sf::Event::Closed)
				renderWindow.close();
		}

		renderWindow.clear(sf::Color::Blue);
		Draw();
		renderWindow.display();
	}
	return 0;
}

void Init() {
	t.loadFromFile("C:/box/Box Sync/Data/Images/tiles.png");
	s1.setTexture(t);
	s1.setTextureRect(IntRect(0, 0, 36, 18));

}
void Update() {

}
void Draw(){
	renderWindow.draw(s1);
}