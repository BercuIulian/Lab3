#include <stdio.h>
#include <iostream>

// hp - health , reg - regeneration/sec, sld - slow duration, csd - cast duration, as - atack speed, y - yes, n - no, s - single, m - multiple, fb - fireball, arm_r - armor reduction, as_r - atack spedd reduction

class Game
{
private:
    int round, time, score, points;

    class Troops
    {
    private:
        int hp,range, damage, speed;
        float as;

        class weather
        {
        private:
            int slow, damage, range, arm_r, as_r;
        };

        class Spells
        {
        private:
            int cost, damage, sld, csd;
            char target;
        };

        class Hero
        {
        private:
            int hp, range, damage, speed, as;
            char target;
        };
    };

    class Money
    {
    private:
        int total, income;

        class Tower
        {
        private:
            int range, damage, cost, upgrade;
            char spawn, target;
        };

        class Spells
        {
        private:
            int cost, damage, sld, csd;
            char target;
        };

        class Hero
        {
        private:
            int hp, range, damage, speed, as;
            char target;
        };
    };

    class Base
    {
    private:
        int hp;
        float reg;

            class Troops
            {
            private:
                int hp,range, damage, speed;
                float as;

                class weather
                {
                private:
                    int slow, damage, range, arm_r, as_r;
                };

                class Spells
                {
                private:
                    int cost, damage, sld, csd;
                    char target;
                };

                class Hero
                {
                private:
                    int hp, range, damage, speed, as;
                    char target;
                };
            };
    };
};

int main()
{
    /*Base base;
    base.hp = 5000;
    base.reg = 0.1;

    Money money;
    money.total = 100;
    money.income = 10;

    Troops warrior;
    warrior.hp = 150;
    warrior.range = 3;
    warrior.damage = 50;
    warrior.speed = 3;
    warrior.as = 1;

    Troops archer;
    archer.hp = 100;
    archer.range = 10;
    archer.damage = 40;
    archer.speed = 2;
    archer.as = 1.5;

    Troops cannoneer;
    cannoneer.hp = 200;
    cannoneer.range = 7;
    cannoneer.damage = 65;
    cannoneer.speed = 1;
    cannoneer.as = 0.75;

    Tower castle;
    castle.range = 0;
    castle.damage = 0;
    castle.spawn = 'y';
    castle.target = 's';
    castle.cost = 75 ;
    castle.upgrade = 225;

    Tower arch;
    arch.range = 10;
    arch.damage = 65;
    arch.spawn = 'n';
    arch.target = 's';
    arch.cost = 50;
    arch.upgrade = 150;

    Tower wizzard;
    wizzard.range = 7;
    wizzard.damage = 50;
    wizzard.spawn = 'n';
    wizzard.target = 'm';
    wizzard.cost = 100;
    wizzard.upgrade = 300;

    Spells fb;
    fb.cost = 150;
    fb.damage = 200;
    fb.sld = 1;
    fb.csd = 2;
    fb.target = 'm';

    Spells slow;
    slow.cost = 100;
    slow.damage = 20;
    slow.sld = 5;
    slow.csd = 1;
    slow.target = 'm';*/
}

