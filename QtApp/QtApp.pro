#-------------------------------------------------
#
# Project created by QtCreator 2017-12-27T01:29:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtApp
TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/CameraConfig.cpp \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/DataAssociation.cpp \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/FrameQueue.cpp \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/hungarian.cpp \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/graph.cpp \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/ParticleFilterTracker.cpp \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/pugixml.cpp \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/Server.cpp \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/ServerUDP.cpp
LIBS += `pkg-config opencv --libs` \
        -lboost_system \
        -lpthread \
        -lboost_serialization \
        -lboost_chrono
HEADERS  += mainwindow.h \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/CameraConfig.h \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/connection.hpp \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/DataAssociation.h \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/Frame.h \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/FrameQueue.h \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/graph.h \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/hungarian.h \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/ParticleFilterTracker.h \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/pugiconfig.hpp \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/pugixml.hpp \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/Server.h \
    ../MultiCameraPeopleTrackingSystem1-0-UDP/server/src/ServerUDP.h

FORMS    += mainwindow.ui

RESOURCES += \
    ../resource.qrc
