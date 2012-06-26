#ifndef HELPSUBWINDOW_H
#define HELPSUBWINDOW_H

#include <QDialog>

namespace Ui {
class HelpSubWindow;
}

class HelpSubWindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit HelpSubWindow(QWidget *parent = 0);
    ~HelpSubWindow();
    
private:
    Ui::HelpSubWindow *ui;
};

#endif // HELPSUBWINDOW_H
