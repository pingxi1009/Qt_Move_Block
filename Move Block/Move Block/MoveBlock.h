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
	// ������
	void MoveShang(bool clicked);
	// ������
	void MoveXia(bool clicked);
	// ������
	void MoveZuo(bool clicked);
	// ������
	void MoveYou(bool clicked);
};
