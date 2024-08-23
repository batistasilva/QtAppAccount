#ifndef POSTALCODE_H
#define POSTALCODE_H
#include <QString>

class PostalCode
{
public:
    PostalCode();
    //

    QString GetCity() const {
        return city;
    }

    void SetCity(QString city) {
        this->city = city;
    }

    QString GetNumberStreet() const {
        return numberStreet;
    }

    void SetNumberStreet(QString numberStreet) {
        this->numberStreet = numberStreet;
    }

    QString GetState() const {
        return state;
    }

    void SetState(QString state) {
        this->state = state;
    }

    QString GetStreet() const {
        return street;
    }

    void SetStreet(QString street) {
        this->street = street;
    }

    QString GetTypeStreet() const {
        return typeStreet;
    }

    void SetTypeStreet(QString typeStreet) {
        this->typeStreet = typeStreet;
    }
    QString GetDistrict() const {
        return district;
    }

    void SetDistrict(QString district) {
        this->district = district;
    }

    QString GetPostalcode() const {
        return postalcode;
    }

    void SetPostalcode(QString postalcode) {
        this->postalcode = postalcode;
    }
    
    QString GetComplement() const {
        return complement;
    }

    void SetComplement(QString complement) {
        this->complement = complement;
    }

    //
private:
    QString state;
    QString city;
    QString district;
    QString typeStreet;
    QString complement;
    QString street;
    QString numberStreet;
    QString postalcode;
};

/*
//?UF=SP
//&Localidade=Caieiras
//&Tipo=
 //&Logradouro=Caieiras
//&Numero=&cfm=1
//&Metodo=listaLogradouro
//&TipoConsulta=logradouro

*/
#endif // POSTALCODE_H
