#include <SFML/Graphics.hpp>

using namespace sf;

//this is where our game starts from int main()

int main()
{
	sf::VideoMode vm(1920, 1080);
	sf::RenderWindow window (vm, "Timber!", sf::Style::Fullscreen);
	
	sf::Texture textureBackground;
	textureBackground.loadFromFile("graphics/background.png");

	sf::Sprite spriteBackground;
	spriteBackground.setTexture(textureBackground);

	spriteBackground.setPosition(0, 0);

	while (window.isOpen())
	{


		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}

		window.clear();

		window.draw(spriteBackground);

		window.display();

	}

	return 0;
}