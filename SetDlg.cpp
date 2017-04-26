// SetDlg.cpp : implementation file
//

#include "stdafx.h"
#include "menudraw.h"
//#include "SetDlg.h"



#include "MenuDrawDoc.h"
#include "MenuDrawView.h"
#include "SetDlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSetDlg dialog

//#include "MenuDrawView.h"

CSetDlg::CSetDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSetDlg::IDD, pParent)
	, m_nBold(0)
{
	//{{AFX_DATA_INIT(CSetDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	//pView=(CMenuDrawView* )pParent;
}


void CSetDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSetDlg)
	// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
	DDX_Text(pDX, IDC_EDIT1, m_nBold);
	//DDX_Text(pDX, IDC_MFCCOLORBUTTON1, m_LineColor);
	DDX_Control(pDX, IDC_MFCCOLORBUTTON1, m_ColorBtn);
}


BEGIN_MESSAGE_MAP(CSetDlg, CDialog)
	//{{AFX_MSG_MAP(CSetDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1, &CSetDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDOK, &CSetDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_MFCCOLORBUTTON1, &CSetDlg::OnBnClickedMfccolorbutton1)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSetDlg message handlers


void CSetDlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	if(pView)
	{

		
	}
}


void CSetDlg::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	CDialog::OnOK();
}


void CSetDlg::OnBnClickedMfccolorbutton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������


	m_LineColor=m_ColorBtn.GetColor();

}


BOOL CSetDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
    m_ColorBtn.EnableAutomaticButton(_T("Ŀǰ"), m_LineColor);   
    //m_ColorBtn.SetColor(m_SelectedColor);  
    m_ColorBtn.EnableOtherButton(_T("������ɫ"));   
    m_ColorBtn.SetColor((COLORREF)-1);   
    m_ColorBtn.SetColumnsNumber(5);    


	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}
