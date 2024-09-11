#include <SFML/Graphics.hpp>

using namespace sf;

//this is where our game starts from int main()

int main()
{
	sf::VideoMode vm(1920, 1080);//устанавливает режим отображения 1920 на 1080 пикселей
	sf::RenderWindow window (vm, "Timber!", sf::Style::Fullscreen);//устанавливает видеорежим (окно рендеринга) с меткой "Timber" на полный экран
	
	sf::Texture textureBackground;//берётся фон
	textureBackground.loadFromFile("graphics/background.png");//утанавливается фон из файла.

	sf::Sprite spriteBackground;//берётся растровое изображение (Sprite)
	spriteBackground.setTexture(textureBackground);//фон устанвливается в растровое изображение

	spriteBackground.setPosition(0, 0);//устанавливается позиция


	//устанавливаем одно дерево
	sf::Texture textureTree;
	textureTree.loadFromFile("graphics/tree.png");
	sf::Sprite spriteTree;
	spriteTree.setTexture(textureTree);
	const float TREE_VERTICAL_POSITION = 0.f;
	const float TREE_HORIZONTAL_POSITION = 810.f;
	spriteTree.setPosition(TREE_HORIZONTAL_POSITION, TREE_VERTICAL_POSITION);

	//устанавливаем пчелу
	sf::Texture textureBee;
	textureBee.loadFromFile("graphics/bee.png");
	sf::Sprite spriteBee;
	spriteBee.setTexture(textureBee);
	spriteBee.setPosition(0, 500);
	//двигается ли пчела
	bool bActiveBee = false;
	//скорость пчелы
	float beeSpeed = 0.f;

	while (window.isOpen())//в то время, когда окно открыто
	{


		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))//если нажать на Esc...
		{
			window.close();//...окно закроется
		}

		window.clear();//вызывается каждый кадр, чтобы очистить изображение

		window.draw(spriteBackground);//рисует растровое изображение
		window.draw(spriteTree);
		window.draw(spriteBee);

		window.display();//показывает растровое изображение на экране

	}

	return 0;
}