#include <SFML/Graphics.hpp>

using namespace sf;

//this is where our game starts from int main()

int main()
{
	sf::VideoMode vm(1920, 1080);
	sf::RenderWindow window (vm, "Timber!", Style::Fullscreen);

	return 0;
}