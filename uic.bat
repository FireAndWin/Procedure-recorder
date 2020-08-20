echo off
 
 rem 把所有ui文件转化为py文件
rem pyuic5 -o .\Sources\UI_Form\ui_MainFrame.py     .\QtApp\main_frame.ui
rem pyuic5 -o .\Sources\UI_Form\ui_Right_ToolBar.py .\QtApp\right_toolbar.ui
rem pyuic5 -o .\Sources\UI_Form\ui_Down_ToolBar.py  .\QtApp\down_toolbar.ui
rem pyuic5 -o .\Sources\UI_Form\ui_Up_Display.py    .\QtApp\up_display.ui
rem pyuic5 -o .\Sources\UI_Form\ui_Display_Panel.py   .\QtApp\display_panel.ui
rem pyuic5 -o .\Sources\UI_Form\ui_Alt_Panel.py     .\QtApp\alt_panel.ui

rem 把资源文件编译为py文件
rem pyrcc5 .\QtApp\images.qrc -o .\Sources\UI_Form\images_resource.py