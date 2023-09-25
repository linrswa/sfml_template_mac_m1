#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    sf::Font font;
    font.loadFromFile("font/Arial.ttf");
    sf::Text text("Hello SFML", font);
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::Red);
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        window.draw(shape);
        window.draw(text);

        // end the current frame
        window.display();
    }

    return 0;
}