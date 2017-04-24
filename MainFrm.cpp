// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "MenuDraw.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(IDM_KUAILEKETANG, OnKuaileketang)
	ON_COMMAND(IDM_ShowToolbar, OnShowToolbar)
	//}}AFX_MSG_MAP
	ON_COMMAND(ID_32787, &CMainFrame::OnShowSecondToolBar)
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	m_pColorToolBar=NULL;
	m_pNewColorToolBar=NULL;
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

	// TODO: Delete these three lines if you don't want the toolbar to
	//  be dockable
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs




	cs.x=200;
	cs.y=200;

	cs.cx=600;
	cs.cy=600;




	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers


void CMainFrame::OnKuaileketang() 
{
	// TODO: Add your command handler code here
	
//	MessageBox("快乐课堂");


}

void CMainFrame::OnShowToolbar() 
{
	// TODO: Add your command handler code here


	if(m_pColorToolBar==NULL){

      m_pColorToolBar=new CToolBar;

	  if(m_pColorToolBar->Create(this)==0)
	  {
		  return;
	  }
	  m_pColorToolBar->LoadToolBar(IDR_TOOLBAR1);

	  m_pColorToolBar->EnableDocking(CBRS_ALIGN_ANY);

	  DockControlBar(m_pColorToolBar);
	}else{

		if(m_pColorToolBar->IsWindowVisible())
			 ShowControlBar(m_pColorToolBar,FALSE,FALSE);
		else
			ShowControlBar(m_pColorToolBar,TRUE,TRUE);

	}

	
}


void CMainFrame::OnShowSecondToolBar()
{
	// TODO: 在此添加命令处理程序代码

	if(m_pNewColorToolBar==NULL){
		m_pNewColorToolBar=new CToolBar;
		if(m_pNewColorToolBar->Create(this)==0)
		{
			return;
		}
		m_pNewColorToolBar->LoadToolBar(IDR_TOOLBAR2);
		m_pNewColorToolBar->EnableDocking(CBRS_ALIGN_ANY);
		DockControlBar(m_pNewColorToolBar);
	}else{
		if(m_pNewColorToolBar->IsWindowVisible())
			ShowControlBar(m_pNewColorToolBar,FALSE,FALSE);
		else
			ShowControlBar(m_pNewColorToolBar,TRUE,TRUE);
	}

}
