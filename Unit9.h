//---------------------------------------------------------------------------

#ifndef Unit9H
#define Unit9H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "cspin.h"
//---------------------------------------------------------------------------
class TForm9 : public TForm
{
__published:	// IDE-managed Components
	TComboBox *counterDDL;
	TLabel *label_counter;
	TLabel *label_reset;
	TCSpinEdit *input_reset;
	TButton *Button1;
	TButton *Button2;
	TCheckBox *chkWithTimer;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall chkWithTimerClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm9(TComponent* Owner);
	UnicodeString result;
    int reset_val;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm9 *Form9;
//---------------------------------------------------------------------------
#endif
