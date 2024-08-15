#include <SFML/Graphics.hpp>

using namespace sf;

//this is where our game starts from int main()

int main()
{
	sf::VideoMode vm(1920, 1080);//устанавливает режим отображения 1920 на 1080 пикселей
	sf::RenderWindow window (vm, "Timber!", sf::Style::Fullscreen);//устанавливает видеорежим с меткой "Timber" на полный экран
	
	sf::Texture textureBackground;//берётся фон
	textureBackground.loadFromFile("graphics/background.png");//утанавливается фон из файла.

	sf::Sprite spriteBackground;//берётся растровое изображение (Sprite)
	spriteBackground.setTexture(textureBackground);//фон устанвливается в растровое изображение

	spriteBackground.setPosition(0, 0);//устанавливается позиция

	while (window.isOpen())//в то время, когда окно открыто
	{


		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))//если нажать на Esc...
		{
			window.close();//...окно закроется
		}

		window.clear();//вызывается каждый кадр, чтобы очистить изображение

		window.draw(spriteBackground);//рисует растровое изображение

		window.display();//показывает растровое изображение на экране

	}

	return 0;
}