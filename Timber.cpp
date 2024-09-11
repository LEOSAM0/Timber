#include <SFML/Graphics.hpp>

using namespace sf;

//this is where our game starts from int main()

int main()
{
	sf::VideoMode vm(1920, 1080);//������������� ����� ����������� 1920 �� 1080 ��������
	sf::RenderWindow window (vm, "Timber!", sf::Style::Fullscreen);//������������� ���������� (���� ����������) � ������ "Timber" �� ������ �����
	
	sf::Texture textureBackground;//������ ���
	textureBackground.loadFromFile("graphics/background.png");//�������������� ��� �� �����.

	sf::Sprite spriteBackground;//������ ��������� ����������� (Sprite)
	spriteBackground.setTexture(textureBackground);//��� �������������� � ��������� �����������

	spriteBackground.setPosition(0, 0);//��������������� �������


	//������������� ���� ������
	sf::Texture textureTree;
	textureTree.loadFromFile("graphics/tree.png");
	sf::Sprite spriteTree;
	spriteTree.setTexture(textureTree);
	const float TREE_VERTICAL_POSITION = 0.f;
	const float TREE_HORIZONTAL_POSITION = 810.f;
	spriteTree.setPosition(TREE_HORIZONTAL_POSITION, TREE_VERTICAL_POSITION);

	//������������� �����
	sf::Texture textureBee;
	textureBee.loadFromFile("graphics/bee.png");
	sf::Sprite spriteBee;
	spriteBee.setTexture(textureBee);
	spriteBee.setPosition(0, 500);
	//��������� �� �����
	bool bActiveBee = false;
	//�������� �����
	float beeSpeed = 0.f;

	//������������� ������
	sf::Texture textureCloud;
	textureCloud.loadFromFile("graphics/cloud.png");
	sf::Sprite spriteCloud1;
	sf::Sprite spriteCloud2;
	sf::Sprite spriteCloud3;
	spriteCloud1.setTexture(textureCloud);
	spriteCloud2.setTexture(textureCloud);
	spriteCloud3.setTexture(textureCloud);
	spriteCloud1.setPosition(0, 0);
	spriteCloud2.setPosition(0, 100);
	spriteCloud3.setPosition(0, 200);


	while (window.isOpen())//� �� �����, ����� ���� �������
	{


		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))//���� ������ �� Esc...
		{
			window.close();//...���� ���������
		}

		window.clear();//���������� ������ ����, ����� �������� �����������

		window.draw(spriteBackground);//������ ��������� �����������
		window.draw(spriteTree);
		window.draw(spriteBee);
		window.draw(spriteCloud1);
		window.draw(spriteCloud2);
		window.draw(spriteCloud3);

		window.display();//���������� ��������� ����������� �� ������

	}

	return 0;
}