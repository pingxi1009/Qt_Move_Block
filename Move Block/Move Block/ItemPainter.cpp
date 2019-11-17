#include "ItemPainter.h"
#include <QPainter>


ItemPainter::ItemPainter(QObject *parent) : QStyledItemDelegate(parent)
{
}


ItemPainter::~ItemPainter()
{
}

// 决定该单元格的推荐大小
QSize  ItemPainter::sizeHint(const QStyleOptionViewItem & option,
	const QModelIndex & index) const
{
	//return QItemDelegate::sizeHint(option, index);

	QSize  size = QStyledItemDelegate::sizeHint(option, index);
	size.setHeight(40);
	size.setWidth(40);
	return size;
}

void ItemPainter::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	//QStyledItemDelegate::paint(painter, option, index);

	QRect rect = option.rect; // 目标矩形
	rect.adjust(2, 2, -2, -2); // 缩小一圈，留出空白间隔

	if (1)
	{
		painter->setBrush(QColor(0x00, 0xAA, 0xAA));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}

	// 状态显示: 若该项被选中
	if (option.state & QStyle::State_Selected)
	{
		painter->setBrush(QColor(0xCC, 0x00, 0xAA));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}

	


}
