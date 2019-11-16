#include "MoveBlock.h"

MoveBlock::MoveBlock(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton_shang, SIGNAL(clicked(bool)), this, SLOT(MoveShang(bool)));
	connect(ui.pushButton_xia, SIGNAL(clicked(bool)), this, SLOT(MoveXia(bool)));
	connect(ui.pushButton_zuo, SIGNAL(clicked(bool)), this, SLOT(MoveZuo(bool)));
	connect(ui.pushButton_you, SIGNAL(clicked(bool)), this, SLOT(MoveYou(bool)));

}

// 向上移
void MoveBlock::MoveShang(bool clicked)
{
	qDebug("up");

}

// 向下移
void MoveBlock::MoveXia(bool clicked)
{
	qDebug("down");
}

// 向上移
void MoveBlock::MoveZuo(bool clicked)
{
	qDebug("left");
}

// 向上移
void MoveBlock::MoveYou(bool clicked)
{
	qDebug("right");
}
