#include "Qtgithub.h"
#include <QtWidgets/QApplication>
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i = 11;
	int j  =  i  +  11 ;
	printf ( "hello world" );
	printf ("hello lcy");
	printf("hello xyx");
        printf ("hello lcyxyx");
    QApplication a(argc, argv);
    Qtgithub w;
    w.show();
    return a.exec();
}
