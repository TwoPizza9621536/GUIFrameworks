/*
    SPDX-FileCopyrightText: %{CURRENT_YEAR} %{AUTHOR} <%{EMAIL}>

    SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only OR LicenseRef-KDE-Accepted-GPL
*/

#include "kdevhelloworldwindow.h"

KDevHelloWorldWindow::KDevHelloWorldWindow()
    : QMainWindow()
{
    QWidget *widget = new QWidget(this);
    setCentralWidget(widget);
    m_ui.setupUi(widget);
}

KDevHelloWorldWindow::~KDevHelloWorldWindow()
{
}
