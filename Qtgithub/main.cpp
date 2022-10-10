#include "Qtgithub.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	int j = 1 - 3;
	int k = j;
    QApplication a(argc, argv);
    Qtgithub w;
    w.show();
    return a.exec();
}
