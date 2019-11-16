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
	// 向上
	void MoveShang(bool clicked);
	// 向下
	void MoveXia(bool clicked);
	// 向左
	void MoveZuo(bool clicked);
	// 向右
	void MoveYou(bool clicked);
};
