#include<simplecpp>

main_program{
//Write your code here

turtleSim();     // FLOWER PETAL PLATE BORDER DESIGN
    int n=360;
    repeat(36){
        forward(65);
        repeat(3*n/5){
            forward(0.1); left(360/n);
            }
        forward(65);
        repeat(3*n/5){
            forward(0.1); right(360/n);
            }
            right(15);
        }
    wait(5);
}
