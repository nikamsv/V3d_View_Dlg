// DialogDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "Dialog.h"
#include "DialogDlg.h"
#include "afxdialogex.h"

BEGIN_MESSAGE_MAP(CDialogDlg, CDialog)
	ON_WM_PAINT()
END_MESSAGE_MAP()

CDialogDlg::CDialogDlg(CWnd* pParent) : CDialog(IDD_DIALOG_DIALOG, pParent)
{
	m_hGraphicDriver = ((CDialogApp*)AfxGetApp())->GetGraphicDriver();
}


BOOL CDialogDlg::OnInitDialog()
{
	return TRUE;
}

void CDialogDlg::OnPaint()
{
	CPaintDC dc(this);

	UpdateWindow();

	m_hViewer_1 = new V3d_Viewer(m_hGraphicDriver);
	m_hViewer_2 = new V3d_Viewer(m_hGraphicDriver);
	m_hViewer_3 = new V3d_Viewer(m_hGraphicDriver);

	m_hViewer_1->SetDefaultBackgroundColor(Quantity_NOC_BLACK);
	m_hViewer_2->SetDefaultBackgroundColor(Quantity_NOC_BLACK);
	m_hViewer_3->SetDefaultBackgroundColor(Quantity_NOC_BLACK);

	m_hWNTWindow_1 = new WNT_Window(GetDlgItem(IDC_STATIC_1)->GetSafeHwnd());
	m_hWNTWindow_2 = new WNT_Window(GetDlgItem(IDC_STATIC_2)->GetSafeHwnd());
	m_hWNTWindow_3 = new WNT_Window(GetDlgItem(IDC_STATIC_3)->GetSafeHwnd());

	m_hView_1 = m_hViewer_1->CreateView();
	m_hView_2 = m_hViewer_2->CreateView();
	m_hView_3 = m_hViewer_3->CreateView();

	m_hView_1->SetWindow(m_hWNTWindow_1);
	m_hView_2->SetWindow(m_hWNTWindow_2);
	m_hView_3->SetWindow(m_hWNTWindow_3);

	ReleaseDC(&dc);
}

