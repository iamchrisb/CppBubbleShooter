#ifndef SETUPSUBWINDOW_H
#define SETUPSUBWINDOW_H

#include <QDialog>

namespace Ui {
class SetupSubWindow;
}

class SetupSubWindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit SetupSubWindow(QWidget *parent = 0);
    ~SetupSubWindow();
    
private:
    Ui::SetupSubWindow *ui;
};

#endif // SETUPSUBWINDOW_H
