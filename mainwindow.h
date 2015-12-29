#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <KMainWindow>
#include "sessionstack.h"


class MainWindow : public KMainWindow {
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);

    public slots:
        void handleTerminalActivity(Terminal* terminal);
        void handleTerminalSilence(Terminal* terminal);

    signals:
        void windowClosed();

    private:
        SessionStack *m_sessionStack;
};

#endif
