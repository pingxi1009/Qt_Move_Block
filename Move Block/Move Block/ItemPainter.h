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
	// 决定该单元格的推荐大小
	virtual QSize  sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index) const;
	// 决定如何绘图

	virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;

	//virtual void paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const;
};

