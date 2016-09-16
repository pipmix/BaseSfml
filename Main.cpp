#include "Game.h"

const int screenW = 640, screenH = 400;
RenderWindow renderWindow(sf::VideoMode(screenW, screenH), "Game");

int main() {


	Game game;
	game.Load();

	while (renderWindow.isOpen()) {
		Event e;
		while (renderWindow.pollEvent(e)) {
			if (e.type == Event::Closed) renderWindow.close();
		}

		renderWindow.clear(sf::Color::Black);
		game.Update();
		game.Draw();
		renderWindow.display();
	}
	return 0;
}