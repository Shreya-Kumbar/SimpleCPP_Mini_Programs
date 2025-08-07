#include<simplecpp>

main_program{
//Write your code here

    initCanvas("Projectile",500 , 500);
    int start=getClick();
    Circle C(start/65536, start%65536, 5);
    C.penDown();          //to see its path cuz shapes are initially penUp
    double vx=-1, vy=-1, gravity=0.01, i=200;

    repeat(5){
        repeat(i){
            C.move(vx, vy);  //vel. in each drctn
            vy+=gravity;
            wait(0.01);
        }
        vx=vx/1.5; vy=-vy/1.5; i=i-20;
    }
        getClick();      //so it waits before closing till I click
}
