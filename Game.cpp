#include "Game.h"

Game::Game()
{
}

void Game::Load(){
	srand(static_cast<unsigned int>(time(nullptr)));
	bool myBool = std::rand() % 2;
}

void Game::Update()
{
}

void Game::Draw()
{
}


/*

#include <SFML\Graphics.hpp>
using namespace sf;


const int screenW = 320, screenH = 200;


float x = 10, y = 10;
float dx = 0.0f, dy = 0.0f;

View view1;

struct Point {
int x;
int y;
};

IntRect SetRect(int x) {



return IntRect(0, 0, 16, 16);
}
sf::RenderWindow renderWindow(sf::VideoMode(screenW, screenH), "Game");

void Init();
void Update();
void Draw();
sf::Texture texMesh;
sf::Sprite sprPlayer, sprWall;


int main() {

Init();

while (renderWindow.isOpen()) {
sf::Event e;
while (renderWindow.pollEvent(e)) {
if (e.type == sf::Event::Closed)
renderWindow.close();
}

renderWindow.clear(sf::Color::Black);
Update();
Draw();
renderWindow.display();
}
return 0;
}

void Init() {
renderWindow.setFramerateLimit(60);



//view1.setViewport(FloatRect(320, 200, 640, 400));
//view1.zoom(0.5f);
//renderWindow.setView(view1);


texMesh.loadFromFile("C:/box/Box Sync/Data/Images/mesh.png");
sprWall.setTexture(texMesh);
sprWall.setTextureRect(IntRect(0, 0, 16, 16));

sprPlayer.setTexture(texMesh);
sprPlayer.setTextureRect(IntRect(16, 0, 32, 16));


}
void Update() {


if (Keyboard::isKeyPressed(Keyboard::Right)) x += 0.6f;
if (Keyboard::isKeyPressed(Keyboard::Left)) x -= 0.6f;
if (Keyboard::isKeyPressed(Keyboard::Up)) dy = -5;

dy += 0.2f;
y += dy;

if (y > 130) dy = -5;

sprPlayer.setPosition(x, y);




}
void Draw(){
renderWindow.draw(sprPlayer);
}


*/