#include "led_cube_main.h"
#include "loading.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LED_Cube_Main w;
    w.show();

    return a.exec();
}
