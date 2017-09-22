#include "cppcheck_Win.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	cppcheck_Win w;
	w.show();
	return a.exec();
}
