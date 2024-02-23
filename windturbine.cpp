#include "windturbine.h"
#include <QFile>
#include <QTextStream>
#include <QTimer>
#include <QDebug>

WindTurbine::WindTurbine() : speedSetting(0) {
    // Set up a timer to simulate periodic updates
    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &WindTurbine::updateRotation);
    timer->start(1000); // Update every 1000 milliseconds (1 second)
}

int WindTurbine::readSpeedSettingFromFile(const QString& filePath) {
    // Open the specified file
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        // Failed to open the file
        return -1;
    }

    // Read the content of the file
    QTextStream in(&file);
    QString speedString = in.readAll();
    file.close();

    // Convert the speedString to an integer
    bool conversionOk;
    int newSpeed = speedString.toInt(&conversionOk);

    if (!conversionOk) {
        // Failed to convert to integer
        return -2;
    }

    // Update the speed setting
    speedSetting = newSpeed;
    return 0;
}

void WindTurbine::updateRotation() {
    // Assuming there's a function to rotate the turbine in my graphical interface
    // Replacing this with appropriate function or method call
        rotateTurbine(speedSetting);

    // For debugging purposes, print the speed setting to the console
    qDebug() << "Current Speed Setting: " << speedSetting;
}

void WindTurbine::rotateTurbine(int speed) {
    // Implement the code to rotate the turbine based on the speed setting
    // using the QTransform or any other method depending on your graphical representation
    // Example: rotate the turbine by speed degrees
    // turbineGraphicsItem->setRotation(speed * 36); // 36 degrees per unit of speed
}
