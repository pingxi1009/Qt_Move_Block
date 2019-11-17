#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MoveBlock.h"

class MoveBlock : public QMainWindow
{
	Q_OBJECT

public:
	MoveBlock(QWidget *parent = Q_NULLPTR);

private:
	Ui::MoveBlockClass ui;

private slots:
	// 向上移
	void MoveShang(bool clicked);
	// 向下移
	void MoveXia(bool clicked);
	// 向左移
	void MoveZuo(bool clicked);
	// 向右移
	void MoveYou(bool clicked);
};
