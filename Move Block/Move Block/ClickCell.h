#pragma once
#include <QStyledItemDelegate>
//#include <QPainter>

class ClickCell : public QStyledItemDelegate
{
	Q_OBJECT

public:
	ClickCell(QObject *parent);
	~ClickCell();

private:
	// 决定该单元格的推荐大小
	virtual QSize  sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index) const;
	// 决定如何绘图

	virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;

	//virtual void paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const;
};

class ChoseOne_00 : public QStyledItemDelegate
{
public:
	ChoseOne_00(QObject *parent);
private:
	virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

class ChoseOne_01 : public QStyledItemDelegate
{
public:
	ChoseOne_01(QObject *parent);
private:
	virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

class ChoseOne_02 : public QStyledItemDelegate
{
public:
	ChoseOne_02(QObject *parent);
private:
	virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

class ChoseOne_10 : public QStyledItemDelegate
{
public:
	ChoseOne_10(QObject *parent);
private:
	virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

class ChoseOne_11 : public QStyledItemDelegate
{
public:
	ChoseOne_11(QObject *parent);
private:
	virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

class ChoseOne_12 : public QStyledItemDelegate
{
public:
	ChoseOne_12(QObject *parent);
private:
	virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

class ChoseOne_20 : public QStyledItemDelegate
{
public:
	ChoseOne_20(QObject *parent);
private:
	virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

class ChoseOne_21 : public QStyledItemDelegate
{
public:
	ChoseOne_21(QObject *parent);
private:
	virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

class ChoseOne_22 : public QStyledItemDelegate
{
public:
	ChoseOne_22(QObject *parent);
private:
	virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};








