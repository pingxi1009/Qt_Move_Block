#include "MoveBlock.h"
#include "ItemPainter.h"
#include "ClickCell.h"
#include <QTableWidgetItem>
#include <QListWidgetItem>
#include <QHeaderView>   //����QTableWidget����Ҫ����QHeaderView

MoveBlock::MoveBlock(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton_shang, SIGNAL(clicked(bool)), this, SLOT(MoveShang(bool)));
	connect(ui.pushButton_xia, SIGNAL(clicked(bool)), this, SLOT(MoveXia(bool)));
	connect(ui.pushButton_zuo, SIGNAL(clicked(bool)), this, SLOT(MoveZuo(bool)));
	connect(ui.pushButton_you, SIGNAL(clicked(bool)), this, SLOT(MoveYou(bool)));

	AddItem(QString("000"));
	AddItem(QString("000"));
	AddItem(QString("000"));

	// ʹ���Զ����ͼ
	ui.tableWidget->setColumnCount(3);
	ui.tableWidget->setRowCount(3);
	//ui.tableWidget->setItemDelegate(new ItemPainter(ui.tableWidget));
	//ui.tableWidget->setItemDelegateForColumn(new ItemPainter(ui.tableWidget));
	//ui.tableWidget->setItemDelegateForColumn(new ItemPainter(ui.tableWidget));

	//ui.tableWidget->setItemDelegate(new ItemPainter(ui.tableWidget));

	ui.tableWidget->verticalHeader()->setDefaultSectionSize(100);
	ui.tableWidget->horizontalHeader()->setDefaultSectionSize(100);
	ui.tableWidget->verticalHeader()->hide();
	ui.tableWidget->horizontalHeader()->hide();

	//ui.tableWidget->setItemDelegate(new ItemPainter(ui.tableWidget));

	//ui.tableWidget->setItemDelegateForColumn(0, new ItemPainter(ui.tableWidget));
	//ui.tableWidget->setItemDelegateForRow(0, new ItemPainter(ui.tableWidget));

	//����ĳ������Ԫ��
	//ui.tableWidget->setItemDelegate(new ClickCell(ui.tableWidget));
}

void MoveBlock::AddItem(QString str)
{
	QListWidgetItem* item = new QListWidgetItem();
	item->setData(Qt::DisplayRole, str);
	//ui.listWidget->addItem(item);
}

// ������
void MoveBlock::MoveShang(bool clicked)
{
	ui.tableWidget->setItemDelegate(new ChoseOne_00(ui.tableWidget));

}

// ������
void MoveBlock::MoveXia(bool clicked)
{
	qDebug("down");
}

// ������
void MoveBlock::MoveZuo(bool clicked)
{
	qDebug("left");
}

// ������
void MoveBlock::MoveYou(bool clicked)
{
	qDebug("right");
}
