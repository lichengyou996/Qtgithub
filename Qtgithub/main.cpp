#include "Qtgithub.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	int i = 0;
	int j = i + 2;
	int k = i + j;
    QApplication a(argc, argv);
    Qtgithub w;
    w.show();
    return a.exec();
}
