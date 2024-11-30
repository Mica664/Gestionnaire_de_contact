#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // Connecter les boutons aux slots
    connect(ui->ajouterButton, &QPushButton::clicked, this, &MainWindow::onAjouterContact);
    connect(ui->modifierButton, &QPushButton::clicked, this, &MainWindow::onModifierContact);
    connect(ui->supprimerButton, &QPushButton::clicked, this, &MainWindow::onSupprimerContact);
    connect(ui->rechercherButton, &QPushButton::clicked, this, &MainWindow::onRechercherContact);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onAjouterContact() {
    QString nom = ui->nomLineEdit->text();
    QString telephone = ui->telephoneLineEdit->text();
    QString email = ui->emailLineEdit->text();
    QString adresse = ui->adresseLineEdit->text();

    Contact nouveauContact(nom, telephone, email, adresse);
    contacts.append(nouveauContact);

    // Ajouter à l'affichage (QTableWidget)
    int row = ui->contactsTable->rowCount();
    ui->contactsTable->insertRow(row);
    ui->contactsTable->setItem(row, 0, new QTableWidgetItem(nom));
    ui->contactsTable->setItem(row, 1, new QTableWidgetItem(telephone));
    ui->contactsTable->setItem(row, 2, new QTableWidgetItem(email));
    ui->contactsTable->setItem(row, 3, new QTableWidgetItem(adresse));
}

void MainWindow::onModifierContact() {
    // Logique pour modifier un contact (à implémenter)
}

void MainWindow::onSupprimerContact() {
    // Logique pour supprimer un contact (à implémenter)
}

void MainWindow::onRechercherContact() {
    // Logique pour rechercher un contact (à implémenter)
}
