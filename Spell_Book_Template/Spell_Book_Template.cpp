#include <iostream>

using namespace std;

class Spell_Tome {
protected:
    virtual void attack1() {}
    virtual void attack2() {}
    virtual void defense1() {};
    virtual void defense2() {};

public:
    void cast_spell() {
        attack1();
        attack2();
        defense1();
        defense2();
    };

    virtual ~Spell_Tome() {};
};

class Defense : public Spell_Tome {
public:
    void defense1() override {
        cout << "defense spell 1" << endl;
    }
    void defense2() override {
        cout << "defense spell 2" << endl;
    }
};

class Attack : public Spell_Tome {
public:
    void attack1() override {
        cout << "attack spell 1" << endl;
    }
    void attack2() override {
        cout << "attack spell 2" << endl;
    }
};

int main()
{
    Spell_Tome* defense_cast = new Defense();
    defense_cast->cast_spell();

    Spell_Tome* attack_cast = new Attack();
    attack_cast->cast_spell();

}
