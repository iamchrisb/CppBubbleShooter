#ifndef STARTSUBWINDOW_H
#define STARTSUBWINDOW_H

#include <QDialog>

namespace Ui {
class StartSubWindow;
}

class StartSubWindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit StartSubWindow(QWidget *parent = 0);
    ~StartSubWindow();
    
private:
    Ui::StartSubWindow *ui;
};

#endif // STARTSUBWINDOW_H
