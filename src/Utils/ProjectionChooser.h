#ifndef PROJECTIONCHOOSER_H
#define PROJECTIONCHOOSER_H

#include <QDialog>

namespace Ui {
    class ProjectionChooser;
}

class ProjectionChooser : public QDialog {
    Q_OBJECT
public:
    ProjectionChooser(QWidget *parent = 0);
    ~ProjectionChooser();

    static QString getProjection(QString title=QString(), bool bShowPredefined=true, QString initialProj = QString(), QWidget* parent=0);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::ProjectionChooser *ui;
};

#endif // PROJECTIONCHOOSER_H
