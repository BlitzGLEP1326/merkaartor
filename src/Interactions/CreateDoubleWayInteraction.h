#ifndef MERKATOR_INTERACTION_CREATEDOUBLEWAYINTERACTION_H
#define MERKATOR_INTERACTION_CREATEDOUBLEWAYINTERACTION_H

#include <ui_CreateDoubleWayDock.h>
#include "Interaction.h"

class Way;

class QDockWidget;

class CreateDoubleWayInteraction : public Interaction
{
    Q_OBJECT

    public:
        CreateDoubleWayInteraction();
        ~CreateDoubleWayInteraction();

        virtual void mousePressEvent(QMouseEvent * event);
        virtual void mouseMoveEvent(QMouseEvent* event);
        virtual void mouseReleaseEvent(QMouseEvent* event);
        virtual void paintEvent(QPaintEvent* anEvent, QPainter& thePainter);
        virtual QString toHtml();
#ifndef _MOBILE
        virtual QCursor cursor() const;
#endif

    private:
        QDockWidget* theDock;
        Ui::CreateDoubleWayDock DockData;
        QPoint LastCursor;
        Way* R1;
        Way* R2;
        Coord FirstPoint;
        qreal FirstDistance;
        bool HaveFirst;
        QHash<int, Coord> PreviousPoints;
};

#endif // INTERACTION\CREATEDOUBLEWAYINTERACTION_H
