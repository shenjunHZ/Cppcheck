#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_cppcheck_Win.h"

class cppcheck_Win : public QMainWindow
{
	Q_OBJECT

public:
	cppcheck_Win(QWidget *parent = Q_NULLPTR);

private:
	Ui::cppcheck_WinClass ui;
};
