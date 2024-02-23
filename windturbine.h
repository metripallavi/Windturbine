#ifndef WINDTURBINE_H
#define WINDTURBINE_H

#include <QString>

class WindTurbine {
public:
    WindTurbine();
    int readSpeedSettingFromFile(const QString& filePath);

private:
    int speedSetting;
};

#endif // WINDTURBINE_H
