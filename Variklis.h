//
// Created by s038477 on 2020.10.28.
//

#ifndef PROJEKTINIS_VARIKLIS_H
#define PROJEKTINIS_VARIKLIS_H


class Variklis {
private:


public:
    int rida;
    bool arPakankamasTepaloLygis;
    bool isArUzvestas() ;

    void setArUzvestas(bool arUzvestas) ;

    int getRida() const;

    void setRida(int rida);

    bool isArPakankamasTepaloLygis() const;

    void setArPakankamasTepaloLygis(bool arPakankamasTepaloLygis);

public:
    Variklis();
    bool arUzvestas;
};


#endif //PROJEKTINIS_VARIKLIS_H
