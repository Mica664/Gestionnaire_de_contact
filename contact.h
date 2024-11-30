#ifndef CONTACT_H
#define CONTACT_H

#include <QString>

class Contact {
private:
    QString nom;
    QString telephone;
    QString email;
    QString adresse;

public:
    // Constructeurs
    Contact();
    Contact(const QString &nom, const QString &telephone, const QString &email, const QString &adresse);

    // Getters
    QString getNom() const;
    QString getTelephone() const;
    QString getEmail() const;
    QString getAdresse() const;

    // Setters
    void setNom(const QString &nom);
    void setTelephone(const QString &telephone);
    void setEmail(const QString &email);
    void setAdresse(const QString &adresse);
};

#endif // CONTACT_H
