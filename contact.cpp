#include "Contact.h"

// Constructeurs
Contact::Contact() {}

Contact::Contact(const QString &nom, const QString &telephone, const QString &email, const QString &adresse)
    : nom(nom), telephone(telephone), email(email), adresse(adresse) {}

// Getters
QString Contact::getNom() const {
    return nom;
}

QString Contact::getTelephone() const {
    return telephone;
}

QString Contact::getEmail() const {
    return email;
}

QString Contact::getAdresse() const {
    return adresse;
}

// Setters
void Contact::setNom(const QString &nom) {
    this->nom = nom;
}

void Contact::setTelephone(const QString &telephone) {
    this->telephone = telephone;
}

void Contact::setEmail(const QString &email) {
    this->email = email;
}

void Contact::setAdresse(const QString &adresse) {
    this->adresse = adresse;
}
