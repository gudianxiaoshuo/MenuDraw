; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMySDISecondView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "menudraw.h"
LastPage=0

ClassCount=6
Class1=CMainFrame
Class2=CMySDISecondApp
Class3=CAboutDlg
Class4=CMySDISecondDoc
Class5=CMySDISecondView

ResourceCount=5
Resource1=IDR_MAINFRAME
Resource2=IDR_TOOLBAR2
Resource3=IDR_TOOLBAR1
Class6=CSetDlg
Resource4=IDD_ABOUTBOX
Resource5=IDD_DIALOG1

[CLS:CMainFrame]
Type=0
BaseClass=CFrameWnd
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp

[CLS:CMySDISecondApp]
Type=0
BaseClass=CWinApp
HeaderFile=MenuDraw.h
ImplementationFile=MenuDraw.cpp

[CLS:CAboutDlg]
Type=0
BaseClass=CDialog
HeaderFile=MenuDraw.cpp
ImplementationFile=MenuDraw.cpp
LastObject=CAboutDlg

[CLS:CMySDISecondDoc]
Type=0
BaseClass=CDocument
HeaderFile=MenuDrawDoc.h
ImplementationFile=MenuDrawDoc.cpp

[CLS:CMySDISecondView]
Type=0
BaseClass=CView
HeaderFile=MenuDrawView.h
ImplementationFile=MenuDrawView.cpp
Filter=C
VirtualFilter=VWC
LastObject=CMySDISecondView

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[TB:IDR_TOOLBAR1]
Type=1
Class=?
Command1=ID_Toolbar_Red
Command2=ID_Toolbar_Blue
Command3=ID_Toolbar_Green
Command4=ID_ToolBar_yello
CommandCount=4

[MNU:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=IDM_RENXINGDONGTU
Command17=IDM_KUAILEKETANG
Command18=IDM_GUDIANXIAOSHUO
Command19=ID_TRANSPARENT
Command20=IDM_Rectangle
Command21=IDM_TUOYUAN
Command22=ID_LINE
Command23=IDM_SET
Command24=IDM_ShowToolbar
Command25=ID_32787
Command26=ID_APP_ABOUT
CommandCount=26

[ACL:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_EDIT_COPY
Command2=IDM_GUDIANXIAOSHUO
Command3=IDM_KUAILEKETANG
Command4=ID_FILE_NEW
Command5=ID_FILE_OPEN
Command6=ID_FILE_PRINT
Command7=IDM_RENXINGDONGTU
Command8=ID_FILE_SAVE
Command9=ID_EDIT_PASTE
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_NEXT_PANE
Command13=ID_PREV_PANE
Command14=ID_EDIT_COPY
Command15=ID_EDIT_PASTE
Command16=ID_EDIT_CUT
Command17=ID_EDIT_UNDO
CommandCount=17

[DLG:IDD_DIALOG1]
Type=1
Class=CSetDlg
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_EDIT1,edit,1350631552
Control4=IDC_BUTTON1,button,1342242816

[CLS:CSetDlg]
Type=0
HeaderFile=SetDlg.h
ImplementationFile=SetDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDM_SET

[TB:IDR_TOOLBAR2]
Type=1
Class=?
Command1=ID_NEW_GREEN
Command2=ID_NEW_BLUE
Command3=ID_NEW_YELLOW
CommandCount=3

