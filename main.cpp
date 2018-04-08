#include <iostream>

//class CardInterface {
//
//}

class Inter {
protected:
    virtual std::string getInfo() = 0;
};

class First: public Inter {
protected:
    std::string getInfo() override {
        return "Kekos";
    }
};

class Second: public Inter {
protected:
    std::string getInfo() override {
        return "Kekos2";
    }
};

class Derivative: virtual public First, virtual public Second {
public:
    std::string getInfo_kek() {
        return First::getInfo();
    }
    std::string getInfo_kek2() {
        return Second::getInfo();
    }
};

int main() {
    Derivative ahah;
    std::cout << ahah.getInfo_kek() << ' ' << ahah.getInfo_kek2();
    return 0;
}