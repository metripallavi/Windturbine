#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[]) {
    // Creating an instance of the QApplication class to manage the application's control flow
    QApplication app(argc, argv);

    // Creating the main application window
    QMainWindow mainWindow;

    // displaying the main window
    mainWindow.show();

    // Start the application event loop
    return app.exec();
}
