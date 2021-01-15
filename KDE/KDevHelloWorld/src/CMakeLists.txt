set( kdevhelloworld_SRCS
    main.cpp
    kdevhelloworldwindow.cpp
)

ki18n_wrap_ui(kdevhelloworld_SRCS kdevhelloworld.ui)

add_executable( kdevhelloworld ${kdevhelloworld_SRCS} )

target_link_libraries( kdevhelloworld
    KF5::CoreAddons
    KF5::I18n
    Qt5::Widgets
)

install( TARGETS kdevhelloworld ${KDE_INSTALL_TARGETS_DEFAULT_ARGS} )
install( PROGRAMS org.example.kdevhelloworld.desktop DESTINATION ${KDE_INSTALL_APPDIR} )
install( FILES org.example.kdevhelloworld.appdata.xml DESTINATION ${KDE_INSTALL_METAINFODIR} )
