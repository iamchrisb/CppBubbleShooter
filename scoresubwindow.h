#ifndef SCORESUBWINDOW_H
#define SCORESUBWINDOW_H

#include <QDialog>

namespace Ui {
class ScoreSubWindow;
}

class ScoreSubWindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit ScoreSubWindow(QWidget *parent = 0);
    ~ScoreSubWindow();
    
private:
    Ui::ScoreSubWindow *ui;
};

#endif // SCORESUBWINDOW_H
