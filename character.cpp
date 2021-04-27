#include "character.h"

Character::Character(string n, int st, int d, int h, int sp){
        name = n;
        strength = st;
        defense = d;
        health = h;
        speed = sp;
}

bool Character::isAlive() const {
    return health > 0;
}

int Character::getSpeed() const {
    return speed;
}

int Character::getStrength() const{
    return strength;
}

void Charcater::takeDamage(int damage) {
    health = health (damage-defense);
    cout<<health;
}