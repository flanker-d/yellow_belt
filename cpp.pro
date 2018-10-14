TEMPLATE = app
CONFIG += console c++1z
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    token.cpp \
    condition_parser.cpp \
    condition_parser_test.cpp \
    database.cpp \
    date.cpp \
    node.cpp

HEADERS += \
    token.h \
    condition_parser.h \
    test_runner.h \
    database.h \
    date.h \
    node.h
