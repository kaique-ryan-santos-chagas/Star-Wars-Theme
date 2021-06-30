#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Image.hpp>

using namespace sf;

int main(){

    RenderWindow window(VideoMode(800, 600), "Stranger Things");
    Image stranger_logo;
    
    stranger_logo.loadFromFile("src/assets/stranger-things.gif");

    while(window.isOpen()){

        Event event;

        while(window.pollEvent(event)){
            if(event.type == Event::Closed){
                window.close();
            }
        }

        window.clear();
        window.display();
    }

    return EXIT_SUCCESS;
}