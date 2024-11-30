#include "MainWindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Créer et afficher la fenêtre principale
    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}
