#include "MoveBlock.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MoveBlock w;
	w.show();
	return a.exec();
}
