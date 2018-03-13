#include <sstream>
#include <iostream>
#include "SplashState.hpp"
#include "DEFINITIONS.hpp"

namespace Aytuk
{
	SplashState::SplashState(GameDataRef data) : _data(data)
	{
		this->_data->assets.LoadFont("Splash State Background", SPLASH_SCENE_BACKGROUND_FILEPATH);

		_background.setTexture(this->_data->assets.GetTexture("Splash State Background"));
	}

	void SplashState::HandleInput()
	{
		sf::Event event;

		while (this->_data->window.pollEvent(event))
		{
			if (sf::Event::Closed == event.type)
			{
				this->_data->window.close();
			}
		}
	}

	void SplashState::Update(float dt)
	{
		if (this->_clock.getElapsedTime().asSeconds()>SPLASH_STATE_SHOW_TIME)
		{
			// Switch to the Main Menu
			std::cout << "Go to Main Menu" << std::endl;
		}
	}

	void SplashState::Draw(float dt)
	{
		this->_data->window.clear(sf::Color::Red);
		this->_data->window.draw(this->_background);
		this->_data->window.display();
	}
}