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

// ������
void MoveBlock::MoveShang(bool clicked)
{
	qDebug("hello");
}

// ������
void MoveBlock::MoveXia(bool clicked)
{

}

// ������
void MoveBlock::MoveZuo(bool clicked)
{

}

// ������
void MoveBlock::MoveYou(bool clicked)
{

}
