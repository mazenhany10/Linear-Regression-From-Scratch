#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "Account.hpp"
int main(){
    {
        Player slayer;
        slayer.set_name("salayer");
    }
    {
        Player mazen;
        mazen.set_name("mazen");
        Player mustafa ("mustafa");
        mustafa.set_name("mustafa");
        Player lollipop("lollipop",100,86);
        lollipop.set_name("lollipop");
    }
    Player*enemey= new Player;
    enemey->set_name("enemYY");
    Player *levelboss= new Player("leveboss",900,70);
    levelboss->set_name("leveboss");
    delete enemey;
    delete levelboss;
    
}
