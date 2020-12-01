//
// Created by s038477 on 2020.10.28.
//

#ifndef PROJEKTINIS_RATAS_H
#define PROJEKTINIS_RATAS_H


class Ratas {
private:

public:
    int likutis;
    bool arTinkamasNaudoti;
    bool isArTinkamasNaudoti() const;
    void setArTinkamasNaudoti(bool arTinkamasNaudoti);

    int getLikutis() const;
    void setLikutis(int likutis);

public:
    Ratas();
};


#endif //PROJEKTINIS_RATAS_H
