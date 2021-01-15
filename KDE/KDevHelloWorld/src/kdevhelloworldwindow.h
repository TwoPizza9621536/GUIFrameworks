/*
    SPDX-FileCopyrightText: %{CURRENT_YEAR} %{AUTHOR} <%{EMAIL}>

    SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only OR LicenseRef-KDE-Accepted-GPL
*/

#ifndef KDEVHELLOWORLDWINDOW_H
#define KDEVHELLOWORLDWINDOW_H


#include "ui_kdevhelloworld.h"

#include <QMainWindow>

/**
 * This class serves as the main window for KDevHelloWorld.  It handles the
 * menus, toolbars and status bars.
 *
 * @short Main window class
 * @author %{AUTHOR} <%{EMAIL}>
 * @version %{VERSION}
 */
class KDevHelloWorldWindow : public QMainWindow
{
    Q_OBJECT
public:
    /**
     * Default Constructor
     */
    KDevHelloWorldWindow();

    /**
     * Default Destructor
     */
    ~KDevHelloWorldWindow() override;

private:
    // this is the name of the root widget inside our Ui file
    // you can rename it in designer and then change it here
    Ui::mainWidget m_ui;
};

#endif // KDEVHELLOWORLDWINDOW_H
