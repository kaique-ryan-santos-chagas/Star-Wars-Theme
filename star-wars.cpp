#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;

int main(){

    RenderWindow window(VideoMode(1000, 600), "Star Wars");

    Texture background_image;
    background_image.loadFromFile("src/assets/pictures/background.png");
    background_image.setRepeated(true);

    Sprite background(background_image);
    background.setTextureRect(IntRect(1000, 1000, 1000, 1000));

    Music star_wars_theme;

    star_wars_theme.openFromFile("src/assets/songs/star-wars.ogg");
    star_wars_theme.play();

    Font font;

    font.loadFromFile("src/assets/fonts/Starjedi.ttf");

    Text star_wars_title;

    star_wars_title.setFont(font);
    star_wars_title.setString("Star Wars");
    star_wars_title.setPosition(350, 300);
    star_wars_title.setCharacterSize(50);
    star_wars_title.setFillColor(Color::Yellow);

    while(window.isOpen()){

        Event event;

        while(window.pollEvent(event)){
            if(event.type == Event::Closed){
                window.close();
            }
        }

        window.clear();
        window.draw(background);
        window.draw(star_wars_title);
        window.display();
    }

    return EXIT_SUCCESS;
}