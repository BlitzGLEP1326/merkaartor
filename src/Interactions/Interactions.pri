INCLUDEPATH += $$MERKAARTOR_SRC_DIR/Interactions
DEPENDPATH += $$MERKAARTOR_SRC_DIR/Interactions

HEADERS += \
    CreateAreaInteraction.h \
    CreateDoubleWayInteraction.h \
    CreateNodeInteraction.h \
    CreateRoundaboutInteraction.h \
    CreatePolygonInteraction.h \
    CreateSingleWayInteraction.h \
    EditInteraction.h \
    Interaction.h \
    MoveNodeInteraction.h \
    RotateInteraction.h \
    ScaleInteraction.h \
    ZoomInteraction.h \
    ExtrudeInteraction.h \
    BuildBridgeInteraction.h

SOURCES += \
    CreateAreaInteraction.cpp \
    CreateDoubleWayInteraction.cpp \
    CreateNodeInteraction.cpp \
    CreateSingleWayInteraction.cpp \
    CreateRoundaboutInteraction.cpp \
    CreatePolygonInteraction.cpp \
    EditInteraction.cpp \
    Interaction.cpp \
    MoveNodeInteraction.cpp \
    RotateInteraction.cpp \
    ScaleInteraction.cpp \
    ZoomInteraction.cpp \
    ExtrudeInteraction.cpp \
    BuildBridgeInteraction.cpp

FORMS +=  \
    CreateDoubleWayDock.ui \
    CreateRoundaboutDock.ui \
