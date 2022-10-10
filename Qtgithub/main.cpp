#include "Qtgithub.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	int i = 1;
    QApplication a(argc, argv);
    Qtgithub w;
    w.show();
    return a.exec();
}
