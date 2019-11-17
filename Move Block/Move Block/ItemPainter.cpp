#include "ItemPainter.h"
#include <QPainter>


ItemPainter::ItemPainter(QObject *parent) : QStyledItemDelegate(parent)
{
}


ItemPainter::~ItemPainter()
{
}

// �����õ�Ԫ����Ƽ���С
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

	QRect rect = option.rect; // Ŀ�����
	rect.adjust(2, 2, -2, -2); // ��СһȦ�������հ׼��

	if (1)
	{
		painter->setBrush(QColor(0x00, 0xAA, 0xAA));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}

	// ״̬��ʾ: �����ѡ��
	if (option.state & QStyle::State_Selected)
	{
		painter->setBrush(QColor(0xCC, 0x00, 0xAA));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}

	


}
