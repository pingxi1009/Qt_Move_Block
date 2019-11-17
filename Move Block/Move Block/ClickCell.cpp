#include "ClickCell.h"
#include <QPainter>


ClickCell::ClickCell(QObject *parent) : QStyledItemDelegate(parent)
{
}


ClickCell::~ClickCell()
{
}

// 决定该单元格的推荐大小
QSize  ClickCell::sizeHint(const QStyleOptionViewItem & option,
	const QModelIndex & index) const
{
	//return QItemDelegate::sizeHint(option, index);

	QSize  size = QStyledItemDelegate::sizeHint(option, index);
	size.setHeight(40);
	size.setWidth(40);
	return size;
}

void ClickCell::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	//QStyledItemDelegate::paint(painter, option, index);

	QRect rect = option.rect; // 目标矩形
	rect.adjust(2, 2, -2, -2); // 缩小一圈，留出空白间隔

	if (index.column() == 1 && index.row() == 1)
	{
		painter->setBrush(QColor(0x00, 0x00, 0xAA));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}
	else //它只是一个常见的列。以默认方式生活
		QStyledItemDelegate::paint(painter, option, index);

}

ChoseOne_00::ChoseOne_00(QObject *parent) : QStyledItemDelegate(parent)
{
}
void ChoseOne_00::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	//QStyledItemDelegate::paint(painter, option, index);

	QRect rect = option.rect; // 目标矩形
	rect.adjust(2, 2, -2, -2); // 缩小一圈，留出空白间隔

	if (index.column() == 0 && index.row() == 0)
	{
		painter->setBrush(QColor(0x00, 0x00, 0xAA));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}
	else //它只是一个常见的列。以默认方式生活
		QStyledItemDelegate::paint(painter, option, index);

}

ChoseOne_01::ChoseOne_01(QObject *parent) : QStyledItemDelegate(parent)
{
}
void ChoseOne_01::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	//QStyledItemDelegate::paint(painter, option, index);

	QRect rect = option.rect; // 目标矩形
	rect.adjust(2, 2, -2, -2); // 缩小一圈，留出空白间隔

	if (index.column() == 0 && index.row() == 1)
	{
		painter->setBrush(QColor(0x00, 0x00, 0xAA));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}
	else //它只是一个常见的列。以默认方式生活
		QStyledItemDelegate::paint(painter, option, index);

}

ChoseOne_02::ChoseOne_02(QObject *parent) : QStyledItemDelegate(parent)
{
}
void ChoseOne_02::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	//QStyledItemDelegate::paint(painter, option, index);

	QRect rect = option.rect; // 目标矩形
	rect.adjust(2, 2, -2, -2); // 缩小一圈，留出空白间隔

	if (index.column() == 0 && index.row() == 2)
	{
		painter->setBrush(QColor(0x00, 0x00, 0xAA));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}
	else //它只是一个常见的列。以默认方式生活
		QStyledItemDelegate::paint(painter, option, index);

}

ChoseOne_10::ChoseOne_10(QObject *parent) : QStyledItemDelegate(parent)
{
}
void ChoseOne_10::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	//QStyledItemDelegate::paint(painter, option, index);

	QRect rect = option.rect; // 目标矩形
	rect.adjust(2, 2, -2, -2); // 缩小一圈，留出空白间隔

	if (index.column() == 1 && index.row() == 0)
	{
		painter->setBrush(QColor(0x00, 0x00, 0xAA));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}
	else //它只是一个常见的列。以默认方式生活
		QStyledItemDelegate::paint(painter, option, index);

}

ChoseOne_11::ChoseOne_11(QObject *parent) : QStyledItemDelegate(parent)
{
}
void ChoseOne_11::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	//QStyledItemDelegate::paint(painter, option, index);

	QRect rect = option.rect; // 目标矩形
	rect.adjust(2, 2, -2, -2); // 缩小一圈，留出空白间隔

	if (index.column() == 1 && index.row() == 1)
	{
		painter->setBrush(QColor(0x00, 0x00, 0xAA));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}
	else //它只是一个常见的列。以默认方式生活
		QStyledItemDelegate::paint(painter, option, index);

}

ChoseOne_12::ChoseOne_12(QObject *parent) : QStyledItemDelegate(parent)
{
}
void ChoseOne_12::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	//QStyledItemDelegate::paint(painter, option, index);

	QRect rect = option.rect; // 目标矩形
	rect.adjust(2, 2, -2, -2); // 缩小一圈，留出空白间隔

	if (index.column() == 1 && index.row() == 2)
	{
		painter->setBrush(QColor(0x00, 0x00, 0xAA));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}
	else //它只是一个常见的列。以默认方式生活
		QStyledItemDelegate::paint(painter, option, index);

}

ChoseOne_20::ChoseOne_20(QObject *parent) : QStyledItemDelegate(parent)
{
}
void ChoseOne_20::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	//QStyledItemDelegate::paint(painter, option, index);

	QRect rect = option.rect; // 目标矩形
	rect.adjust(2, 2, -2, -2); // 缩小一圈，留出空白间隔

	if (index.column() == 2 && index.row() == 0)
	{
		painter->setBrush(QColor(0x00, 0x00, 0xAA));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}
	else //它只是一个常见的列。以默认方式生活
		QStyledItemDelegate::paint(painter, option, index);

}

ChoseOne_21::ChoseOne_21(QObject *parent) : QStyledItemDelegate(parent)
{
}
void ChoseOne_21::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	//QStyledItemDelegate::paint(painter, option, index);

	QRect rect = option.rect; // 目标矩形
	rect.adjust(2, 2, -2, -2); // 缩小一圈，留出空白间隔

	if (index.column() == 2 && index.row() == 1)
	{
		painter->setBrush(QColor(0x00, 0x00, 0xAA));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}
	else //它只是一个常见的列。以默认方式生活
		QStyledItemDelegate::paint(painter, option, index);

}

ChoseOne_22::ChoseOne_22(QObject *parent) : QStyledItemDelegate(parent)
{
}
void ChoseOne_22::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	//QStyledItemDelegate::paint(painter, option, index);

	QRect rect = option.rect; // 目标矩形
	rect.adjust(2, 2, -2, -2); // 缩小一圈，留出空白间隔

	if (index.column() == 2 && index.row() == 2)
	{
		painter->setBrush(QColor(0x00, 0x00, 0xAA));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}
	else //它只是一个常见的列。以默认方式生活
		QStyledItemDelegate::paint(painter, option, index);

}