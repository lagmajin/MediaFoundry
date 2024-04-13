#pragma once

#include <QtWidgets/QWidget>


namespace MediaFoundry {

 class QueWidgetPrivate;


 class QueWidget:public QWidget {
  Q_OBJECT
 private:
 protected:
  void dragEnterEvent(QDragEnterEvent* event) override;
  void dragMoveEvent(QDragMoveEvent* event) override;
  void dropEvent(QDropEvent* event) override;
 public:
  explicit QueWidget(QWidget*parent=nullptr);
  ~QueWidget();
 signals:

public slots:

 };






};