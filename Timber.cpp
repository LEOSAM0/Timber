#include <SFML/Graphics.hpp>

using namespace sf;

//this is where our game starts from int main()

int main()
{
	sf::VideoMode vm(1920, 1080);
	sf::RenderWindow window (vm, "Timber!", sf::Style::Fullscreen);

	while (window.isOpen())
	{


		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}

		window.clear();

		window.display();

	}

	return 0;
}