#pragma once
#include <QStyledItemDelegate>
//#include <QPainter>

class ItemPainter : public QStyledItemDelegate
{
	Q_OBJECT

public:
	ItemPainter(QObject *parent);
	~ItemPainter();

private:
	// �����õ�Ԫ����Ƽ���С
	virtual QSize  sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index) const;
	// ������λ�ͼ

	virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;

	//virtual void paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const;
};

