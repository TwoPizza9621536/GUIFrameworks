set(kdevhelloworld_ICONS
  16-apps-kdevhelloworld.png
  22-apps-kdevhelloworld.png
  32-apps-kdevhelloworld.png
  48-apps-kdevhelloworld.png
)

ecm_install_icons(ICONS ${kdevhelloworld_ICONS} DESTINATION ${KDE_INSTALL_ICONDIR} THEME hicolor)
