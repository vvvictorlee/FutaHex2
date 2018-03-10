#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_app.h"

namespace board { class IBoard; }

class app : public QMainWindow
{
    Q_OBJECT
public:
    app(QWidget *parent = Q_NULLPTR);
    static const int w { 720 };

public slots:
    void setPiece(int row, int col);
    void onOpen();
    void onSave();
    void onSaveAs();
    void onRestart();
    void onAIMove();
    void onTakeBack();
    void onView();
    void onAction5();
    void onAction7();
    void onAction9();
    void onAction11();
    void onAction13();
    void onAction15();
    void onAction17();
    void onAction19();
    
protected:
    void paintEvent(QPaintEvent *event);

private:
    void changeBoardsize(int boardsize = 0);
    void updateBoard();

private:
    board::IBoard *_pBoard { nullptr };

    Ui::appClass ui;
};
