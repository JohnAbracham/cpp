#include <SFML/Graphics.hpp>
#include <time.h>

using namespace  sf;

bool isCollide(Sprite s1, Sprite s2){
    return s1.getGlobalBounds().intersects(s2.getGlobalBounds());
}

int main(){

    srand(time(0));

    RenderWindow app(VideoMode(520,450),"Arkanoid");

    app.setFramerateLimit(60);

    Texture t1,t2,t3,t4;
    t1.loadFromFile("images/block01.png");
    t2.loadFromFile("images/background.jpg");
    t3.loadFromFile("images/ball.png");
    t4.loadFromFile("images/paddle.png");

    Sprite sBackground(t2), sBall(t3), sPaddle(t4);

    sPaddle.setPosition(300,435);
    sBall.setPosition(300,300);

    Sprite block[1000];

    int n = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            block[n].setTexture(t1);
            block[n].setPosition(50+i*43,20+j*20);
            n++;
        }
    }

    float dx = 6, dy = 5;


    while(app.isOpen()){

        Event e;

        while(app.pollEvent(e)){

            if(e.type == Event::Closed) app.close();
        }

    sBall.move(dx,0);
    for(int i = 0; i < n; i++){
        if(isCollide(sBall,block[i])){
            block[i].setPosition(-100,0);
            dx = -dx;
        }
    }

    sBall.move(0,dy);
    for(int i = 0; i < n; i++){
        if(isCollide(sBall,block[i])){
            block[i].setPosition(-100,0);
            dy = -dy;
        }
    }


    Vector2f b = sBall.getPosition();

    if(b.x < 0 || b.x > 520) dx = -dx;
    if(b.y < 0 || b.y > 450) dy = -dy;

    if(Keyboard::isKeyPressed(Keyboard::Right)) sPaddle.move(6,0);
    if(Keyboard::isKeyPressed(Keyboard::Left)) sPaddle.move(-6,0);

    if(isCollide(sPaddle, sBall)) dy = -(rand()%5+2); 

    app.clear();
    app.draw(sBackground);
    app.draw(sBall);
    app.draw(sPaddle);
    
    for(int i = 0; i < n; i++) app.draw(block[i]);

    app.display();

    }

    return 0;
}