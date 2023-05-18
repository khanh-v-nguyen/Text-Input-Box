//
// Created by Khanh Nguyen on 2/22/23.
//

#include "Application.h"


Application::Application() : window({720, 420, 32}, "Text Input")
{

}

Application::Application(sf::VideoMode videoMode, std::string title) : window(videoMode, title)
{

}

void Application::run()
{
    runLoop();
}

void Application::runLoop()
{
    Typing typing;
    sf::Event event;

    TextInput ti;
    ti.setLabel("First name");
    ti.setPosition({30,100});
    //WordSort sort("testnames");

    //ti.setLabelSize(30);

    while(window.isOpen())
    {
        while(window.pollEvent(event))
        {
            if(sf::Event::Closed == event.type)
            {
                window.close();
            }
            //typing.addEventHandler(window, event);
            ti.addEventHandler(window, event);

//            if(event.type == sf::Event::TextEntered)
//            {
//                sort.updateAutoCorrect(ti.getText());
//            }
        }
        ti.loopingEventHandler();

        window.clear();

        window.draw(ti);

        //window.draw(sort);

        window.display();
    }

}
