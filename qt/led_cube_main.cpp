#include "led_cube_main.h"
#include "ui_led_cube_main.h"

LED_Cube_Main::LED_Cube_Main(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LED_Cube_Main)
{
    ui->setupUi(this);

    // Change Window Options
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint); //Set window to fixed size
    this->setStyleSheet("background-color: black;");

    // Label Pictures
    QPixmap horizontal_line_pm(":/images/images/horizontal_line.png");
    QPixmap vertical_line_pm(":/images/images/vertical_line.png");

    // Set Pictures on Labels
    // Edge    
    ui->edge_3->setPixmap(vertical_line_pm);
    ui->edge_4->setPixmap(vertical_line_pm);
    ui->edge_6->setPixmap(horizontal_line_pm);
    ui->edge_7->setPixmap(horizontal_line_pm);
    ui->edge_8->setPixmap(horizontal_line_pm);

    // Change Labeloptions
    // Edge
    ui->edge_3->setText("");
    ui->edge_4->setText("");
    ui->edge_6->setText("");
    ui->edge_7->setText("");
    ui->edge_8->setText("");
    // Speed
    ui->label_05x->setText("0.5x");
    ui->label_1x->setText("1x");
    ui->label_2x->setText("2x");
    ui->label_05x->setStyleSheet("QLabel {font: 9pt; color : white; }");
    ui->label_1x->setStyleSheet("QLabel {font: 9pt; color : white; }");
    ui->label_2x->setStyleSheet("QLabel {font: 9pt; color : white; }");
    // Secondsstring
    ui->SecondsString_label->setStyleSheet("QLabel {font: 16pt; color : white; background-color: gray}");
    ui->SecondsString_label->setText("");
    ui->SecondsString_label->setHidden(true);
    // CurrentSeconds
    ui->Current_Seconds_label->setStyleSheet("QLabel {font: 10pt; color : white; background-color: gray}");

    // Change Buttonoptions
    // Set Shortcuts
    ui->Button_Holdtime->setShortcut(tr("h"));
    ui->Button_Load->setShortcut(Qt::Key_F9);
    ui->Button_Save->setShortcut(Qt::Key_F8);
    ui->Button_Delete_All->setShortcut(tr("x"));
    // Second Edit Area
    ui->Button_key_0->setShortcut(tr("0"));
    ui->Button_key_1->setShortcut(tr("1"));
    ui->Button_key_2->setShortcut(tr("2"));
    ui->Button_key_3->setShortcut(tr("3"));
    ui->Button_key_4->setShortcut(tr("4"));
    ui->Button_key_5->setShortcut(tr("5"));
    ui->Button_key_6->setShortcut(tr("6"));
    ui->Button_key_7->setShortcut(tr("7"));
    ui->Button_key_8->setShortcut(tr("8"));
    ui->Button_key_9->setShortcut(tr("9"));    
    ui->Button_Return->setShortcut(QKeySequence(Qt::Key_Backspace));
    ui->Button_Accept_SecondsString->setShortcut(QKeySequence(Qt::Key_Enter));
    ui->Button_Abort_SecondSelection->setShortcut(QKeySequence(Qt::Key_Escape));
    // Set hidden
    ui->Button_key_0->setHidden(true);
    ui->Button_key_1->setHidden(true);
    ui->Button_key_2->setHidden(true);
    ui->Button_key_3->setHidden(true);
    ui->Button_key_4->setHidden(true);
    ui->Button_key_5->setHidden(true);
    ui->Button_key_6->setHidden(true);
    ui->Button_key_7->setHidden(true);
    ui->Button_key_8->setHidden(true);
    ui->Button_key_9->setHidden(true);
    ui->Button_Return->setHidden(true);
    ui->Button_Accept_SecondsString->setHidden(true);    
    ui->Button_MilliSeconds->setHidden(true);
    ui->Button_Seconds->setHidden(true);
    ui->Button_Abort_SecondSelection->setHidden(true);

    // Change Slideroptions
    ui->Slider_SpeedRegulation->setDisabled(true);
    ui->Slider_SpeedRegulation->setStyleSheet("border: none; outline: none;");

    // Define Pictures
    // Button Pictures
    QPixmap Button_Save_pm(":/images/images/Button_Save.png");
    QPixmap Button_Load_pm(":/images/images/Button_Load.png");
    QPixmap Button_New_pm(":/images/images/Button_New.png");
    QPixmap Button_Back_pm(":/images/images/Button_Back.png");
    QPixmap Button_Delete_All_pm(":/images/images/Button_Delete_All.png");
    QPixmap Button_Holdtime_pm(":/images/images/Button_Holdtime.png");
    QPixmap Button_Level_1_pm(":/images/images/Button_Level_1.png");
    QPixmap Button_Level_2_pm(":/images/images/Button_Level_2.png");
    QPixmap Button_Level_3_pm(":/images/images/Button_Level_3.png");
    QPixmap Button_Level_4_pm(":/images/images/Button_Level_4.png");
    QPixmap Button_Level_5_pm(":/images/images/Button_Level_5.png");
    QPixmap Button_Level_6_pm(":/images/images/Button_Level_6.png");
    QPixmap Button_Level_7_pm(":/images/images/Button_Level_7.png");
    QPixmap Button_Level_8_pm(":/images/images/Button_Level_8.png");
    QPixmap Button_Level_1_small_pm(":/images/images/Button_Level_1_small.png");
    QPixmap Button_Level_2_small_pm(":/images/images/Button_Level_2_small.png");
    QPixmap Button_Level_3_small_pm(":/images/images/Button_Level_3_small.png");
    QPixmap Button_Level_4_small_pm(":/images/images/Button_Level_4_small.png");
    QPixmap Button_Level_5_small_pm(":/images/images/Button_Level_5_small.png");
    QPixmap Button_Level_6_small_pm(":/images/images/Button_Level_6_small.png");
    QPixmap Button_Level_7_small_pm(":/images/images/Button_Level_7_small.png");
    QPixmap Button_Level_8_small_pm(":/images/images/Button_Level_8_small.png");
    QPixmap Button_Play_pm(":/images/images/Button_Play.png");
    QPixmap Button_PlayLoop_pm(":/images/images/Button_PlayLoop.png");
    QPixmap Button_Check_Accept_Part_for_Next_Part_pm(":/images/images/Button_Check_Accept_Part_for_Next_Part_unchecked.png");
    QPixmap Button_Move_To_A_Layer_Behind_pm(":/images/images/Button_Move_To_A_Layer_Behind_unchecked.png");
    QPixmap Button_Move_To_A_Layer_InFront_pm(":/images/images/Button_Move_To_A_Layer_InFront_unchecked.png");
    QPixmap Button_Fill_Clicked_View_pm(":/images/images/Button_Fill_Clicked_View.png");
    QPixmap Button_Unfill_Clicked_View_pm(":/images/images/Button_Unfill_Clicked_View.png");
    QPixmap Button_Rotate_Right_View_pm(":/images/images/Button_Rotate_Right_View_unchecked.png");
    QPixmap Button_Rotate_Left_View_pm(":/images/images/Button_Rotate_Left_View_unchecked.png");
    QPixmap Button_Mirror_View_pm(":/images/images/Button_Mirror_View_unchecked.png");
    QPixmap Button_KabinettRight3DView_pm(":/images/images/Button_KabinettRight3DView.png");
    QPixmap Button_KabinettLeft3DView_pm(":/images/images/Button_KabinettLeft3DView.png");
    QPixmap Button_IsometricRight3DView_pm(":/images/images/Button_IsometricRight3DView.png");
    QPixmap Button_IsometricLeft3DView_pm(":/images/images/Button_IsometricLeft3DView.png");
    QPixmap Button_Select_Front_View_pm(":/images/images/Button_Select_Front_View.png");
    QPixmap Button_Select_Top_View_pm(":/images/images/Button_Select_Top_View.png");
    QPixmap Button_Select_Right_View_pm(":/images/images/Button_Select_Right_View.png");
    QPixmap Button_key_0_pm(":/images/images/Button_key_0.png");
    QPixmap Button_key_1_pm(":/images/images/Button_key_1.png");
    QPixmap Button_key_2_pm(":/images/images/Button_key_2.png");
    QPixmap Button_key_3_pm(":/images/images/Button_key_3.png");
    QPixmap Button_key_4_pm(":/images/images/Button_key_4.png");
    QPixmap Button_key_5_pm(":/images/images/Button_key_5.png");
    QPixmap Button_key_6_pm(":/images/images/Button_key_6.png");
    QPixmap Button_key_7_pm(":/images/images/Button_key_7.png");
    QPixmap Button_key_8_pm(":/images/images/Button_key_8.png");
    QPixmap Button_key_9_pm(":/images/images/Button_key_9.png");
    QPixmap Button_Return_pm(":/images/images/Button_Return.png");
    QPixmap Button_Accept_SecondsString_pm(":/images/images/Button_Accept_SecondsString.png");
    QPixmap Button_Seconds_pm(":/images/images/Button_Seconds.png");
    QPixmap Button_MilliSeconds_pm(":/images/images/Button_MilliSeconds.png");
    QPixmap Button_Start_From_Part_pm(":/images/images/Button_Start_From_Part_unchecked.png");
    QPixmap Button_Abort_SecondSelection_pm(":/images/images/Button_Abort_SecondSelection.png");

    // Set Pictures on Buttons
    ui->Button_Save->setIcon(Button_Save_pm);
    ui->Button_Load->setIcon(Button_Load_pm);
    ui->Button_New->setIcon(Button_New_pm);
    ui->Button_Back->setIcon(Button_Back_pm);
    ui->Button_Delete_All->setIcon(Button_Delete_All_pm);
    ui->Button_Holdtime->setIcon(Button_Holdtime_pm);
    ui->Button_Level_1->setIcon(Button_Level_1_pm);
    ui->Button_Level_2->setIcon(Button_Level_2_pm);
    ui->Button_Level_3->setIcon(Button_Level_3_pm);
    ui->Button_Level_4->setIcon(Button_Level_4_pm);
    ui->Button_Level_5->setIcon(Button_Level_5_pm);
    ui->Button_Level_6->setIcon(Button_Level_6_pm);
    ui->Button_Level_7->setIcon(Button_Level_7_pm);
    ui->Button_Level_8->setIcon(Button_Level_8_pm);
    ui->Button_Top_Level_1->setIcon(Button_Level_1_small_pm);
    ui->Button_Top_Level_2->setIcon(Button_Level_2_small_pm);
    ui->Button_Top_Level_3->setIcon(Button_Level_3_small_pm);
    ui->Button_Top_Level_4->setIcon(Button_Level_4_small_pm);
    ui->Button_Top_Level_5->setIcon(Button_Level_5_small_pm);
    ui->Button_Top_Level_6->setIcon(Button_Level_6_small_pm);
    ui->Button_Top_Level_7->setIcon(Button_Level_7_small_pm);
    ui->Button_Top_Level_8->setIcon(Button_Level_8_small_pm);
    ui->Button_Right_Level_1->setIcon(Button_Level_1_small_pm);
    ui->Button_Right_Level_2->setIcon(Button_Level_2_small_pm);
    ui->Button_Right_Level_3->setIcon(Button_Level_3_small_pm);
    ui->Button_Right_Level_4->setIcon(Button_Level_4_small_pm);
    ui->Button_Right_Level_5->setIcon(Button_Level_5_small_pm);
    ui->Button_Right_Level_6->setIcon(Button_Level_6_small_pm);
    ui->Button_Right_Level_7->setIcon(Button_Level_7_small_pm);
    ui->Button_Right_Level_8->setIcon(Button_Level_8_small_pm);
    ui->Button_Play->setIcon(Button_Play_pm);
    ui->Button_PlayLoop->setIcon(Button_PlayLoop_pm);
    ui->Button_Check_Accept_Part_for_Next_Part->setIcon(Button_Check_Accept_Part_for_Next_Part_pm);
    ui->Button_Move_To_A_Layer_Behind->setIcon(Button_Move_To_A_Layer_Behind_pm);
    ui->Button_Move_To_A_Layer_InFront->setIcon(Button_Move_To_A_Layer_InFront_pm);
    ui->Button_Fill_Clicked_View->setIcon(Button_Fill_Clicked_View_pm);
    ui->Button_Unfill_Clicked_View->setIcon(Button_Unfill_Clicked_View_pm);
    ui->Button_Rotate_Right_View->setIcon(Button_Rotate_Right_View_pm);
    ui->Button_Rotate_Left_View->setIcon(Button_Rotate_Left_View_pm);
    ui->Button_Mirror_View->setIcon(Button_Mirror_View_pm);
    ui->Button_KabinettRight3DView->setIcon(Button_KabinettRight3DView_pm);
    ui->Button_KabinettLeft3DView->setIcon(Button_KabinettLeft3DView_pm);
    ui->Button_IsometricRight3DView->setIcon(Button_IsometricRight3DView_pm);
    ui->Button_IsometricLeft3DView->setIcon(Button_IsometricLeft3DView_pm);
    ui->Button_Select_Front_View->setIcon(Button_Select_Front_View_pm);
    ui->Button_Select_Top_View->setIcon(Button_Select_Top_View_pm);
    ui->Button_Select_Right_View->setIcon(Button_Select_Right_View_pm);
    ui->Button_key_0->setIcon(Button_key_0_pm);
    ui->Button_key_1->setIcon(Button_key_1_pm);
    ui->Button_key_2->setIcon(Button_key_2_pm);
    ui->Button_key_3->setIcon(Button_key_3_pm);
    ui->Button_key_4->setIcon(Button_key_4_pm);
    ui->Button_key_5->setIcon(Button_key_5_pm);
    ui->Button_key_6->setIcon(Button_key_6_pm);
    ui->Button_key_7->setIcon(Button_key_7_pm);
    ui->Button_key_8->setIcon(Button_key_8_pm);
    ui->Button_key_9->setIcon(Button_key_9_pm);
    ui->Button_Return->setIcon(Button_Return_pm);
    ui->Button_Accept_SecondsString->setIcon(Button_Accept_SecondsString_pm);
    ui->Button_Seconds->setIcon(Button_Seconds_pm);
    ui->Button_MilliSeconds->setIcon(Button_MilliSeconds_pm);
    ui->Button_Start_From_Part->setIcon(Button_Start_From_Part_pm);
    ui->Button_Abort_SecondSelection->setIcon(Button_Abort_SecondSelection_pm);

    // Correct Icon Size
    // for Button Size
    ui->Button_Save->setIconSize(Button_Save_pm.rect().size());
    ui->Button_Load->setIconSize(Button_Load_pm.rect().size());
    ui->Button_New->setIconSize(Button_New_pm.rect().size());
    ui->Button_Back->setIconSize(Button_Back_pm.rect().size());
    ui->Button_Delete_All->setIconSize(Button_Delete_All_pm.rect().size());
    ui->Button_Holdtime->setIconSize(Button_Holdtime_pm.rect().size());
    ui->Button_Level_1->setIconSize(Button_Level_1_pm.rect().size());
    ui->Button_Level_2->setIconSize(Button_Level_2_pm.rect().size());
    ui->Button_Level_3->setIconSize(Button_Level_3_pm.rect().size());
    ui->Button_Level_4->setIconSize(Button_Level_4_pm.rect().size());
    ui->Button_Level_5->setIconSize(Button_Level_5_pm.rect().size());
    ui->Button_Level_6->setIconSize(Button_Level_6_pm.rect().size());
    ui->Button_Level_7->setIconSize(Button_Level_7_pm.rect().size());
    ui->Button_Level_8->setIconSize(Button_Level_8_pm.rect().size());
    ui->Button_Top_Level_1->setIconSize(Button_Level_1_small_pm.rect().size());
    ui->Button_Top_Level_2->setIconSize(Button_Level_2_small_pm.rect().size());
    ui->Button_Top_Level_3->setIconSize(Button_Level_3_small_pm.rect().size());
    ui->Button_Top_Level_4->setIconSize(Button_Level_4_small_pm.rect().size());
    ui->Button_Top_Level_5->setIconSize(Button_Level_5_small_pm.rect().size());
    ui->Button_Top_Level_6->setIconSize(Button_Level_6_small_pm.rect().size());
    ui->Button_Top_Level_7->setIconSize(Button_Level_7_small_pm.rect().size());
    ui->Button_Top_Level_8->setIconSize(Button_Level_8_small_pm.rect().size());
    ui->Button_Right_Level_1->setIconSize(Button_Level_1_small_pm.rect().size());
    ui->Button_Right_Level_2->setIconSize(Button_Level_2_small_pm.rect().size());
    ui->Button_Right_Level_3->setIconSize(Button_Level_3_small_pm.rect().size());
    ui->Button_Right_Level_4->setIconSize(Button_Level_4_small_pm.rect().size());
    ui->Button_Right_Level_5->setIconSize(Button_Level_5_small_pm.rect().size());
    ui->Button_Right_Level_6->setIconSize(Button_Level_6_small_pm.rect().size());
    ui->Button_Right_Level_7->setIconSize(Button_Level_7_small_pm.rect().size());
    ui->Button_Right_Level_8->setIconSize(Button_Level_8_small_pm.rect().size());
    ui->Button_Play->setIconSize(Button_Play_pm.rect().size());
    ui->Button_PlayLoop->setIconSize(Button_PlayLoop_pm.rect().size());
    ui->Button_Check_Accept_Part_for_Next_Part->setIconSize(Button_Check_Accept_Part_for_Next_Part_pm.rect().size());
    ui->Button_Move_To_A_Layer_Behind->setIconSize(Button_Move_To_A_Layer_Behind_pm.rect().size());
    ui->Button_Move_To_A_Layer_InFront->setIconSize(Button_Move_To_A_Layer_InFront_pm.rect().size());
    ui->Button_Fill_Clicked_View->setIconSize(Button_Fill_Clicked_View_pm.rect().size());
    ui->Button_Unfill_Clicked_View->setIconSize(Button_Unfill_Clicked_View_pm.rect().size());
    ui->Button_Rotate_Right_View->setIconSize(Button_Rotate_Right_View_pm.rect().size());
    ui->Button_Rotate_Left_View->setIconSize(Button_Rotate_Left_View_pm.rect().size());
    ui->Button_Mirror_View->setIconSize(Button_Mirror_View_pm.rect().size());
    ui->Button_KabinettRight3DView->setIconSize(Button_KabinettRight3DView_pm.rect().size());
    ui->Button_KabinettLeft3DView->setIconSize(Button_KabinettLeft3DView_pm.rect().size());
    ui->Button_IsometricRight3DView->setIconSize(Button_IsometricRight3DView_pm.rect().size());
    ui->Button_IsometricLeft3DView->setIconSize(Button_IsometricLeft3DView_pm.rect().size());
    ui->Button_Select_Front_View->setIconSize(Button_Select_Front_View_pm.rect().size());
    ui->Button_Select_Top_View->setIconSize(Button_Select_Top_View_pm.rect().size());
    ui->Button_Select_Right_View->setIconSize(Button_Select_Right_View_pm.rect().size());
    ui->Button_key_0->setIconSize(Button_key_0_pm.rect().size());
    ui->Button_key_1->setIconSize(Button_key_1_pm.rect().size());
    ui->Button_key_2->setIconSize(Button_key_2_pm.rect().size());
    ui->Button_key_3->setIconSize(Button_key_3_pm.rect().size());
    ui->Button_key_4->setIconSize(Button_key_4_pm.rect().size());
    ui->Button_key_5->setIconSize(Button_key_5_pm.rect().size());
    ui->Button_key_6->setIconSize(Button_key_6_pm.rect().size());
    ui->Button_key_7->setIconSize(Button_key_7_pm.rect().size());
    ui->Button_key_8->setIconSize(Button_key_8_pm.rect().size());
    ui->Button_key_9->setIconSize(Button_key_9_pm.rect().size());
    ui->Button_Return->setIconSize(Button_Return_pm.rect().size());
    ui->Button_Accept_SecondsString->setIconSize(Button_Accept_SecondsString_pm.rect().size());
    ui->Button_Seconds->setIconSize(Button_Seconds_pm.rect().size());
    ui->Button_MilliSeconds->setIconSize(Button_MilliSeconds_pm.rect().size());
    ui->Button_Start_From_Part->setIconSize(Button_Start_From_Part_pm.rect().size());
    ui->Button_Abort_SecondSelection->setIconSize(Button_Abort_SecondSelection_pm.rect().size());

    // Set Button Stylesheets (Keine Umrandung, Keine Punktlinie beim anklicken)
    ui->Button_Save->setStyleSheet("border: none; outline: none;");
    ui->Button_Load->setStyleSheet("border: none; outline: none;");
    ui->Button_New->setStyleSheet("border: none; outline: none;");
    ui->Button_Back->setStyleSheet("border: none; outline: none;");
    ui->Button_Delete_All->setStyleSheet("border: none; outline: none;");
    ui->Button_Holdtime->setStyleSheet("border: none; outline: none;");
    ui->Button_Level_1->setStyleSheet("border: none; outline: none;");
    ui->Button_Level_2->setStyleSheet("border: none; outline: none;");
    ui->Button_Level_3->setStyleSheet("border: none; outline: none;");
    ui->Button_Level_4->setStyleSheet("border: none; outline: none;");
    ui->Button_Level_5->setStyleSheet("border: none; outline: none;");
    ui->Button_Level_6->setStyleSheet("border: none; outline: none;");
    ui->Button_Level_7->setStyleSheet("border: none; outline: none;");
    ui->Button_Level_8->setStyleSheet("border: none; outline: none;");
    ui->Button_Top_Level_1->setStyleSheet("border: none; outline: none;");
    ui->Button_Top_Level_2->setStyleSheet("border: none; outline: none;");
    ui->Button_Top_Level_3->setStyleSheet("border: none; outline: none;");
    ui->Button_Top_Level_4->setStyleSheet("border: none; outline: none;");
    ui->Button_Top_Level_5->setStyleSheet("border: none; outline: none;");
    ui->Button_Top_Level_6->setStyleSheet("border: none; outline: none;");
    ui->Button_Top_Level_7->setStyleSheet("border: none; outline: none;");
    ui->Button_Top_Level_8->setStyleSheet("border: none; outline: none;");
    ui->Button_Right_Level_1->setStyleSheet("border: none; outline: none;");
    ui->Button_Right_Level_2->setStyleSheet("border: none; outline: none;");
    ui->Button_Right_Level_3->setStyleSheet("border: none; outline: none;");
    ui->Button_Right_Level_4->setStyleSheet("border: none; outline: none;");
    ui->Button_Right_Level_5->setStyleSheet("border: none; outline: none;");
    ui->Button_Right_Level_6->setStyleSheet("border: none; outline: none;");
    ui->Button_Right_Level_7->setStyleSheet("border: none; outline: none;");
    ui->Button_Right_Level_8->setStyleSheet("border: none; outline: none;");
    ui->Button_Top_View->setStyleSheet("border: none; outline: none;");
    ui->Button_Right_View->setStyleSheet("border: none; outline: none;");
    ui->Button_Play->setStyleSheet("border: none; outline: none;");
    ui->Button_PlayLoop->setStyleSheet("border: none; outline: none;");
    ui->Button_Check_Accept_Part_for_Next_Part->setStyleSheet("border: none; outline: none;");
    ui->Button_Move_To_A_Layer_Behind->setStyleSheet("border: none; outline: none;");
    ui->Button_Unfill_Clicked_View->setStyleSheet("border: none; outline: none;");
    ui->Button_Rotate_Right_View->setStyleSheet("border: none; outline: none;");
    ui->Button_Rotate_Left_View->setStyleSheet("border: none; outline: none;");
    ui->Button_Mirror_View->setStyleSheet("border: none; outline: none;");
    ui->Button_Move_To_A_Layer_InFront->setStyleSheet("border: none; outline: none;");
    ui->Button_KabinettRight3DView->setStyleSheet("border: none; outline: none;");
    ui->Button_KabinettLeft3DView->setStyleSheet("border: none; outline: none;");
    ui->Button_IsometricRight3DView->setStyleSheet("border: none; outline: none;");
    ui->Button_IsometricLeft3DView->setStyleSheet("border: none; outline: none;");
    ui->Button_Select_Front_View->setStyleSheet("border: none; outline: none;");
    ui->Button_Select_Top_View->setStyleSheet("border: none; outline: none;");
    ui->Button_Select_Right_View->setStyleSheet("border: none; outline: none;");
    ui->Button_key_0->setStyleSheet("border: none; outline: none;");
    ui->Button_key_1->setStyleSheet("border: none; outline: none;");
    ui->Button_key_2->setStyleSheet("border: none; outline: none;");
    ui->Button_key_3->setStyleSheet("border: none; outline: none;");
    ui->Button_key_4->setStyleSheet("border: none; outline: none;");
    ui->Button_key_5->setStyleSheet("border: none; outline: none;");
    ui->Button_key_6->setStyleSheet("border: none; outline: none;");
    ui->Button_key_7->setStyleSheet("border: none; outline: none;");
    ui->Button_key_8->setStyleSheet("border: none; outline: none;");
    ui->Button_key_9->setStyleSheet("border: none; outline: none;");
    ui->Button_Return->setStyleSheet("border: none; outline: none;");
    ui->Button_Accept_SecondsString->setStyleSheet("border: none; outline: none;");
    ui->Button_Seconds->setStyleSheet("border: none; outline: none;");
    ui->Button_MilliSeconds->setStyleSheet("border: none; outline: none;");
    ui->Button_Start_From_Part->setStyleSheet("border: none; outline: none;");
    ui->Button_Abort_SecondSelection->setStyleSheet("border: none; outline: none;");


    // initialize Scenes
    // LED_Selection_Scene
    LED_Selection_Scene = new MouseEventScene(this);
    LED_Selection_Scene->setSceneRect(LED_Selection_Scene_StartX,LED_Selection_Scene_StartY,LED_Selection_Scene_Size,LED_Selection_Scene_Size);
    ui->LED_Selection_View->setScene(LED_Selection_Scene);
    // LED_Selection_Top_Scene
    LED_Selection_Top_Scene = new MouseEventScene(this);
    LED_Selection_Top_Scene->setSceneRect(LED_Selection_Top_Scene_StartX,LED_Selection_Top_Scene_StartY,LED_Selection_Top_Scene_Size,LED_Selection_Top_Scene_Size);
    ui->LED_Selection_Top_View->setScene(LED_Selection_Top_Scene);
    // LED_Selection_Right_Scene
    LED_Selection_Right_Scene = new MouseEventScene(this);
    LED_Selection_Right_Scene->setSceneRect(LED_Selection_Right_Scene_StartX,LED_Selection_Right_Scene_StartY,LED_Selection_Right_Scene_Size,LED_Selection_Right_Scene_Size);
    ui->LED_Selection_Right_View->setScene(LED_Selection_Right_Scene);
    // LED_CUBE_3D_Scene
    LED_CUBE_3D_Scene = new MouseEventScene(this);
    LED_CUBE_3D_Scene->setSceneRect(LED_Cube_3D_Scene_StartX, LED_Cube_3D_Scene_StartY, LED_Cube_3D_Scene_SizeX, LED_Cube_3D_Scene_SizeY);
    ui->LED_Cube_3D_View->setScene(LED_CUBE_3D_Scene);
    // ProgramNumber_Scene
    ProgramNumber_Scene = new MouseEventScene(this);
    ProgramNumber_Scene->setSceneRect(ProgramNumber_Scene_StartX,ProgramNumber_Scene_StartY,ProgramNumber_Scene_SizeX,ProgramNumber_Scene_SizeY);
    ui->ProgramNumber_View->setScene(ProgramNumber_Scene);

    // Set GraphicsView Stylesheet
    ui->LED_Selection_View->setStyleSheet("border: none; outline: none;");
    ui->LED_Selection_Top_View->setStyleSheet("border: none; outline: none;");
    ui->LED_Selection_Right_View->setStyleSheet("border: none; outline: none;");
    ui->LED_Cube_3D_View->setStyleSheet("border: none; outline: none;");
    ui->ProgramNumber_View->setStyleSheet("border: none; outline: none;");

    // Set Views hidden
    ui->LED_Selection_Top_View->setHidden(true);
    ui->LED_Selection_Right_View->setHidden(true);

    // connect Signals with Slots
    // connect Scene on the Specific mousehandles
    // LED_Selection_Scene should react on mousepressed and mousemove
    connect(LED_Selection_Scene, SIGNAL(SigPosPressed(QPointF)), this, SLOT(Recive_LED_Selection_Scene_Pressed_Pos(QPointF)));
    connect(LED_Selection_Scene, SIGNAL(SigPosHold(QPointF)), this, SLOT(Recive_LED_Selection_Scene_Hold_Pos(QPointF)));
    // LED_Selection_Top_Scene should react on mousepressed and mousemove
    connect(LED_Selection_Top_Scene, SIGNAL(SigPosPressed(QPointF)), this, SLOT(Recive_LED_Selection_Top_Scene_Pressed_Pos(QPointF)));
    connect(LED_Selection_Top_Scene, SIGNAL(SigPosHold(QPointF)), this, SLOT(Recive_LED_Selection_Top_Scene_Hold_Pos(QPointF)));
    // LED_Selection_Right_Scene should react on mousepressed and mousemove
    connect(LED_Selection_Right_Scene, SIGNAL(SigPosPressed(QPointF)), this, SLOT(Recive_LED_Selection_Right_Scene_Pressed_Pos(QPointF)));
    connect(LED_Selection_Right_Scene, SIGNAL(SigPosHold(QPointF)), this, SLOT(Recive_LED_Selection_Right_Scene_Hold_Pos(QPointF)));
    // ProgramNumber_Scene should react on mousepressed and mousemove and mouserelease
    connect(ProgramNumber_Scene, SIGNAL(SigPosPressed(QPointF)), this, SLOT(Recive_ProgramNumber_Scene_Pos(QPointF)));
    connect(ProgramNumber_Scene, SIGNAL(SigPosHold(QPointF)), this, SLOT(DrawSelectionRectangle(QPointF)));
    connect(ProgramNumber_Scene, SIGNAL(SigMouseReleased()), this, SLOT(ProgramNumber_Scene_Mouse_Released()));

    // connect Slider
    connect(ui->Slider_SpeedRegulation, SIGNAL(valueChanged(int)), this, SLOT(Recive_Slider_SpeedRegulation_valueChanged(int)));

    // Timer
    Playtimer = new QTimer(this);
    PlayLooptimer = new QTimer(this);
    // connect Timer
    connect(Playtimer, SIGNAL(timeout()), this, SLOT(ClockCounterPlay()));
    connect(PlayLooptimer, SIGNAL(timeout()), this, SLOT(ClockCounterPlayLoop()));

    // Initialisations
    LED_Cube_Main::ResetLED_Selection_Array();
    m_iAnzProgramNr = 0;
    m_Top_View_toggle = false;      // LED_Cube_Main::on_Button_Top_View_clicked() will change it after the init to true
    m_Right_View_toggle = false;    // LED_Cube_Main::on_Button_Right_View_clicked() will change it after the init to true
    m_toggledPlay_Button = false;
    m_toggledPlayLoop_Button = false;
    m_toggledAcceptforNextPart = false;
    m_MoveToALayerBehind = false;
    m_MoveToALayerInFront = false;
    m_MoveToALayerBehindorInFront = false;
    m_Mirror_View = false;
    m_Rotate_Left_View = false;
    m_Rotate_Right_View = false;
    m_Rotate_Left_or_Right = false;
    m_WhichDirectionToRotate = false;
    m_validProgramPartFlag = false;
    m_DisabledwhilePlayFlag = false;
    m_WhichDirectionToMove = false;
    m_SelectionRectangleIsDrawn = false;
    m_ProgramNumber_Scene_Clicked = false;
    m_ProgramNumber_Scene_Clicked_Released = false;
    m_iProgramCounter = 0;
    m_iClockCounter = 0;
    m_iProgrampartValue = m_iAnzProgramNr;
    m_iNumberOfRectEdges = 0;
    m_iSpeedRegulator = 100;
    m_iSliderRegulator = 100;
    m_SecondsString = "";
    m_iSecondsStringlength = 0;
    m_no_Existing_Programpart = true;
    m_Start_From_Part_Toggle = false;
    m_LoadingDialog_Existing = false;

    // initialize the Level set Level 1 to aktive
    LED_Cube_Main::on_Button_Level_1_clicked();

    // initialize the Top Level set Level 1 to aktive
    LED_Cube_Main::on_Button_Top_Level_1_clicked();

    // initialize the Right Level set Level 1 to aktive
    LED_Cube_Main::on_Button_Right_Level_1_clicked();

    // Default Value for m_iSeconds is 0.1 sec
    m_iSeconds = 100;
    // Display Default Seconds
    ui->Current_Seconds_label->setText(QString("%2").arg(m_iSeconds) + " ms");

    m_Deleted = true; // create a new "clean" new Programpart
    // start with a new Programpart and save it
    LED_Cube_Main::on_Button_New_clicked();

    // Do not Display Top View and Right View and put Buttons with each other
    LED_Cube_Main::on_Button_Top_View_clicked();
    LED_Cube_Main::on_Button_Right_View_clicked();

    // Set FrontViewWindow as Default and disable Button_Select_Front_View
    LED_Cube_Main::on_Button_Select_Front_View_clicked();

    // Set MilliSeconds as default on the Second Selection Area
    LED_Cube_Main::on_Button_MilliSeconds_clicked();

    // Set IsometricRight as default 3D-View
    LED_Cube_Main::on_Button_IsometricRight3DView_clicked();

    // Initialize the RotationLogic Look-Up-Table
    LED_Cube_Main::RotationLogic();
    LED_Cube_Main::ResetRotationVariables();

    // Prototyping
    ui->label1->setStyleSheet("QLabel {font: 10pt; color : white; }");
    ui->label2->setStyleSheet("QLabel {font: 10pt; color : white; }");
}

LED_Cube_Main::~LED_Cube_Main()
{
    delete ui;
}

// Key handle: Beginn
void LED_Cube_Main::keyPressEvent(QKeyEvent* event)
{
    switch(event->key())
    {        
    case Qt::Key_Delete:
        if(!m_LoadingDialog_Existing && !m_DisabledwhilePlayFlag)
        {
            // if the Loadingdialog is not on the Screen
            LED_Cube_Main::KeyDeletePressed();
        }
        break;
    default:
        QString keyText = event->text().toUpper();
        // KeyPressEvent is faster than a Shortcut
        // All KeyPressEvents defined here depend on a fast calling
        if(keyText == "N")
        {
            if(!m_LoadingDialog_Existing && !m_DisabledwhilePlayFlag)
            {
                // if the Loadingdialog is not on the Screen
                LED_Cube_Main::on_Button_New_clicked();
            }
        }
        else if(keyText == "Z")
        {
            if(!m_LoadingDialog_Existing && !m_DisabledwhilePlayFlag)
            {
                // if the Loadingdialog is not on the Screen
                LED_Cube_Main::on_Button_Back_clicked();
            }
        }
        break;
    }
}
// Key handle: End

void LED_Cube_Main::mousePressEvent(QMouseEvent* event)
{
    QPointF Position = event->pos();
    ui->label1->setText("PosX:" + QString("%1").arg(Position.x()));
    ui->label2->setText("PosY:" + QString("%1").arg(Position.y()));
}
void LED_Cube_Main::mouseMoveEvent(QMouseEvent* event)
{
    QPointF Position = event->pos();
    ui->label1->setText("PosX:" + QString("%1").arg(Position.x()));
    ui->label2->setText("PosY:" + QString("%1").arg(Position.y()));
}

void LED_Cube_Main::LocateChoosenLEDPressed()
// Member Funktions: Beginn
{
    // Picture Size is Step
    int Step = 45;
    // The Position of the Mouse relative to all LEDs (in Numeric 0,1,2)
    int LEDPositionX;
    int LEDPositionY;
    int LEDPositionZ;

    // Take Offset out
    LEDPositionX = m_nMouseClick_X_Coordinate - LED_Selection_Scene_StartX;
    LEDPositionX = LEDPositionX/Step;       // Round to Position relative to Step

    // Take Offset out
    LEDPositionY = m_nMouseClick_Y_Coordinate - LED_Selection_Scene_StartY;
    LEDPositionY = LEDPositionY/Step;       // Round to Position relative to Step

    // Take the LED of the choosen level
    LEDPositionZ = m_iChoosenLevel;

    // Toggle bool-variable of the choosen LED
    if(LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ])
    {
        LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ] = false;
        LED_Selection_Array_Program[LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = false;

        // Mirrored Draw?
        if(m_Mirror_View)
        {
            LED_Selection_Array[LEDPositionX][LEDPositionY][7 - LEDPositionZ] = false;
            LED_Selection_Array_Program[LEDPositionX][LEDPositionY][7 - LEDPositionZ][m_iProgrampartValue] = false;
        }
    }
    else
    {
        LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ] = true;
        LED_Selection_Array_Program[LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = true;

        // Mirrored Draw?
        if(m_Mirror_View)
        {
            LED_Selection_Array[LEDPositionX][LEDPositionY][7 - LEDPositionZ] = true;
            LED_Selection_Array_Program[LEDPositionX][LEDPositionY][7 - LEDPositionZ][m_iProgrampartValue] = true;
        }
    }

    if(m_no_Existing_Programpart)
    {
        // now a valid Programpart exists
        m_no_Existing_Programpart = false;
    }

    PressedMouseValueX = LEDPositionX;
    PressedMouseValueY = LEDPositionY;
}
void LED_Cube_Main::LocateChoosenLEDHold()
{
    // Picture Size is Step
    int Step = 45;
    // The Position of the Mouse relative to all LEDs (in Numeric 0,1,2)
    int LEDPositionX;
    int LEDPositionY;
    int LEDPositionZ;

    // Take Offset out
    LEDPositionX = m_nMouseClick_X_Coordinate - LED_Selection_Top_Scene_StartX;
    LEDPositionX = LEDPositionX/Step;       // Round to Position relative to Step

    // Take Offset out
    LEDPositionY = m_nMouseClick_Y_Coordinate - LED_Selection_Top_Scene_StartY;
    LEDPositionY = LEDPositionY/Step;       // Round to Position relative to Step

    // Take the LED of the choosen level
    LEDPositionZ = m_iChoosenLevel;

    // if the mouse didnt leave the current LED while pushed and moved dont toggle LED
    if(LEDPositionX != PressedMouseValueX || LEDPositionY != PressedMouseValueY)
    {
        // Toggle bool-variable of the choosen LED
        if(LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ])
        {
            LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ] = false;
            LED_Selection_Array_Program[LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = false;
            // Mirrored Draw?
            if(m_Mirror_View)
            {
                LED_Selection_Array[LEDPositionX][LEDPositionY][7 - LEDPositionZ] = false;
                LED_Selection_Array_Program[LEDPositionX][LEDPositionY][7 - LEDPositionZ][m_iProgrampartValue] = false;
            }
        }
        else
        {
            LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ] = true;
            LED_Selection_Array_Program[LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = true;
            // Mirrored Draw?
            if(m_Mirror_View)
            {
                LED_Selection_Array[LEDPositionX][LEDPositionY][7 - LEDPositionZ] = true;
                LED_Selection_Array_Program[LEDPositionX][LEDPositionY][7 - LEDPositionZ][m_iProgrampartValue] = true;
            }
        }
    }

    if(m_no_Existing_Programpart)
    {
        // now a valid Programpart exists
        m_no_Existing_Programpart = false;
    }

    PressedMouseValueX = LEDPositionX;
    PressedMouseValueY = LEDPositionY;
}
void LED_Cube_Main::LocateChoosenLEDPressed_Top()
{

    // Picture Size is Step
    int Step = 19;
    // The Position of the Mouse relative to all LEDs (in Numeric 0,1,2)
    int LEDPositionX;
    int LEDPositionY;
    int LEDPositionZ;

    // Take Offset out
    LEDPositionX = m_nMouseClick_X_Top_Coordinate - LED_Selection_Top_Scene_StartX;
    LEDPositionX = LEDPositionX/Step;       // Round to Position relative to Step

    // Take Offset out
    LEDPositionZ = m_nMouseClick_Z_Top_Coordinate - LED_Selection_Top_Scene_StartY; // LED_Selection_Top_Scene_StartY is the y Position of the Scene dedicated to the View not to the Program
    LEDPositionZ = LEDPositionZ/Step;       // Round to Position relative to Step

    // Take the LED from the top of the Cube
    LEDPositionY = m_iChoosenLevel_Top;

    // Toggle bool-variable of the choosen LED
    if(LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ])
    {
        LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ] = false;
        LED_Selection_Array_Program[LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = false;

        // Mirrored Draw?
        if(m_Mirror_View)
        {
            LED_Selection_Array[LEDPositionX][7 - LEDPositionY][LEDPositionZ] = false;
            LED_Selection_Array_Program[LEDPositionX][7 - LEDPositionY][LEDPositionZ][m_iProgrampartValue] = false;
        }
    }
    else
    {
        LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ] = true;
        LED_Selection_Array_Program[LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = true;

        // Mirrored Draw?
        if(m_Mirror_View)
        {
            LED_Selection_Array[LEDPositionX][7 - LEDPositionY][LEDPositionZ] = true;
            LED_Selection_Array_Program[LEDPositionX][7 - LEDPositionY][LEDPositionZ][m_iProgrampartValue] = true;
        }
    }

    if(m_no_Existing_Programpart)
    {
        // now a valid Programpart exists
        m_no_Existing_Programpart = false;
    }

    PressedMouseValueX_Top = LEDPositionX;
    PressedMouseValueZ_Top = LEDPositionZ;
}
void LED_Cube_Main::LocateChoosenLEDHold_Top()
{
    // Picture Size is Step
    int Step = 19;
    // The Position of the Mouse relative to all LEDs (in Numeric 0,1,2)
    int LEDPositionX;
    int LEDPositionY;
    int LEDPositionZ;

    // Take Offset out
    LEDPositionX = m_nMouseClick_X_Top_Coordinate - LED_Selection_Top_Scene_StartX;
    LEDPositionX = LEDPositionX/Step;       // Round to Position relative to Step

    // Take Offset out
    LEDPositionZ = m_nMouseClick_Z_Top_Coordinate - LED_Selection_Top_Scene_StartY; // LED_Selection_Top_Scene_StartY is the y Position of the Scene dedicated to the View not to the Program
    LEDPositionZ = LEDPositionZ/Step;       // Round to Position relative to Step

    // Take the LED from the top of the Cube
    LEDPositionY = m_iChoosenLevel_Top;

    // if the mouse didnt leave the current LED while pushed and moved dont toggle LED
    if(LEDPositionX != PressedMouseValueX_Top || LEDPositionZ != PressedMouseValueZ_Top)
    {
        // Toggle bool-variable of the choosen LED
        if(LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ])
        {
            LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ] = false;
            LED_Selection_Array_Program[LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = false;

            // Mirrored Draw?
            if(m_Mirror_View)
            {
                LED_Selection_Array[LEDPositionX][7 - LEDPositionY][LEDPositionZ] = false;
                LED_Selection_Array_Program[LEDPositionX][7 - LEDPositionY][LEDPositionZ][m_iProgrampartValue] = false;
            }
        }
        else
        {
            LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ] = true;
            LED_Selection_Array_Program[LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = true;

            // Mirrored Draw?
            if(m_Mirror_View)
            {
                LED_Selection_Array[LEDPositionX][7 - LEDPositionY][LEDPositionZ] = true;
                LED_Selection_Array_Program[LEDPositionX][7 - LEDPositionY][LEDPositionZ][m_iProgrampartValue] = true;
            }
        }
    }

    if(m_no_Existing_Programpart)
    {
        // now a valid Programpart exists
        m_no_Existing_Programpart = false;
    }

    PressedMouseValueX_Top = LEDPositionX;
    PressedMouseValueZ_Top = LEDPositionZ;
}
void LED_Cube_Main::LocateChoosenLEDPressed_Right()
{

    // Picture Size is Step
    int Step = 19;
    // The Position of the Mouse relative to all LEDs (in Numeric 0,1,2)
    int LEDPositionX;
    int LEDPositionY;
    int LEDPositionZ;

    // Take Offset out
    LEDPositionY = m_nMouseClick_Y_Right_Coordinate - LED_Selection_Right_Scene_StartY;
    LEDPositionY = LEDPositionY/Step;       // Round to Position relative to Step

    // Take Offset out
    LEDPositionZ = m_nMouseClick_Z_Right_Coordinate - LED_Selection_Right_Scene_StartX; // LED_Selection_Right_Scene_StartY is the y Position of the Scene dedicated to the View not to the Program
    LEDPositionZ = LEDPositionZ/Step;       // Round to Position relative to Step

    // Take the LED from the top of the Cube
    LEDPositionX = m_iChoosenLevel_Right;

    // Toggle bool-variable of the choosen LED
    if(LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ])
    {
        LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ] = false;
        LED_Selection_Array_Program[LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = false;

        // Mirrored Draw?
        if(m_Mirror_View)
        {
            LED_Selection_Array[7 - LEDPositionX][LEDPositionY][LEDPositionZ] = false;
            LED_Selection_Array_Program[7 - LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = false;
        }
    }
    else
    {
        LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ] = true;
        LED_Selection_Array_Program[LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = true;

        // Mirrored Draw?
        if(m_Mirror_View)
        {
            LED_Selection_Array[7 - LEDPositionX][LEDPositionY][LEDPositionZ] = true;
            LED_Selection_Array_Program[7 - LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = true;
        }
    }

    if(m_no_Existing_Programpart)
    {
        // now a valid Programpart exists
        m_no_Existing_Programpart = false;
    }

    PressedMouseValueY_Right = LEDPositionY;
    PressedMouseValueZ_Right = LEDPositionZ;
}
void LED_Cube_Main::LocateChoosenLEDHold_Right()
{
    // Picture Size is Step
    int Step = 19;
    // The Position of the Mouse relative to all LEDs (in Numeric 0,1,2)
    int LEDPositionX;
    int LEDPositionY;
    int LEDPositionZ;

    // Take Offset out
    LEDPositionY = m_nMouseClick_Y_Right_Coordinate - LED_Selection_Right_Scene_StartY;
    LEDPositionY = LEDPositionY/Step;       // Round to Position relative to Step

    // Take Offset out
    LEDPositionZ = m_nMouseClick_Z_Right_Coordinate - LED_Selection_Right_Scene_StartX; // LED_Selection_Right_Scene_StartY is the y Position of the Scene dedicated to the View not to the Program
    LEDPositionZ = LEDPositionZ/Step;       // Round to Position relative to Step

    // Take the LED from the top of the Cube
    LEDPositionX = m_iChoosenLevel_Right;

    // if the mouse didnt leave the current LED while pushed and moved dont toggle LED
    if(LEDPositionY != PressedMouseValueY_Right || LEDPositionZ != PressedMouseValueZ_Right)
    {
        // Toggle bool-variable of the choosen LED
        if(LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ])
        {
            LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ] = false;
            LED_Selection_Array_Program[LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = false;

            // Mirrored Draw?
            if(m_Mirror_View)
            {
                LED_Selection_Array[7 - LEDPositionX][LEDPositionY][LEDPositionZ] = false;
                LED_Selection_Array_Program[7 - LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = false;
            }
        }
        else
        {
            LED_Selection_Array[LEDPositionX][LEDPositionY][LEDPositionZ] = true;
            LED_Selection_Array_Program[LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = true;

            // Mirrored Draw?
            if(m_Mirror_View)
            {
                LED_Selection_Array[7 - LEDPositionX][LEDPositionY][LEDPositionZ] = true;
                LED_Selection_Array_Program[7 - LEDPositionX][LEDPositionY][LEDPositionZ][m_iProgrampartValue] = true;
            }
        }
    }

    if(m_no_Existing_Programpart)
    {
        // now a valid Programpart exists
        m_no_Existing_Programpart = false;
    }

    PressedMouseValueY_Right = LEDPositionY;
    PressedMouseValueZ_Right = LEDPositionZ;
}
void LED_Cube_Main::SaveSecondsforChoosenParts()
{
    int i, a;
    int PartsToChange;
    // Change m_iChoosenSecondsProgram for the Selected ProgramParts
    for(i = 0; i < m_iNumberOfRectEdges; i++)
    {
        m_iChoosenSecondsProgram[m_iSelectedProgramParts[i]] = m_iSeconds;
    }

    // Update the View
    // Delete "old" RectEdges
    LED_Cube_Main::DeleteOldRectEdges();

    PartsToChange = m_iAnzProgramNr - m_iSelectedProgramParts[0];
    // Delete all Programmparts till the last selected ProgramPartPosition is reached and delete that part too
    for(i = 0; i < PartsToChange; i++)
    {
        for(a = 0; a < 3; a++)
        {
            // Items are no Parents or Children so we need to remove every Item
            // Every Programpart got a Rect- and two Textitems -> 3 Items to remove
            ItemList = ProgramNumber_Scene->items();    // Get the Itemlist of ProgramNumber_Scene
            QGraphicsItem *item;
            item = ItemList.first();                    // Initialize the item which should be deleted
            ProgramNumber_Scene->removeItem(item);      // delete item form the ProgramNumber_Scene
        }
    }

    for(i = m_iSelectedProgramParts[0]; i < m_iAnzProgramNr; i++)
    {
        LED_Cube_Main::CreateNewProgramSquare(i);
    }
}
void LED_Cube_Main::PutSelectedLEDsOnScene()
{
    // Define Koordination
    int PosX = 0, PosY = 0;

    // Take the LED of the choosen level
    int z = m_iChoosenLevel;

    // Delete all Items on the Scene
    qDeleteAll(LED_Selection_Scene->items());

    for(int x = 0; x < 8; x++)
    {
        for(int y = 0; y < 8; y++)
        {
            if(LED_Selection_Array[x][y][z])
            {
                // Define Picture
                QPixmap led_on_45px_pm(":/images/images/led_on_45px.png");
                // Define GraphicsItem
                QGraphicsPixmapItem* item = LED_Selection_Scene->addPixmap(led_on_45px_pm);
                item->setPos(PosX, PosY);
            }
            else
            {
                // Define Picture
                QPixmap led_out_45px_pm(":/images/images/led_out_45px.png");
                // Define GraphicsItem
                QGraphicsPixmapItem* item = LED_Selection_Scene->addPixmap(led_out_45px_pm);
                item->setPos(PosX, PosY);
            }
            PosY = PosY + 45;
        }
        PosX = PosX + 45;
        PosY = 0;
    }
}
void LED_Cube_Main::PutSelectedLEDsOn_Top_Scene()
{
    // Define Koordination
    int PosX = 0, PosZ = 0;

    // Take the LED from the top of the Cube
    int y = m_iChoosenLevel_Top;

    // Delete all Items on the Scene
    qDeleteAll(LED_Selection_Top_Scene->items());

    for(int x = 0; x < 8; x++)
    {
        for(int z = 0; z < 8; z++)
        {
            if(LED_Selection_Array[x][y][z])
            {
                // Define Picture
                QPixmap led_on_19px_pm(":/images/images/led_on_19px.png");
                // Define GraphicsItem
                QGraphicsPixmapItem* item = LED_Selection_Top_Scene->addPixmap(led_on_19px_pm);
                item->setPos(PosZ, PosX);
            }
            else
            {
                // Define Picture
                QPixmap led_out_19px_pm(":/images/images/led_out_19px.png");
                // Define GraphicsItem
                QGraphicsPixmapItem* item = LED_Selection_Top_Scene->addPixmap(led_out_19px_pm);
                item->setPos(PosZ, PosX);
            }
            PosZ = PosZ + 19;
        }
        PosX = PosX + 19;
        PosZ = 0;
    }
}
void LED_Cube_Main::PutSelectedLEDsOn_Right_Scene()
{
    // Define Koordination
    int PosY = 0, PosZ = 0;

    // Take the LED from the top of the Cube
    int x = m_iChoosenLevel_Right;

    // Delete all Items on the Scene
    qDeleteAll(LED_Selection_Right_Scene->items());

    for(int y = 0; y < 8; y++)
    {
        for(int z = 0; z < 8; z++)
        {
            if(LED_Selection_Array[x][y][z])
            {
                // Define Picture
                QPixmap led_on_19px_pm(":/images/images/led_on_19px.png");
                // Define GraphicsItem
                QGraphicsPixmapItem* item = LED_Selection_Right_Scene->addPixmap(led_on_19px_pm);
                item->setPos(PosZ, PosY);
            }
            else
            {
                // Define Picture
                QPixmap led_out_19px_pm(":/images/images/led_out_19px.png");
                // Define GraphicsItem
                QGraphicsPixmapItem* item = LED_Selection_Right_Scene->addPixmap(led_out_19px_pm);
                item->setPos(PosZ, PosY);
            }
            PosZ = PosZ + 19;
        }
        PosY = PosY + 19;
        PosZ = 0;
    }
}
void LED_Cube_Main::PutSelectedLEDsOn_3D_Scene()
{
    // Define Koordination
    int XOffset = 0, YOffset = 0;     // Offset for PosX and PosY to get a 3D View
    int YOffsetsave = 0;
    int XOffsetReduktion = 0, YOffsetReduktion = 0; // Reduces the X and Y Offset -> creat Levels
    int MetricOffset = 0;
    int PosX = 0, PosY = 0;
    int StepY = 0, StepX = 0;                 // the Distance the LED are away form each other
    QPoint FrontLeftTopCorner;
    QPoint FrontLeftBottomCorner;
    QPoint FrontRightTopCorner;
    QPoint FrontRightBottomCorner;
    // Back Points
    QPoint BackLeftTopCorner;
    QPoint BackLeftBottomCorner;
    QPoint BackRightTopCorner;
    QPoint BackRightBottomCorner;

    // Delete all Items on the Scene
    qDeleteAll(LED_CUBE_3D_Scene->items());

    QPen pen(Qt::gray, 2);

    // 3D View Configuration, these Parameters define the Coordination for the Cube and LEDs Drawn below
    if(m_KabinettRight3DView)
    {
        // Declear Cube Points in KabinettRight View
        // Front Points
        FrontLeftTopCorner.setX(14);
        FrontLeftTopCorner.setY(149);
        FrontLeftBottomCorner.setX(14);
        FrontLeftBottomCorner.setY(430);
        FrontRightTopCorner.setX(294);
        FrontRightTopCorner.setY(149);
        FrontRightBottomCorner.setX(294);
        FrontRightBottomCorner.setY(430);
        // Back Points
        BackLeftTopCorner.setX(120);
        BackLeftTopCorner.setY(9);
        BackLeftBottomCorner.setX(120);
        BackLeftBottomCorner.setY(290);
        BackRightTopCorner.setX(399);
        BackRightTopCorner.setY(9);
        BackRightBottomCorner.setX(399);
        BackRightBottomCorner.setY(290);

        // set LED Offset
        XOffset = 110, YOffset = 0;
        PosX = XOffset, PosY = YOffset;

        // set stepsize
        StepY = StepX = 40;

        // set LED Offsetreduktion
        XOffsetReduktion = -15;
        YOffsetReduktion = 20;

        // MetricOffset
        MetricOffset = 0;
    }
    else if(m_KabinettLeft3DView)
    {
        // Declear Cube Points in KabinettLeft View
        // Front Points
        FrontLeftTopCorner.setX(120);
        FrontLeftTopCorner.setY(149);
        FrontLeftBottomCorner.setX(120);
        FrontLeftBottomCorner.setY(430);
        FrontRightTopCorner.setX(399);
        FrontRightTopCorner.setY(149);
        FrontRightBottomCorner.setX(399);
        FrontRightBottomCorner.setY(430);
        // Back Points
        BackLeftTopCorner.setX(14);
        BackLeftTopCorner.setY(9);
        BackLeftBottomCorner.setX(14);
        BackLeftBottomCorner.setY(290);
        BackRightTopCorner.setX(294);
        BackRightTopCorner.setY(9);
        BackRightBottomCorner.setX(294);
        BackRightBottomCorner.setY(290);

        // Declear LED Offset
        XOffset = 6, YOffset = 0;
        PosX = XOffset, PosY = YOffset;

        // set stepsize
        StepY = StepX = 40;

        // set LED Offsetreduktion
        XOffsetReduktion = 15;
        YOffsetReduktion = 20;

        // MetricOffset
        MetricOffset = 0;
    }
    else if(m_IsometricRight3DView)
    {
        // Declear Cube Points in KabinettLeft View
        // Front Points
        FrontLeftTopCorner.setX(28);
        FrontLeftTopCorner.setY(118);
        FrontLeftBottomCorner.setX(28);
        FrontLeftBottomCorner.setY(328);
        FrontRightTopCorner.setX(202);
        FrontRightTopCorner.setY(222);
        FrontRightBottomCorner.setX(202);
        FrontRightBottomCorner.setY(433);
        // Back Points
        BackLeftTopCorner.setX(202);
        BackLeftTopCorner.setY(13);
        BackLeftBottomCorner.setX(202);
        BackLeftBottomCorner.setY(222);
        BackRightTopCorner.setX(378);
        BackRightTopCorner.setY(118);
        BackRightBottomCorner.setX(378);
        BackRightBottomCorner.setY(327);

        // Declear LED Offset
        XOffset = 193, YOffset = 3;
        PosX = XOffset, PosY = YOffset;

        // set stepsize
        StepX = 25;
        StepY = 30;

        // set LED Offsetreduktion
        XOffsetReduktion = -25;
        YOffsetReduktion = 15;

        MetricOffset = 15;
    }
    else if(m_IsometricLeft3DView)
    {
        // Declear Cube Points in KabinettLeft View
        // Front Points
        FrontLeftTopCorner.setX(28);
        FrontLeftTopCorner.setY(118);
        FrontLeftBottomCorner.setX(28);
        FrontLeftBottomCorner.setY(328);
        FrontRightTopCorner.setX(202);
        FrontRightTopCorner.setY(222);
        FrontRightBottomCorner.setX(202);
        FrontRightBottomCorner.setY(433);
        // Back Points
        BackLeftTopCorner.setX(202);
        BackLeftTopCorner.setY(13);
        BackLeftBottomCorner.setX(202);
        BackLeftBottomCorner.setY(222);
        BackRightTopCorner.setX(378);
        BackRightTopCorner.setY(118);
        BackRightBottomCorner.setX(378);
        BackRightBottomCorner.setY(327);

        // Declear LED Offset
        XOffset = 18, YOffset = 108;
        PosX = XOffset, PosY = YOffset;

        // set stepsize
        StepX = 25;
        StepY = 30;

        // set LED Offsetreduktion
        XOffsetReduktion = 25;
        YOffsetReduktion = 15;

        MetricOffset = -15;
    }

    // Draw Cube in the choosen View on the 3D View
    // Draw Cube Lines
    LED_CUBE_3D_Scene->addLine(QLineF(FrontLeftTopCorner, FrontRightTopCorner),pen);
    LED_CUBE_3D_Scene->addLine(QLineF(FrontLeftTopCorner, FrontLeftBottomCorner),pen);
    LED_CUBE_3D_Scene->addLine(QLineF(FrontLeftTopCorner, BackLeftTopCorner),pen);
    LED_CUBE_3D_Scene->addLine(QLineF(FrontRightBottomCorner, FrontRightTopCorner),pen);
    LED_CUBE_3D_Scene->addLine(QLineF(FrontRightBottomCorner, FrontLeftBottomCorner),pen);
    LED_CUBE_3D_Scene->addLine(QLineF(FrontRightBottomCorner, BackRightBottomCorner), pen);
    LED_CUBE_3D_Scene->addLine(QLineF(BackLeftBottomCorner, FrontLeftBottomCorner),pen);
    LED_CUBE_3D_Scene->addLine(QLineF(BackLeftBottomCorner, BackLeftTopCorner),pen);
    LED_CUBE_3D_Scene->addLine(QLineF(BackLeftBottomCorner, BackRightBottomCorner),pen);
    LED_CUBE_3D_Scene->addLine(QLineF(BackRightTopCorner, FrontRightTopCorner),pen);
    LED_CUBE_3D_Scene->addLine(QLineF(BackRightTopCorner, BackRightBottomCorner),pen);
    LED_CUBE_3D_Scene->addLine(QLineF(BackRightTopCorner, BackLeftTopCorner),pen);

    // save YOffset
    YOffsetsave = YOffset;

    // Draw LEDs on the 3D View
    for(int z = 7; z >= 0; z--)
    {
        for(int x = 0; x < 8; x++)
        {
            for(int y = 0; y < 8; y++)
            {
                if(LED_Selection_Array[x][y][z])
                {
                    // Define Picture
                    QPixmap led_on_15px_pm(":/images/images/led_on_19px.png");
                    // Define GraphicsItem
                    QGraphicsPixmapItem* item = LED_CUBE_3D_Scene->addPixmap(led_on_15px_pm);
                    item->setPos(PosX, PosY);
                }
                PosY = PosY + StepY;
            }
            YOffset = YOffset + MetricOffset;
            PosY = YOffset;
            PosX = PosX + StepX;
        }
        YOffset = YOffsetsave;
        XOffset = XOffset + XOffsetReduktion;
        YOffset = YOffset + YOffsetReduktion;
        YOffsetsave = YOffset;
        PosX = XOffset;
        PosY = YOffset;
    }
}
void LED_Cube_Main::ResetLEDScenes()
{
    // Set variables for LEDs out
    LED_Cube_Main::ResetLED_Selection_Array();

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
    LED_Cube_Main::PutSelectedLEDsOnScene();
    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
    LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();
}
void LED_Cube_Main::SetChoosenLeveldisabled()
{
    // enable all Buttons
    ui->Button_Level_1->setEnabled(true);
    ui->Button_Level_2->setEnabled(true);
    ui->Button_Level_3->setEnabled(true);
    ui->Button_Level_4->setEnabled(true);
    ui->Button_Level_5->setEnabled(true);
    ui->Button_Level_6->setEnabled(true);
    ui->Button_Level_7->setEnabled(true);
    ui->Button_Level_8->setEnabled(true);

    // set choosen Level disabled
    switch(m_iChoosenLevel)
    {
    case 0:
        ui->Button_Level_1->setEnabled(false);
        break;
    case 1:
        ui->Button_Level_2->setEnabled(false);
        break;
    case 2:
        ui->Button_Level_3->setEnabled(false);
        break;
    case 3:
        ui->Button_Level_4->setEnabled(false);
        break;
    case 4:
        ui->Button_Level_5->setEnabled(false);
        break;
    case 5:
        ui->Button_Level_6->setEnabled(false);
        break;
    case 6:
        ui->Button_Level_7->setEnabled(false);
        break;
    case 7:
        ui->Button_Level_8->setEnabled(false);
        break;
    }
}
void LED_Cube_Main::SetChoosen_Top_Leveldisabled()
{
    // enable all Buttons
    ui->Button_Top_Level_1->setEnabled(true);
    ui->Button_Top_Level_2->setEnabled(true);
    ui->Button_Top_Level_3->setEnabled(true);
    ui->Button_Top_Level_4->setEnabled(true);
    ui->Button_Top_Level_5->setEnabled(true);
    ui->Button_Top_Level_6->setEnabled(true);
    ui->Button_Top_Level_7->setEnabled(true);
    ui->Button_Top_Level_8->setEnabled(true);

    // set choosen Level disabled, Inverse Look @on_Button_Top_Level_1_clicked
    switch(m_iChoosenLevel_Top)
    {
    case 0:
        ui->Button_Top_Level_1->setEnabled(false);
        break;
    case 1:
        ui->Button_Top_Level_2->setEnabled(false);
        break;
    case 2:
        ui->Button_Top_Level_3->setEnabled(false);
        break;
    case 3:
        ui->Button_Top_Level_4->setEnabled(false);
        break;
    case 4:
        ui->Button_Top_Level_5->setEnabled(false);
        break;
    case 5:
        ui->Button_Top_Level_6->setEnabled(false);
        break;
    case 6:
        ui->Button_Top_Level_7->setEnabled(false);
        break;
    case 7:
        ui->Button_Top_Level_8->setEnabled(false);
        break;
    }


}
void LED_Cube_Main::SetChoosen_Right_Leveldisabled()
{
    // enable all Buttons
    ui->Button_Right_Level_1->setEnabled(true);
    ui->Button_Right_Level_2->setEnabled(true);
    ui->Button_Right_Level_3->setEnabled(true);
    ui->Button_Right_Level_4->setEnabled(true);
    ui->Button_Right_Level_5->setEnabled(true);
    ui->Button_Right_Level_6->setEnabled(true);
    ui->Button_Right_Level_7->setEnabled(true);
    ui->Button_Right_Level_8->setEnabled(true);

    // set choosen Level disabled, Inverse Look @on_Button_Top_Level_1_clicked
    switch(m_iChoosenLevel_Right)
    {
    case 0:
        ui->Button_Right_Level_8->setEnabled(false);
        break;
    case 1:
        ui->Button_Right_Level_7->setEnabled(false);
        break;
    case 2:
        ui->Button_Right_Level_6->setEnabled(false);
        break;
    case 3:
        ui->Button_Right_Level_5->setEnabled(false);
        break;
    case 4:
        ui->Button_Right_Level_4->setEnabled(false);
        break;
    case 5:
        ui->Button_Right_Level_3->setEnabled(false);
        break;
    case 6:
        ui->Button_Right_Level_2->setEnabled(false);
        break;
    case 7:
        ui->Button_Right_Level_1->setEnabled(false);
        break;
    }


}
void LED_Cube_Main::CreateNewProgramSquare(int ProgramPartPositionNumber)
{    
    int ProgramPartPositionNumberDividedBy4 = ProgramPartPositionNumber/4;
    int StartX = 12, StartY = 7, X = 0, Y = 0, Length = 80;
    int RelativeXPos = ProgramPartPositionNumber - ProgramPartPositionNumberDividedBy4*4;
    float SecondFloat = m_iChoosenSecondsProgram[ProgramPartPositionNumber];
    QString PartNumber, Seconds;

    LED_Cube_Main::SetProgramNumberSceneRectandSliderPos(ProgramPartPositionNumber);

    // Get Position of the Programpart
    X = StartX + Length*RelativeXPos;
    Y = StartY + Length*ProgramPartPositionNumberDividedBy4;

    // Get Text of Programpart
    PartNumber = "#" + PartNumber.append(QString("%1").arg(ProgramPartPositionNumber + 1));


    // Draw Programpart
    QGraphicsRectItem* square = new QGraphicsRectItem(X,Y,Length,Length);
    QGraphicsTextItem* PartNumber_text = new QGraphicsTextItem(PartNumber);
    QString Seconds_added_Text;
    int Secondsdistance = 0;
    int ProgramNumberdistance = 0;

    // Edit ProgramNumber-text Position
    if(ProgramPartPositionNumber < 10)
    {
        ProgramNumberdistance = 19;
    }
    else if(ProgramPartPositionNumber < 100)
    {
        ProgramNumberdistance = 13;
    }
    else if(ProgramPartPositionNumber < 1000)
    {
        ProgramNumberdistance = 5;
    }
    else if(ProgramPartPositionNumber >= 1000)
    {
        ProgramNumberdistance = 0;
    }


    // Edit Second-text Position
    if(m_iChoosenSecondsProgram[ProgramPartPositionNumber] <= 250)
    {        
        // if the programpart is less then 250 ms long display the text with milliseconds
        Seconds.append(QString("%2").arg(SecondFloat));
        Seconds_added_Text = tr(" ms");
        if(m_iChoosenSecondsProgram[ProgramPartPositionNumber] < 10)
        {
            // if m_iChoosenSecondsProgram[ProgramPartPositionNumber] is a one-digit,
            // the distance on the Square must change
            Secondsdistance = 23;
        }
        else if(m_iChoosenSecondsProgram[ProgramPartPositionNumber] < 100)
        {
            // if m_iChoosenSecondsProgram[ProgramPartPositionNumber] got two digits,
            // the distance on the Square must change
            Secondsdistance = 19;
        }
        else if(m_iChoosenSecondsProgram[ProgramPartPositionNumber] >= 100)
        {
            // if m_iChoosenSecondsProgram[ProgramPartPositionNumber] got three digits,
            // the distance on the Square must change
            Secondsdistance = 15;
        }
    }
    else
    {
        // if the programpart is more then 250 ms long display the text with seconds
        Seconds_added_Text = tr(" s");
        if(m_iChoosenSecondsProgram[ProgramPartPositionNumber] < 1000)
        {
            Secondsdistance = 21;
            Seconds.append(QString("%2").arg(SecondFloat/1000));
        }
        else if(m_iChoosenSecondsProgram[ProgramPartPositionNumber] < 10000)
        {
            Secondsdistance = 25;
            Seconds.append(QString("%2").arg(SecondFloat/1000));
        }
        else if(m_iChoosenSecondsProgram[ProgramPartPositionNumber] < 100000)
        {
            Secondsdistance = 20;
            Seconds.append(QString("%2").arg(SecondFloat/1000));
        }
        else if(m_iChoosenSecondsProgram[ProgramPartPositionNumber] <= 1000000)
        {
            Secondsdistance = 20;
            Seconds.append(QString("%2").arg(SecondFloat/1000));
        }
        else if(m_iChoosenSecondsProgram[ProgramPartPositionNumber] > 1000000)
        {
            Secondsdistance = 20;
            Seconds.append(QString("%2").arg(SecondFloat/1000));
            int SecondsLength = Seconds.length();
            Seconds = "..." + Seconds.mid(SecondsLength - 4);
        }
    }
    QGraphicsTextItem* Seconds_text = new QGraphicsTextItem(Seconds + Seconds_added_Text);
    QFont QGraphicsTextItem_PartNumber_font;
    QFont QGraphicsTextItem_Seconds_font;

    // Fill square with color
    square->setBrush(QBrush(Qt::gray));

    // Set font
    QGraphicsTextItem_PartNumber_font.setPointSize(15);
    QGraphicsTextItem_Seconds_font.setPointSize(8);

    // Set Text on the Square
    PartNumber_text->setPos(X + ProgramNumberdistance,Y + 15);
    Seconds_text->setPos(X + Secondsdistance,Y + 45);
    PartNumber_text->setDefaultTextColor(Qt::white);
    Seconds_text->setDefaultTextColor(Qt::white);
    PartNumber_text->setFont(QGraphicsTextItem_PartNumber_font);
    Seconds_text->setFont(QGraphicsTextItem_Seconds_font);

    ProgramNumber_Scene->addItem(square);
    ProgramNumber_Scene->addItem(PartNumber_text);
    ProgramNumber_Scene->addItem(Seconds_text);
}
void LED_Cube_Main::ResetLED_Selection_Array()
{
    for(int x = 0; x < 8; x++)
    {
        for(int y = 0; y < 8; y++)
        {
            for(int z = 0; z < 8; z++)
            {
                // Init for LED_Selection_Array -> all false
                LED_Selection_Array[x][y][z] = false;
            }
        }
    }
}
void LED_Cube_Main::PlayLEDPorgram()
{
    // Enable the Slider
    ui->Slider_SpeedRegulation->setEnabled(true);


    if(m_Start_From_Part_Toggle)
    {
        // if the User wants to start the Program at a specific programpart
        // and he selected one or more Programparts, start with the "first"
        // selected Programpart
        if(m_iNumberOfRectEdges > 0)
        {
            m_iProgramCounter = m_iSelectedProgramParts[0];
        }
        else
        {
           m_iProgramCounter = 0;
        }
    }
    else
    {
        // if the User doesn´t want to start the Program at a specific programpart
        // start the program with the first Programpart
        m_iProgramCounter = 0;
    }

    // Decides what function to call
    // if the user clicked the normal Play Button it calls the "one-time" play function
    // if the user clicked the Loop Play Button it calls the periodically play function
    if(m_toggledPlay_Button)
    {
        // set the first Programpart on the Scene (the First LED Logic choosen by the User)
        LED_Cube_Main::PlayNextElement();

        // if the timer is startet, the slot function of the timer is called (here it is LED_Cube_Main::ClockCounterPlay())
        Playtimer -> start(1);
    }
    else if(m_toggledPlayLoop_Button)
    {
        // set the first Programpart on the Scene (the First LED Logic choosen by the User)
        LED_Cube_Main::PlayLoopNextElement();

        // if the timer is startet, the slot function of the timer is called (here it is LED_Cube_Main::ClockCounterPlayLoop())
        PlayLooptimer -> start(1);
    }
}
void LED_Cube_Main::PlayNextElement()
{
    // set the current LED Logic on the scene (the PlayLEDPorgramm will step through each Programpart and set it on the screen)
    for(int x = 0; x < 8; x++)
    {
        for(int y = 0; y < 8; y++)
        {
            for(int z = 0; z < 8; z++)
            {
                LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y][z][m_iProgramCounter];
            }
        }
    }
    LED_Cube_Main::PutSelectedLEDsOnScene();
    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
    LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();

    // Set the Speed for the current Programpart
    if(m_iSliderRegulator >= 100)
    {
        m_iSpeedRegulator = m_iChoosenSecondsProgram[m_iProgramCounter]/(m_iSliderRegulator/100);
    }
    else if(m_iSliderRegulator < 100)
    {
        m_iSpeedRegulator = m_iChoosenSecondsProgram[m_iProgramCounter]/((50 + m_iSliderRegulator/2)/100);
    }

    m_iClockCounter = 0;
    m_iProgramCounter++;

}
void LED_Cube_Main::PlayLoopNextElement()
{
    // set the current LED Logic on the scene (the PlayLEDPorgramm will step through each Programpart and set it on the screen)
    for(int x = 0; x < 8; x++)
    {
        for(int y = 0; y < 8; y++)
        {
            for(int z = 0; z < 8; z++)
            {
                LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y][z][m_iProgramCounter];
            }
        }
    }
    LED_Cube_Main::PutSelectedLEDsOnScene();
    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
    LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();

    // Set the Speed for the current Programpart
    if(m_iSliderRegulator >= 100)
    {
        m_iSpeedRegulator = m_iChoosenSecondsProgram[m_iProgramCounter]/(m_iSliderRegulator/100);
    }
    else if(m_iSliderRegulator < 100)
    {
        m_iSpeedRegulator = m_iChoosenSecondsProgram[m_iProgramCounter]/((50 + m_iSliderRegulator/2)/100);
    }

    if(m_iProgramCounter == m_iAnzProgramNr-1)
    {
        // if the last element is reached restart with the first
        m_iProgramCounter = 0;
    }
    else
    {
        m_iProgramCounter++;
    }
    m_iClockCounter = 0;

}
void LED_Cube_Main::EndProgram(int iCase)
{
    // Break Programm, end Counter

    LED_Cube_Main::ResetLEDScenes();

    if(iCase == 1)
    {
        m_toggledPlay_Button = false;
        // Define Picture
        QPixmap Button_Play_pm(":/images/images/Button_Play.png");
        // Define Icon
        QIcon Button_Play_Icon(Button_Play_pm);
        // Set Icon on Button
        ui->Button_Play->setIcon(Button_Play_Icon);
        // Correct Icon Size
        ui->Button_Play->setIconSize(Button_Play_pm.rect().size());

        // Enable Play
        ui->Button_PlayLoop->setEnabled(true);

        // Stop Timer
        Playtimer->stop();
    }
    else if(iCase == 2)
    {
        m_toggledPlayLoop_Button = false;
        // Define Picture
        QPixmap Button_PlayLoop_pm(":/images/images/Button_PlayLoop.png");
        // Define Icon
        QIcon Button_PlayLoop_Icon(Button_PlayLoop_pm);
        // Set Icon on Button
        ui->Button_PlayLoop->setIcon(Button_PlayLoop_Icon);
        // Correct Icon Size
        ui->Button_PlayLoop->setIconSize(Button_PlayLoop_pm.rect().size());

        // Enable Play
        ui->Button_Play->setEnabled(true);

        // Stop Timer
        PlayLooptimer->stop();
    }
    // Reset Program Counter
    m_iProgramCounter = 0;

    // Reset Slider
    ui->Slider_SpeedRegulation->setValue(100);
    // Disable the Slider
    ui->Slider_SpeedRegulation->setDisabled(true);

    m_iSpeedRegulator = 100; // 100% standard Speed;
    m_iSliderRegulator = 100; // 100% standard Speed;

    // Enable Views and Buttons
    LED_Cube_Main::EnableafterPlay();
}
void LED_Cube_Main::DeleteAProgramPart(int ProgramPartPosition)
{
    // Delete the Selected Programpart out of the ProgramPartArray
    // This Function Only Deletes the Programparts out of the Array (not on the View)
    m_iAnzProgramNr--; // m_iAnzProgramNr is always one higher then the actual Programpart in the array
    int ispaceDifference = m_iAnzProgramNr - ProgramPartPosition; // Difference between the clicked Programpart and all Programparts
    int i, x, y, z;
    bool icacheArray[8][8][8][ispaceDifference]; // Cache for interactions

    // Save all Programparts behind the Choosen Programpart which is going to be deleted
    for(i = 0; i < ispaceDifference; i++)
    {
        for(x = 0; x < 8; x++)
        {
            for(y = 0; y < 8; y++)
            {
                for(z = 0; z < 8; z++)
                {
                    icacheArray[x][y][z][i] = LED_Selection_Array_Program[x][y][z][ProgramPartPosition + 1 + i];
                }
            }
        }
    }
    // overwrite the Programpart which should be deleted
    for(i = 0; i < ispaceDifference; i++)
    {
        for(x = 0; x < 8; x++)
        {
            for(y = 0; y < 8; y++)
            {
                for(z = 0; z < 8; z++)
                {
                    LED_Selection_Array_Program[x][y][z][ProgramPartPosition + i] = icacheArray[x][y][z][i];
                }
            }
        }
    }
}
void LED_Cube_Main::DisablewhilePlay()
{
    // set DisabledwhileplayFlag true
    m_DisabledwhilePlayFlag = true;

    // Disable Views and Buttons
    ui->LED_Selection_View->setDisabled(true);
    ui->Button_Fill_Clicked_View->setDisabled(true);
    ui->Button_Unfill_Clicked_View->setDisabled(true);
    ui->Button_Check_Accept_Part_for_Next_Part->setDisabled(true);
    ui->Button_Move_To_A_Layer_Behind->setDisabled(true);
    ui->LED_Selection_Top_View->setDisabled(true);
    ui->LED_Selection_Right_View->setDisabled(true);
    ui->Button_Load->setDisabled(true);
    ui->Button_Save->setDisabled(true);
    ui->Button_New->setDisabled(true);
    ui->Button_Holdtime->setDisabled(true);
    ui->Button_Back->setDisabled(true);
    ui->Button_Delete_All->setDisabled(true);
    ui->Current_Seconds_label->setHidden(true);
    ui->Button_Rotate_Left_View->setDisabled(true);
    ui->Button_Rotate_Right_View->setDisabled(true);
    ui->Button_Mirror_View->setDisabled(true);
    ui->Button_Move_To_A_Layer_InFront->setDisabled(true);
    ui->Button_Start_From_Part->setDisabled(true);
}
void LED_Cube_Main::EnableafterPlay()
{
    // set DisabledwhileplayFlag true
    m_DisabledwhilePlayFlag = false;

    // Disable Views and Buttons
    ui->LED_Selection_View->setEnabled(true);
    ui->Button_Fill_Clicked_View->setEnabled(true);
    ui->Button_Unfill_Clicked_View->setEnabled(true);
    ui->Button_Check_Accept_Part_for_Next_Part->setEnabled(true);
    ui->Button_Move_To_A_Layer_Behind->setEnabled(true);
    ui->LED_Selection_Top_View->setEnabled(true);
    ui->LED_Selection_Right_View->setEnabled(true);
    ui->Button_Load->setEnabled(true);
    ui->Button_Save->setEnabled(true);
    ui->Button_New->setEnabled(true);
    ui->Button_Holdtime->setEnabled(true);
    ui->Button_Back->setEnabled(true);
    ui->Button_Delete_All->setEnabled(true);
    ui->Current_Seconds_label->show();
    ui->Button_Rotate_Left_View->setEnabled(true);
    ui->Button_Rotate_Right_View->setEnabled(true);
    ui->Button_Mirror_View->setEnabled(true);
    ui->Button_Move_To_A_Layer_InFront->setEnabled(true);
    ui->Button_Start_From_Part->setEnabled(true);
}
void LED_Cube_Main::RotationLogic()
{
    // Generates the Step logic to get a Rotation
    // The 8x8x8 LED Cube got 4 Squares which need to be rotatet
    // The outermost needs 28 steps to at once rotate completely around
    // The second outermost needs 20 steps so the angular velocity of the outermost with 28 steps needs to rotate faster
    // The same applies for the two inner Squares which need 12 and 4 Steps
    // So in fact a Logic is needed (saved in a String) to know which Rotation steps need to be done at every new Programpart
    // This string can be thought of as a Look-Up-Table or an excel-sheet with data

    // Data for 20 Steps Square
    m_iRotationLogic[0][0] = 1;
    m_iRotationLogic[0][1] = 1;
    m_iRotationLogic[0][2] = 2;
    m_iRotationLogic[0][3] = 3;
    m_iRotationLogic[0][4] = 4;
    m_iRotationLogic[0][5] = 4;
    m_iRotationLogic[0][6] = 5;
    m_iRotationLogic[0][7] = 6;
    m_iRotationLogic[0][8] = 6;
    m_iRotationLogic[0][9] = 7;
    m_iRotationLogic[0][10] = 8;
    m_iRotationLogic[0][11] = 9;
    m_iRotationLogic[0][12] = 9;
    m_iRotationLogic[0][13] = 10;
    m_iRotationLogic[0][14] = 11;
    m_iRotationLogic[0][15] = 11;
    m_iRotationLogic[0][16] = 12;
    m_iRotationLogic[0][17] = 13;
    m_iRotationLogic[0][18] = 14;
    m_iRotationLogic[0][19] = 14;
    m_iRotationLogic[0][20] = 15;
    m_iRotationLogic[0][21] = 16;
    m_iRotationLogic[0][22] = 16;
    m_iRotationLogic[0][23] = 17;
    m_iRotationLogic[0][24]= 18;
    m_iRotationLogic[0][25] = 19;
    m_iRotationLogic[0][26] = 19;

    // Data for 12 Steps Square
    m_iRotationLogic[1][0] = 0;
    m_iRotationLogic[1][1] = 1;
    m_iRotationLogic[1][2] = 1;
    m_iRotationLogic[1][3] = 2;
    m_iRotationLogic[1][4] = 2;
    m_iRotationLogic[1][5] = 3;
    m_iRotationLogic[1][6] = 3;
    m_iRotationLogic[1][7] = 3;
    m_iRotationLogic[1][8] = 4;
    m_iRotationLogic[1][9] = 4;
    m_iRotationLogic[1][10] = 5;
    m_iRotationLogic[1][11] = 5;
    m_iRotationLogic[1][12] = 6;
    m_iRotationLogic[1][13] = 6;
    m_iRotationLogic[1][14] = 6;
    m_iRotationLogic[1][15] = 7;
    m_iRotationLogic[1][16] = 7;
    m_iRotationLogic[1][17] = 8;
    m_iRotationLogic[1][18] = 8;
    m_iRotationLogic[1][19] = 9;
    m_iRotationLogic[1][20] = 9;
    m_iRotationLogic[1][21] = 9;
    m_iRotationLogic[1][22] = 10;
    m_iRotationLogic[1][23] = 10;
    m_iRotationLogic[1][24]= 11;
    m_iRotationLogic[1][25] = 11;
    m_iRotationLogic[1][26] = 12;

    // Data for 4 Steps Square
    m_iRotationLogic[2][0] = 0;
    m_iRotationLogic[2][1] = 0;
    m_iRotationLogic[2][2] = 0;
    m_iRotationLogic[2][3] = 1;
    m_iRotationLogic[2][4] = 1;
    m_iRotationLogic[2][5] = 1;
    m_iRotationLogic[2][6] = 1;
    m_iRotationLogic[2][7] = 1;
    m_iRotationLogic[2][8] = 1;
    m_iRotationLogic[2][9] = 1;
    m_iRotationLogic[2][10] = 2;
    m_iRotationLogic[2][11] = 2;
    m_iRotationLogic[2][12] = 2;
    m_iRotationLogic[2][13] = 2;
    m_iRotationLogic[2][14] = 2;
    m_iRotationLogic[2][15] = 2;
    m_iRotationLogic[2][16] = 2;
    m_iRotationLogic[2][17] = 3;
    m_iRotationLogic[2][18] = 3;
    m_iRotationLogic[2][19] = 3;
    m_iRotationLogic[2][20] = 3;
    m_iRotationLogic[2][21] = 3;
    m_iRotationLogic[2][22] = 3;
    m_iRotationLogic[2][23] = 3;
    m_iRotationLogic[2][24] = 4;
    m_iRotationLogic[2][25] = 4;
    m_iRotationLogic[2][26] = 4;

    // To use this RotationLogic string we need a Logic which steps through the String and Resets the current step when needed
}
void LED_Cube_Main::ResetRotationVariables()
{
    m_iRotationStep_Front = 0;
    m_iRotationStep_Top = 0;
    m_iRotationStep_Right = 0;    
}
void LED_Cube_Main::DrawRectEdge(int PosX, int PosY)
{
    int StartX = 12, StartY = 7, X = 0, Y = 0;
    int RowValue = m_iAnzProgramNr/4;
    bool lastRow = false, noValidPosition = false, validRow = false;

    X = PosX;
    Y = PosY;

    if(Y < RowValue)
    {
        validRow = true;
    }
    if(Y == RowValue)
    {
        lastRow = true;
        // Check the last squares (round)
        if(X > m_iAnzProgramNr - (m_iAnzProgramNr/4)*4 - 1)
        {
            noValidPosition = true;
        }
    }

    // Draw Rect_Edge only if the User Clicked a valid Square and display the choosen Programpart for interactions on the Scene
    if(X < 4 && ((lastRow&&!noValidPosition)||validRow))
    {
        // Draw Edge of the choosen Rect
        QPixmap Rect_Edge_pm(":/images/images/Rect_Edge.png");
        QGraphicsPixmapItem* item = ProgramNumber_Scene->addPixmap(Rect_Edge_pm);
        item->setPos((X*80)+StartX-2, (Y*80)+StartY-2);
        item->setZValue(1); // this will draw the Rect_Edge in Front of all other Items (except the Selection Rectangle)

        // Save the Valid ProgramPart on the m_iSelectedProgrampartsString
        m_iSelectedProgramParts[m_iNumberOfRectEdges] = PosX + 4*PosY;
        // we drew a new Rect Edge -> increase m_iNumberOfRectEdges
        m_iNumberOfRectEdges++;


        // set the m_validProgramPartFlag to true, the User clicked a valid Programpart
        m_validProgramPartFlag = true;
    }
    else
    {
        // set the m_validProgramPartFlag to false, the User did not click a valid Programpart
        m_validProgramPartFlag = false;
        LED_Cube_Main::DeleteOldRectEdges();
    }
}
void LED_Cube_Main::DeleteOldRectEdges()
{
    // Rect Edges are always drawn in front of all other items(except the Selection Rectangle) on the scene
    // in fact we just need to remove the first item for m_iNumberOfRectEdges times
    // then all "old" rects are removed

    for(int i = 0; i < m_iNumberOfRectEdges; i++)
    {
        ItemList = ProgramNumber_Scene->items();    // Get the Itemlist of ProgramNumber_Scene
        QGraphicsItem *item;
        item = ItemList.first();                    // Initialize the item which should be deleted
        ProgramNumber_Scene->removeItem(item);      // delete rect edge form the ProgramNumber_Scene
    }

    // We Deleted the "old" Rect Edges, no Valid Programpart is now choosen
    m_validProgramPartFlag = false;
    m_iNumberOfRectEdges = 0;
}
void LED_Cube_Main::DeleteOldSelectionRectangle()
{
    // The Selection Rectangle is always drawn in front of all other items on the scene
    // in fact we just need to remove the first item (if the Selection Rectangle  is existing)
    if(m_SelectionRectangleIsDrawn)
    {
        ItemList = ProgramNumber_Scene->items();    // Get the Itemlist of ProgramNumber_Scene
        QGraphicsItem *item;
        item = ItemList.first();                    // Initialize the item which should be deleted
        ProgramNumber_Scene->removeItem(item);      // delete rect edge form the ProgramNumber_Scene

    }

    m_SelectionRectangleIsDrawn = false;
}
void LED_Cube_Main::DisplayTheChoosenProgrampartOnTheScene(int PosX, int PosY)
{
    if(m_validProgramPartFlag)
    {
        int X = 0, Y = 0;

        // Display the Clicked Square as Choosen Sqare
        X = PosX;
        Y = PosY;

        // Display the choosen Programpart on the Scene
        m_iProgrampartValue = Y*4 + X; // Each Row includes 4 Programmparts -> Y*4 X includes the amount of Programmparts in the Last row
        for(int x = 0; x < 8; x++)
        {
            for(int y = 0; y < 8; y++)
            {
                for(int z = 0; z < 8; z++)
                {
                    LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y][z][m_iProgrampartValue];
                }
            }
        }

        if(!m_DisabledwhilePlayFlag)
        {
            // LED View Output
            LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
            LED_Cube_Main::PutSelectedLEDsOnScene();
            LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
            LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();
        }

    }
}
void LED_Cube_Main::SetProgramNumberSceneRectandSliderPos(int ProgramPartPositionNumber)
{
    int SetSceneRectOffset = 0;
    int m_iAnzProgramNrDividedBy4 = ProgramPartPositionNumber/4;

    if(m_iAnzProgramNrDividedBy4 > 1)
    {
        SetSceneRectOffset = (m_iAnzProgramNrDividedBy4 - 1) * 80;
    }

    // ProgramNumber_Scene.setSceneRect sice is +81 for every 4th programm part added
    ProgramNumber_Scene->setSceneRect(ProgramNumber_Scene_StartX,ProgramNumber_Scene_StartY,
                                     ProgramNumber_Scene_SizeX,ProgramNumber_Scene_SizeY + SetSceneRectOffset);

    // Correct Slider Postion after .setSceneRect
    ui->ProgramNumber_View->verticalScrollBar()->setSliderPosition(SetSceneRectOffset);
}
void LED_Cube_Main::KeyDeletePressed()
{    
    // This Function Deletes Programparts out of the Programpartarray and the view
    // Did the User select a valid Progarmpart?
    if(m_validProgramPartFlag)
    {
        int i, a;
        int PartsToDelete; // is the highest Part in the selection to delete (we need to remove ALL selected
                           // Programparts and all the Parts which are between them)
        PartsToDelete = m_iAnzProgramNr - m_iSelectedProgramParts[0];

        // Delete the Selected Programparts out of the Array
        for(i = m_iNumberOfRectEdges-1; i >= 0; i--)
        {
            LED_Cube_Main::DeleteAProgramPart(m_iSelectedProgramParts[i]);
        }
        // Update the View
        // Delete "old" RectEdges
        int NumberOfRectEdgesCache = m_iNumberOfRectEdges;  // save the Number of Rect Edges
        LED_Cube_Main::DeleteOldRectEdges();

        // Delete all Programmparts till the last selected ProgramPartPosition is reached and delete that part too
        for(i = 0; i < PartsToDelete; i++)
        {
            for(a = 0; a < 3; a++)
            {
                // Items are no Parents or Children so we need to remove every Item
                // Every Programpart got a Rect- and two Textitems -> 3 Items to remove
                ItemList = ProgramNumber_Scene->items();    // Get the Itemlist of ProgramNumber_Scene
                QGraphicsItem *item;
                item = ItemList.first();                    // Initialize the item which should be deleted
                ProgramNumber_Scene->removeItem(item);      // delete item form the ProgramNumber_Scene
            }
        }

        // Draw the rects deleted new
        for(i = m_iSelectedProgramParts[0]; i < m_iAnzProgramNr; i++)
        {
            LED_Cube_Main::CreateNewProgramSquare(i);
        }
        // Correct Scene Options
        // Save Slider Position
        int iSliderPosition;
        int Yposition = m_iSelectedProgramParts[0]/4;
        if(Yposition == 0 || Yposition == 1)
        {
            iSliderPosition = 0;
        }
        else
        {
            iSliderPosition = 77 + 80 * (Yposition - 2);
        }
        // Set new Scene Options
        LED_Cube_Main::SetProgramNumberSceneRectandSliderPos(m_iAnzProgramNr - 1);
        // Correct Slider Postion after SetProgramNumberSceneRectandSliderPos
        ui->ProgramNumber_View->verticalScrollBar()->setSliderPosition(iSliderPosition);

        if(m_iSelectedProgramParts[0] < m_iAnzProgramNr)
        {
            for(int x = 0; x < 8; x++)
            {
                for(int y = 0; y < 8; y++)
                {
                    for(int z = 0; z < 8; z++)
                    {
                        // Set the LED_Array to the part right to the deleted part
                        LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y][z][m_iSelectedProgramParts[0]];
                    }
                }
            }
            // LED View Output
            LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
            LED_Cube_Main::PutSelectedLEDsOnScene();
            LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
            LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();
        }
        else
        {
            LED_Cube_Main::ResetLEDScenes();
        }
        if(NumberOfRectEdgesCache == 1)
        {
            // if only one Programpart is choosen, do a cursor manipulation

            int PosX, PosY, NewPosX, NewPosY;

            // Get relative X/Y coordinates
            PosY = m_iSelectedProgramParts[0]/4;
            PosX = m_iSelectedProgramParts[0] - PosY*4;

            if(m_iSelectedProgramParts[0] == m_iAnzProgramNr)
            {
                // if the choosen Programpart is the last Programpart, jump on the next left to it
                if(PosX == 0)
                {
                    // if the Part is the last in a Row jump on the last part in the row on top
                    NewPosY = PosY - 1;
                    NewPosX = 3;
                }
                else
                {
                    // if not just go on the next part left to it
                    NewPosX = PosX - 1;
                    NewPosY = PosY;
                }
            }
            else
            {
                // if the choosen Programpart is any Part except the last, put the cursor on the same Position
                NewPosX = PosX;
                NewPosY = PosY;
            }

            LED_Cube_Main::DrawRectEdge(NewPosX, NewPosY);
            LED_Cube_Main::DisplayTheChoosenProgrampartOnTheScene(NewPosX, NewPosY);
        }
        if(m_iAnzProgramNr == 0)
        {
            // if the Programpart is the last Programpart create a new blank
            m_Deleted = true;
            LED_Cube_Main::on_Button_New_clicked();
        }

        LED_Cube_Main::ResetRotationVariables();
    }
    ui->label1->setText("Entf");
    ui->label2->setText("");
}
void LED_Cube_Main::SetNumbersOnDisplay()
{
    if (m_iSecondsStringlength <= 10)
    {
        // If all Numbers can be Display, display them
        ui->SecondsString_label->setText(m_SecondsString);
    }
    else
    {
        // else cut the Numbers and Display only the last 8 numbers of the string
        QString DisplayedZiffernFolge = "..." + m_SecondsString.mid(m_iSecondsStringlength - 8);

        // Aktuelle Zahlen ausgeben
        ui->SecondsString_label->setText(DisplayedZiffernFolge);
    }
}
void LED_Cube_Main::DisableMainDialog()
{
    ui->Button_Accept_SecondsString->setDisabled(true);
    ui->Button_Back->setDisabled(true);
    ui->Button_Check_Accept_Part_for_Next_Part->setDisabled(true);
    ui->Button_Delete_All->setDisabled(true);
    ui->Button_Fill_Clicked_View->setDisabled(true);
    ui->Button_Holdtime->setDisabled(true);
    ui->Button_IsometricLeft3DView->setDisabled(true);
    ui->Button_IsometricRight3DView->setDisabled(true);
    ui->Button_KabinettLeft3DView->setDisabled(true);
    ui->Button_KabinettRight3DView->setDisabled(true);
    ui->Button_key_0->setDisabled(true);
    ui->Button_key_1->setDisabled(true);
    ui->Button_key_2->setDisabled(true);
    ui->Button_key_3->setDisabled(true);
    ui->Button_key_4->setDisabled(true);
    ui->Button_key_5->setDisabled(true);
    ui->Button_key_6->setDisabled(true);
    ui->Button_key_7->setDisabled(true);
    ui->Button_key_8->setDisabled(true);
    ui->Button_key_9->setDisabled(true);
    ui->Button_Level_1->setDisabled(true);
    ui->Button_Level_2->setDisabled(true);
    ui->Button_Level_3->setDisabled(true);
    ui->Button_Level_4->setDisabled(true);
    ui->Button_Level_5->setDisabled(true);
    ui->Button_Level_6->setDisabled(true);
    ui->Button_Level_7->setDisabled(true);
    ui->Button_Level_8->setDisabled(true);
    ui->Button_Load->setDisabled(true);
    ui->Button_MilliSeconds->setDisabled(true);
    ui->Button_Mirror_View->setDisabled(true);
    ui->Button_Move_To_A_Layer_Behind->setDisabled(true);
    ui->Button_Move_To_A_Layer_InFront->setDisabled(true);
    ui->Button_New->setDisabled(true);
    ui->Button_Play->setDisabled(true);
    ui->Button_PlayLoop->setDisabled(true);
    ui->Button_Return->setDisabled(true);
    ui->Button_Right_Level_1->setDisabled(true);
    ui->Button_Right_Level_2->setDisabled(true);
    ui->Button_Right_Level_3->setDisabled(true);
    ui->Button_Right_Level_4->setDisabled(true);
    ui->Button_Right_Level_5->setDisabled(true);
    ui->Button_Right_Level_6->setDisabled(true);
    ui->Button_Right_Level_7->setDisabled(true);
    ui->Button_Right_Level_8->setDisabled(true);
    ui->Button_Right_View->setDisabled(true);
    ui->Button_Rotate_Left_View->setDisabled(true);
    ui->Button_Rotate_Right_View->setDisabled(true);
    ui->Button_Save->setDisabled(true);
    ui->Button_Seconds->setDisabled(true);
    ui->Button_Select_Front_View->setDisabled(true);
    ui->Button_Select_Right_View->setDisabled(true);
    ui->Button_Select_Top_View->setDisabled(true);
    ui->Button_Start_From_Part->setDisabled(true);
    ui->Button_Top_Level_1->setDisabled(true);
    ui->Button_Top_Level_2->setDisabled(true);
    ui->Button_Top_Level_3->setDisabled(true);
    ui->Button_Top_Level_4->setDisabled(true);
    ui->Button_Top_Level_5->setDisabled(true);
    ui->Button_Top_Level_6->setDisabled(true);
    ui->Button_Top_Level_7->setDisabled(true);
    ui->Button_Top_Level_8->setDisabled(true);
    ui->Button_Top_View->setDisabled(true);
    ui->Button_Unfill_Clicked_View->setDisabled(true);
    ui->Current_Seconds_label->setDisabled(true);
    ui->edge_3->setDisabled(true);
    ui->edge_4->setDisabled(true);
    ui->edge_6->setDisabled(true);
    ui->edge_7->setDisabled(true);
    ui->edge_8->setDisabled(true);
    ui->label1->setDisabled(true);
    ui->label2->setDisabled(true);
    ui->label_1x->setDisabled(true);
    ui->label_2x->setDisabled(true);
    ui->label_05x->setDisabled(true);
    ui->LED_Cube_3D_View->setDisabled(true);
    ui->ProgramNumber_View->setDisabled(true);
    ui->LED_Selection_Right_View->setDisabled(true);
    ui->LED_Selection_Top_View->setDisabled(true);
    ui->LED_Selection_View->setDisabled(true);
}
void LED_Cube_Main::EnableMainDialog()
{
    ui->Button_Accept_SecondsString->setEnabled(true);
    ui->Button_Back->setEnabled(true);
    ui->Button_Check_Accept_Part_for_Next_Part->setEnabled(true);
    ui->Button_Delete_All->setEnabled(true);
    ui->Button_Fill_Clicked_View->setEnabled(true);
    ui->Button_Holdtime->setEnabled(true);
    ui->Button_IsometricLeft3DView->setEnabled(true);
    ui->Button_IsometricRight3DView->setEnabled(true);
    ui->Button_KabinettLeft3DView->setEnabled(true);
    ui->Button_KabinettRight3DView->setEnabled(true);
    ui->Button_key_0->setEnabled(true);
    ui->Button_key_1->setEnabled(true);
    ui->Button_key_2->setEnabled(true);
    ui->Button_key_3->setEnabled(true);
    ui->Button_key_4->setEnabled(true);
    ui->Button_key_5->setEnabled(true);
    ui->Button_key_6->setEnabled(true);
    ui->Button_key_7->setEnabled(true);
    ui->Button_key_8->setEnabled(true);
    ui->Button_key_9->setEnabled(true);
    ui->Button_Level_1->setEnabled(true);
    ui->Button_Level_2->setEnabled(true);
    ui->Button_Level_3->setEnabled(true);
    ui->Button_Level_4->setEnabled(true);
    ui->Button_Level_5->setEnabled(true);
    ui->Button_Level_6->setEnabled(true);
    ui->Button_Level_7->setEnabled(true);
    ui->Button_Level_8->setEnabled(true);
    ui->Button_Load->setEnabled(true);
    ui->Button_MilliSeconds->setEnabled(true);
    ui->Button_Mirror_View->setEnabled(true);
    ui->Button_Move_To_A_Layer_Behind->setEnabled(true);
    ui->Button_Move_To_A_Layer_InFront->setEnabled(true);
    ui->Button_New->setEnabled(true);
    ui->Button_Play->setEnabled(true);
    ui->Button_PlayLoop->setEnabled(true);
    ui->Button_Return->setEnabled(true);
    ui->Button_Right_Level_1->setEnabled(true);
    ui->Button_Right_Level_2->setEnabled(true);
    ui->Button_Right_Level_3->setEnabled(true);
    ui->Button_Right_Level_4->setEnabled(true);
    ui->Button_Right_Level_5->setEnabled(true);
    ui->Button_Right_Level_6->setEnabled(true);
    ui->Button_Right_Level_7->setEnabled(true);
    ui->Button_Right_Level_8->setEnabled(true);
    ui->Button_Right_View->setEnabled(true);
    ui->Button_Rotate_Left_View->setEnabled(true);
    ui->Button_Rotate_Right_View->setEnabled(true);
    ui->Button_Save->setEnabled(true);
    ui->Button_Seconds->setEnabled(true);
    ui->Button_Select_Front_View->setEnabled(true);
    ui->Button_Select_Right_View->setEnabled(true);
    ui->Button_Select_Top_View->setEnabled(true);
    ui->Button_Start_From_Part->setEnabled(true);
    ui->Button_Top_Level_1->setEnabled(true);
    ui->Button_Top_Level_2->setEnabled(true);
    ui->Button_Top_Level_3->setEnabled(true);
    ui->Button_Top_Level_4->setEnabled(true);
    ui->Button_Top_Level_5->setEnabled(true);
    ui->Button_Top_Level_6->setEnabled(true);
    ui->Button_Top_Level_7->setEnabled(true);
    ui->Button_Top_Level_8->setEnabled(true);
    ui->Button_Top_View->setEnabled(true);
    ui->Button_Unfill_Clicked_View->setEnabled(true);
    ui->Current_Seconds_label->setEnabled(true);
    ui->edge_3->setEnabled(true);
    ui->edge_4->setEnabled(true);
    ui->edge_6->setEnabled(true);
    ui->edge_7->setEnabled(true);
    ui->edge_8->setEnabled(true);
    ui->label1->setEnabled(true);
    ui->label2->setEnabled(true);
    ui->label_1x->setEnabled(true);
    ui->label_2x->setEnabled(true);
    ui->label_05x->setEnabled(true);
    ui->LED_Cube_3D_View->setEnabled(true);
    ui->ProgramNumber_View->setEnabled(true);
    ui->LED_Selection_Right_View->setEnabled(true);
    ui->LED_Selection_Top_View->setEnabled(true);
    ui->LED_Selection_View->setEnabled(true);
}
// Member Funktions: End

// Custom Slots: Beginn
// Slotuse of LED_Selection_Scene
void LED_Cube_Main::Recive_LED_Selection_Scene_Pressed_Pos(QPointF LED_Selection_Scene_Position)
{
    ui->label1->setText("PosX:" + QString("%1").arg(LED_Selection_Scene_Position.x()));
    ui->label2->setText("PosY:" + QString("%1").arg(LED_Selection_Scene_Position.y()));

    // Controllvariables, define how you want to hit the LED, the section can be smaller then the actual
    // Picture Size, with that you create a space between every LED where you can move without activating
    int XLeft = 9;
    int XRight = 36;
    int YLeft = 9;
    int YRight = 36;
    int PictureSize = 45;

    // Get current MousePosition (MousePress and MouseMove)
    m_nMouseClick_X_Coordinate = LED_Selection_Scene_Position.x();
    m_nMouseClick_Y_Coordinate = LED_Selection_Scene_Position.y();

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if((XLeft + PictureSize*j) < m_nMouseClick_X_Coordinate && m_nMouseClick_X_Coordinate < (XRight + PictureSize*j))
            {
                if((YLeft + PictureSize*i) < m_nMouseClick_Y_Coordinate && m_nMouseClick_Y_Coordinate < (YRight + PictureSize*i))
                {
                    LED_Cube_Main::LocateChoosenLEDPressed();

                    // LED View Output
                    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
                    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
                    LED_Cube_Main::PutSelectedLEDsOnScene();
                    LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();

                    break;
                }
            }
        }
    }

}
void LED_Cube_Main::Recive_LED_Selection_Scene_Hold_Pos(QPointF LED_Selection_Scene_Position)
{
    ui->label1->setText("PosX:" + QString("%1").arg(LED_Selection_Scene_Position.x()));
    ui->label2->setText("PosY:" + QString("%1").arg(LED_Selection_Scene_Position.y()));

    // Controllvariables, define how you want to hit the LED, the section can be smaller then the actual
    // Picture Size, with that you create a space between every LED where you can move without activating
    int XLeft = 9;
    int XRight = 36;
    int YLeft = 9;
    int YRight = 36;
    int PictureSize = 45;

    // Get current MousePosition (MousePress and MouseMove)
    m_nMouseClick_X_Coordinate = LED_Selection_Scene_Position.x();
    m_nMouseClick_Y_Coordinate = LED_Selection_Scene_Position.y();

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if((XLeft + PictureSize*j) < m_nMouseClick_X_Coordinate && m_nMouseClick_X_Coordinate < (XRight + PictureSize*j))
            {
                if((YLeft + PictureSize*i) < m_nMouseClick_Y_Coordinate && m_nMouseClick_Y_Coordinate < (YRight + PictureSize*i))
                {
                    LED_Cube_Main::LocateChoosenLEDHold();

                    // LED View Output
                    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
                    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
                    LED_Cube_Main::PutSelectedLEDsOnScene();
                    LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();

                    break;
                }
            }
        }
    }

}
// Slotuse of LED_Selection_Top_Scene
void LED_Cube_Main::Recive_LED_Selection_Top_Scene_Pressed_Pos(QPointF LED_Selection_Top_Scene_Position)
{
    ui->label1->setText("PosX:" + QString("%1").arg(LED_Selection_Top_Scene_Position.x()));
    ui->label2->setText("PosY:" + QString("%1").arg(LED_Selection_Top_Scene_Position.y()));

    // Controllvariables, define how you want to hit the LED, the section can be smaller then the actual
    // Picture Size, with that you create a space between every LED where you can move without activating
    int XLeft = 0;
    int XRight = 15;
    int ZLeft = 0;
    int ZRight = 15;
    int PictureSize = 19;

    // Get current MousePosition (MousePress and MouseMove)
    m_nMouseClick_X_Top_Coordinate = LED_Selection_Top_Scene_Position.y();
    m_nMouseClick_Z_Top_Coordinate = LED_Selection_Top_Scene_Position.x();

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if((XLeft + PictureSize*j) < m_nMouseClick_X_Top_Coordinate && m_nMouseClick_X_Top_Coordinate < (XRight + PictureSize*j))
            {
                if((ZLeft + PictureSize*i) < m_nMouseClick_Z_Top_Coordinate && m_nMouseClick_Z_Top_Coordinate < (ZRight + PictureSize*i))
                {
                    LED_Cube_Main::LocateChoosenLEDPressed_Top();

                    // LED View Output
                    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
                    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
                    LED_Cube_Main::PutSelectedLEDsOnScene();
                    LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();
                    break;
                }
            }
        }
    }
}
void LED_Cube_Main::Recive_LED_Selection_Top_Scene_Hold_Pos(QPointF LED_Selection_Top_Scene_Position)
{
    ui->label1->setText("PosX:" + QString("%1").arg(LED_Selection_Top_Scene_Position.x()));
    ui->label2->setText("PosY:" + QString("%1").arg(LED_Selection_Top_Scene_Position.y()));

    // Controllvariables, define how you want to hit the LED, the section can be smaller then the actual
    // Picture Size, with that you create a space between every LED where you can move without activating
    int XLeft = 0;
    int XRight = 15;
    int ZLeft = 0;
    int ZRight = 15;
    int PictureSize = 19;

    // Get current MousePosition (MousePress and MouseMove)
    m_nMouseClick_X_Top_Coordinate = LED_Selection_Top_Scene_Position.y();
    m_nMouseClick_Z_Top_Coordinate = LED_Selection_Top_Scene_Position.x();

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if((XLeft + PictureSize*j) < m_nMouseClick_X_Top_Coordinate && m_nMouseClick_X_Top_Coordinate < (XRight + PictureSize*j))
            {
                if((ZLeft + PictureSize*i) < m_nMouseClick_Z_Top_Coordinate && m_nMouseClick_Z_Top_Coordinate < (ZRight + PictureSize*i))
                {
                    LED_Cube_Main::LocateChoosenLEDHold_Top();

                    // LED View Output
                    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
                    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
                    LED_Cube_Main::PutSelectedLEDsOnScene();
                    LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();
                    break;
                }
            }
        }
    }
}
// Slotuse of LED_Selection_Right_Scene
void LED_Cube_Main::Recive_LED_Selection_Right_Scene_Pressed_Pos(QPointF LED_Selection_Right_Scene_Position)
{
    ui->label1->setText("PosX:" + QString("%1").arg(LED_Selection_Right_Scene_Position.x()));
    ui->label2->setText("PosY:" + QString("%1").arg(LED_Selection_Right_Scene_Position.y()));

    // Controllvariables, define how you want to hit the LED, the section can be smaller then the actual
    // Picture Size, with that you create a space between every LED where you can move without activating
    int YLeft = 0;
    int YRight = 15;
    int ZLeft = 0;
    int ZRight = 15;
    int PictureSize = 19;

    // Get current MousePosition (MousePress and MouseMove)
    m_nMouseClick_Y_Right_Coordinate = LED_Selection_Right_Scene_Position.y();
    m_nMouseClick_Z_Right_Coordinate = LED_Selection_Right_Scene_Position.x();

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if((YLeft + PictureSize*j) < m_nMouseClick_Y_Right_Coordinate && m_nMouseClick_Y_Right_Coordinate < (YRight + PictureSize*j))
            {
                if((ZLeft + PictureSize*i) < m_nMouseClick_Z_Right_Coordinate && m_nMouseClick_Z_Right_Coordinate < (ZRight + PictureSize*i))
                {
                    LED_Cube_Main::LocateChoosenLEDPressed_Right();

                    // LED View Output
                    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
                    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
                    LED_Cube_Main::PutSelectedLEDsOnScene();
                    LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();
                    break;
                }
            }
        }
    }

}
void LED_Cube_Main::Recive_LED_Selection_Right_Scene_Hold_Pos(QPointF LED_Selection_Right_Scene_Position)
{
    ui->label1->setText("PosX:" + QString("%1").arg(LED_Selection_Right_Scene_Position.x()));
    ui->label2->setText("PosY:" + QString("%1").arg(LED_Selection_Right_Scene_Position.y()));

    // Controllvariables, define how you want to hit the LED, the section can be smaller then the actual
    // Picture Size, with that you create a space between every LED where you can move without activating
    int YLeft = 0;
    int YRight = 15;
    int ZLeft = 0;
    int ZRight = 15;
    int PictureSize = 19;

    // Get current MousePosition (MousePress and MouseMove)
    m_nMouseClick_Y_Right_Coordinate = LED_Selection_Right_Scene_Position.y();
    m_nMouseClick_Z_Right_Coordinate = LED_Selection_Right_Scene_Position.x();

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if((YLeft + PictureSize*j) < m_nMouseClick_Y_Right_Coordinate && m_nMouseClick_Y_Right_Coordinate < (YRight + PictureSize*j))
            {
                if((ZLeft + PictureSize*i) < m_nMouseClick_Z_Right_Coordinate && m_nMouseClick_Z_Right_Coordinate < (ZRight + PictureSize*i))
                {
                    LED_Cube_Main::LocateChoosenLEDHold_Right();

                    // LED View Output
                    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
                    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
                    LED_Cube_Main::PutSelectedLEDsOnScene();
                    LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();
                    break;
                }
            }
        }
    }

}
// Slotuse of ProgramNumber_Scene
void LED_Cube_Main::Recive_ProgramNumber_Scene_Pos(QPointF ProgramNumber_Scene_Position)
{
    // Save the Clicked Coordinates
    m_ProgramNumber_Scene_Click = ProgramNumber_Scene_Position;    

    LED_Cube_Main::DeleteOldRectEdges();

    m_ProgramNumber_Scene_Clicked = true;
    m_ProgramNumber_Scene_Clicked_Released = true;

    ui->label1->setText("PosX:" + QString("%1").arg(ProgramNumber_Scene_Position.x()));
    ui->label2->setText("PosY:" + QString("%1").arg(ProgramNumber_Scene_Position.y()));
}
void LED_Cube_Main::DrawSelectionRectangle(QPointF ProgramNumber_Scene_Position)
{
    if(m_ProgramNumber_Scene_Clicked)
    {
        int X, Y, LengthX, LengthY;
        int FirstClickX, FirstClickY, MouseMoveX, MouseMoveY;

        // if existing remove old Selection Rectangle
        LED_Cube_Main::DeleteOldSelectionRectangle();

        // Draw Rect from the m_ProgramNumber_Scene_Click to the Current Mouseposition while moving
        FirstClickX = m_ProgramNumber_Scene_Click.x();
        FirstClickY = m_ProgramNumber_Scene_Click.y();
        MouseMoveX = ProgramNumber_Scene_Position.x();
        MouseMoveY = ProgramNumber_Scene_Position.y();
        if(FirstClickX < MouseMoveX)
        {
            X = FirstClickX;
            LengthX = MouseMoveX - FirstClickX;
        }
        else
        {
            X = MouseMoveX;
            LengthX = FirstClickX - MouseMoveX;
        }
        if(FirstClickY < MouseMoveY)
        {
            Y = FirstClickY;
            LengthY = MouseMoveY - FirstClickY;
        }
        else
        {
            Y = MouseMoveY;
            LengthY = FirstClickY - MouseMoveY;
        }

        QGraphicsRectItem* square = new QGraphicsRectItem(X,Y,LengthX,LengthY);
        square->setZValue(2);
        ProgramNumber_Scene->addItem(square);

        m_ProgramNumber_Scene_Move = ProgramNumber_Scene_Position;

        m_SelectionRectangleIsDrawn = true;

        m_ProgramNumber_Scene_Clicked_Released = false;

        ui->label1->setText("PosX:" + QString("%1").arg(ProgramNumber_Scene_Position.x()));
        ui->label2->setText("PosY:" + QString("%1").arg(ProgramNumber_Scene_Position.y()));
    }
}
void LED_Cube_Main::ProgramNumber_Scene_Mouse_Released()
{
    LED_Cube_Main::DeleteOldSelectionRectangle();

    if(m_ProgramNumber_Scene_Clicked_Released)
    {
        int PosX = 0, PosY = 0;
        int StartX = 12, StartY = 7;

        // Get relative X/Y coordinates of the First Programpartvalue
        PosX = (m_ProgramNumber_Scene_Click.x() - StartX)/80;
        PosY = (m_ProgramNumber_Scene_Click.y() - StartY)/80;

        // If the User only clicked on a Programpart, draw a Rect edge around it
        // Call Recive_ProgramNumber_Scene_Pos Slot to Draw the Rect_Edge
        LED_Cube_Main::DrawRectEdge(PosX, PosY);
        // Show the new LED-Logic on the Scenes
        LED_Cube_Main::DisplayTheChoosenProgrampartOnTheScene(PosX, PosY);
    }
    else
    {
        // If the User selected Programparts with the Selectionsquare
        // Save the choosen Rects
        int x = 0, y = 0;
        float PosX = 0, PosY = 0;
        int StartX = 12, StartY = 7, X_First = 0, Y_First = 0, X_Last = 0, Y_Last = 0;
        int X_Display = 0, Y_Display = 0;
        int ProgramPartNumber = 0;

        // Get relative X/Y coordinates of the First Programpartvalue
        PosX = (m_ProgramNumber_Scene_Click.x() - StartX)/80;

        PosY = (m_ProgramNumber_Scene_Click.y() - StartY)/80;
        // round with integer
        X_First = PosX;
        Y_First = PosY;

        // Get relative X/Y coordinates of the Last Programpartvalue
        PosX = (m_ProgramNumber_Scene_Move.x() - StartX)/80;
        PosY = (m_ProgramNumber_Scene_Move.y() - StartY)/80;
        // round with integer
        X_Last = PosX;
        Y_Last = PosY;

        if(X_Last > 3)
        {
            X_Last = 3;
        }

        // Save the Programparts inside the Selection Rect
        if(Y_First <= Y_Last)
        {
            // Selection Rect goes from Top to Bottom
            if(X_First <= X_Last)
            {
                // Selection Rect goes from Left to Right
                for(y = Y_First; y < Y_Last+1; y++)
                {
                    for(x = X_First; x < X_Last+1; x++)
                    {
                        ProgramPartNumber = y*4 + x;

                        if(ProgramPartNumber < m_iAnzProgramNr)
                        {
                            LED_Cube_Main::DrawRectEdge(x, y);                            

                            // let the last Part be Displayed
                            X_Display = x;
                            Y_Display = y;
                        }
                    }
                }
            }
            else
            {
                // Selection Rect goes from Right to Left
                for(y = Y_First; y < Y_Last+1; y++)
                {
                    for(x = X_Last; x < X_First+1; x++)
                    {
                        ProgramPartNumber = y*4 + x;

                        if(ProgramPartNumber < m_iAnzProgramNr)
                        {
                            LED_Cube_Main::DrawRectEdge(x, y);                                                       

                            // let the last Part be Displayed
                            X_Display = x;
                            Y_Display = y;
                        }
                    }
                }
            }

        }
        else
        {
            // Selection Rect goes from Bottom to Top
            if(X_First <= X_Last)
            {
                // Selection Rect goes from Left to Right
                for(y = Y_Last; y < Y_First+1; y++)
                {
                    for(x = X_First; x < X_Last+1; x++)
                    {
                        ProgramPartNumber = y*4 + x;

                        if(ProgramPartNumber < m_iAnzProgramNr)
                        {
                            LED_Cube_Main::DrawRectEdge(x, y);                            

                            // let the last Part be Displayed
                            X_Display = x;
                            Y_Display = y;
                        }
                    }
                }
            }
            else
            {
                // Selection Rect goes from Right to Left
                for(y = Y_Last; y < Y_First+1; y++)
                {
                    for(x = X_Last; x < X_First+1; x++)
                    {
                        ProgramPartNumber = y*4 + x;

                        if(ProgramPartNumber < m_iAnzProgramNr)
                        {
                            LED_Cube_Main::DrawRectEdge(x, y);

                            // let the last Part be Displayed
                            X_Display = x;
                            Y_Display = y;
                        }
                    }
                }
            }
        }
        // Show the new LED-Logic of the Last Programpart in the Selection Rect on the Scenes
        LED_Cube_Main::DisplayTheChoosenProgrampartOnTheScene(X_Display, Y_Display);

        if(m_iNumberOfRectEdges == 0)
        {
            // if no Programpart is selected sign the flag
            // Only in this Case LED_Cube_Main::DrawRectEdge(wont sign it by itself
            m_validProgramPartFlag = false;
        }
    }
    m_ProgramNumber_Scene_Clicked = false;
}
// Custom Slots: End

// Slider Slot: Beginn
void LED_Cube_Main::Recive_Slider_SpeedRegulation_valueChanged(int ChangedValue)
{
    m_iSliderRegulator = ChangedValue;
}
// Slider Slot: End

// Timer Slots: Beginn
void LED_Cube_Main::ClockCounterPlay()
{
    // if the Play_Button is still on "Play"
    if(m_toggledPlay_Button)
    {
       m_iClockCounter++;


       // Set Speed (Round m_iSpeedRegulator)
       int SpeedCount = m_iSpeedRegulator;

       if(SpeedCount < 1)
       {
           SpeedCount = 1;
       }

       // Programmdurchlauf: Zeitmanagement
       if(m_iClockCounter == SpeedCount)
       {
           if(m_iProgramCounter == m_iAnzProgramNr)
           {
               // Programm Beenden
               LED_Cube_Main::EndProgram(1);
           }
           else
           {
               // PlayNextElement wird zur Programmierten Zeit aufgerufen
               LED_Cube_Main::PlayNextElement();
           }
       }
    }
    else
    {
        LED_Cube_Main::EndProgram(1);
    }
}
void LED_Cube_Main::ClockCounterPlayLoop()
{    
    if(m_toggledPlayLoop_Button)
    {
       m_iClockCounter++;

       // Set Speed (Round m_iSpeedRegulator)
       int SpeedCount = m_iSpeedRegulator;

       if(SpeedCount < 1)
       {
           SpeedCount = 1;
       }

       if(m_iClockCounter == SpeedCount)
       {
           if(m_iProgramCounter == m_iAnzProgramNr)
           {
               // End Program
               LED_Cube_Main::EndProgram(2);
           }
           else
           {
               // PlayNextElement wird zur Programmierten Zeit aufgerufen
               LED_Cube_Main::PlayLoopNextElement();
           }
       }
    }
    else
    {
        // End Program
        LED_Cube_Main::EndProgram(2);
    }
}
// Timer Slots: End

// Loading Dialog Slot: Beginn
void LED_Cube_Main::Recive_Loading_Option(bool Loading_Option)
{    
    int x, y, z;
    int i;

    QString filename = QFileDialog::getOpenFileName( this, tr("Datei öffnen"), QDir::currentPath(), tr("LED-Sim-Document (*.lsdat)"));

    QFile file(filename);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return;
    }

    // Delete old Rect Edges and set Flags
    LED_Cube_Main::DeleteOldRectEdges();

    if(Loading_Option)
    {
        // if Loading_Option is true the User wants to keep the current Program
        // Do nothing, do not Delete any Programpart or Logic
    }
    else
    {
        // if Loading_Option is false the User wants a cleaned Program no old Programparts or anything
        // -> Delete all
        m_iAnzProgramNr = 0;

        // Delete all Items on ProgramNumber_Scene
        qDeleteAll(ProgramNumber_Scene->items());
    }

    // reset Rotationvariables
    LED_Cube_Main::ResetRotationVariables();

    while (!file.atEnd())
    {
        i = 0;
        QString line = file.readLine();
        QChar a;
        for(z = 0; z < 8; z++)
        {
            for(y = 0; y < 8; y++)
            {
                for(x = 0; x < 8; x++)
                {
                    a = line.at(i);
                    if(a == '1')
                    {
                        LED_Selection_Array_Program[x][y][z][m_iAnzProgramNr] = true;
                    }
                    else
                    {
                        LED_Selection_Array_Program[x][y][z][m_iAnzProgramNr] = false;
                    }
                    i++;
                }
            }
        }
        QString Secondinformation;
        int Secondinformationlength = line.length() - 512 - 1; // - 512 LED - Logic bits - \n

        Secondinformation=line.mid(512, Secondinformationlength);

        m_iChoosenSecondsProgram[m_iAnzProgramNr] = Secondinformation.toInt();

        // Show new Programpart in the management
        LED_Cube_Main::CreateNewProgramSquare(m_iAnzProgramNr);

        m_iAnzProgramNr++;
    }

    if(m_LoadingDialog_Existing)
    {
        LoadingDialog->close();
        m_LoadingDialog_Existing = false;
    }
    // Simulate Click on the last Programpart of the loaded file
}
void LED_Cube_Main::DialogClosed()
{
    LED_Cube_Main::EnableMainDialog();
}
// Loading Dialog Slot: End

// Button Slots: Beginn
void LED_Cube_Main::on_Button_Load_clicked()
{
    if(m_no_Existing_Programpart)
    {
        // if no ProgramPart is Existing just load the Program
        LED_Cube_Main::Recive_Loading_Option(false);
    }
    else
    {
            // if no LoadingDialog exists, create one
            // Create new LoadingDialog
            LoadingDialog = new Loading(this);
            m_LoadingDialog_Existing = true;

            // connect Loading Dialog
            connect(LoadingDialog, SIGNAL(SendLoadingOptions(bool)), this, SLOT(Recive_Loading_Option(bool)));
            connect(LoadingDialog, SIGNAL(SendDialogClosing()), this, SLOT(DialogClosed()));

            //Disable MainWindow
            LED_Cube_Main::DisableMainDialog();

            // Move LoadingDialog in the middle of LED_Cube_Main
            LoadingDialog->setGeometry(419, 435, 361, 179);

            // show LoadingDialog
            LoadingDialog->show();

    }
}
void LED_Cube_Main::on_Button_Save_clicked()
{
    int x, y, z;

    // Get Savefile Name
    QString savefilename = QFileDialog::getSaveFileName(this, tr("Datei speichern"), QDir::currentPath(), tr("LED-Sim-Document (*.lsdat)"));

    QFile file(savefilename);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return;
    }
    QTextStream out(&file);

    // Save the User specific Program in a LED-Sim-Document (*.lsdat)
    for(int i = 0; i < m_iAnzProgramNr; i++)
    {
        for(z = 0; z < 8; z++)
        {
            for(y = 0; y < 8; y++)
            {
                for(x = 0; x < 8; x++)
                {
                    out << LED_Selection_Array_Program[x][y][z][i];
                }
            }
        }
        out << m_iChoosenSecondsProgram[i];
        out << "\n";
    }
}
void LED_Cube_Main::on_Button_New_clicked()
{
    int x, y, z;
    // Did user Check if he wants to keep the last logic for the new part?
    if(m_Deleted)
    {
        LED_Cube_Main::ResetLED_Selection_Array();
        // if m_Deleted is signed remove everything
        m_Deleted = false;

        // No Programpart is Existing now
        m_no_Existing_Programpart = true;
    }
    else if(m_toggledAcceptforNextPart && m_MoveToALayerBehindorInFront)
    {
        // if the user acivated both, AcceptforNextPart and MoveToALayerBehind then move the activated level on the Front Screen to the levels behind or in front
        // which direction?
        if(m_WhichDirectionToMove)
        {
            // which view?
            if(m_FrontViewClicked)
            {
                // Moving away form the User while keeping the first level
                // Load the same Logic of the last part one layer later and let the activated layer be the same as before
                for(x = 0; x < 8; x++)
                {
                    for(y = 0; y < 8; y++)
                    {
                        // Move the Levels to the User
                        for(z = 1; z < 8; z++)
                        {
                            LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y][z-1][m_iProgrampartValue];
                        }
                    }
                }
                // Redraw the activated Level
                z = m_iChoosenLevel;
                for(x = 0; x < 8; x++)
                {
                    for(y = 0; y < 8; y++)
                    {
                        LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y][z][m_iProgrampartValue];
                    }
                }
            }
            else if(m_TopViewClicked)
            {
                // Moving from the Top to the Bottom while keeping the last level
                // Load the same Logic of the last part one layer later and let the activated layer be the same as before
                for(x = 0; x < 8; x++)
                {
                    for(z = 0; z < 8; z++)
                    {
                        // Move the Levels to the Bottom
                        for(y = 1; y < 8; y++)
                        {
                            LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y-1][z][m_iProgrampartValue];
                        }
                    }
                }
                // Redraw the activated Level
                y = m_iChoosenLevel_Top;
                for(x = 0; x < 8; x++)
                {
                    for(z = 0; z < 8; z++)
                    {
                        LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y][z][m_iProgrampartValue];
                    }
                }
            }
            else if(m_RightViewClicked)
            {
                // Moving from the Left side to the Right while keeping the last level
                // Load the same Logic of the last part one layer later and let the activated layer be the same as before
                for(y = 0; y < 8; y++)
                {
                    for(z = 0; z < 8; z++)
                    {
                        // Move the Levels to the User
                        for(x = 6; x > -1; x--)
                        {
                            LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x+1][y][z][m_iProgrampartValue];
                        }
                    }
                }
                // Redraw the activated Level
                x = m_iChoosenLevel_Right;
                for(y = 0; y < 8; y++)
                {
                    for(z = 0; z < 8; z++)
                    {
                        LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y][z][m_iProgrampartValue];
                    }
                }
            }
        }
        else
        {
            // which view?
            if(m_FrontViewClicked)
            {
                // Moving to the User while keeping the last level
                // Load the same Logic of the last part one layer in front and let the activated layer be the same as before
                for(x = 0; x < 8; x++)
                {
                    for(y = 0; y < 8; y++)
                    {

                        // Move the Levels to the User
                        for(z = 6; z > -1; z--)
                        {
                            LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y][z+1][m_iProgrampartValue];
                        }
                    }
                }
                // Redraw the activated Level
                z = m_iChoosenLevel;
                for(x = 0; x < 8; x++)
                {
                    for(y = 0; y < 8; y++)
                    {
                        LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y][z][m_iProgrampartValue];
                    }
                }
            }
            else if(m_TopViewClicked)
            {
                // Moving from the Top to the Bottom while keeping the last level
                // Load the same Logic of the last part one layer later and let the activated layer be the same as before
                for(x = 0; x < 8; x++)
                {
                    for(z = 0; z < 8; z++)
                    {
                        // Move the Levels to the Bottom
                        for(y = 6; y > -1; y--)
                        {
                            LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y+1][z][m_iProgrampartValue];
                        }
                    }
                }
                // Redraw the activated Level
                y = m_iChoosenLevel_Top;
                for(x = 0; x < 8; x++)
                {
                    for(z = 0; z < 8; z++)
                    {
                        LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y][z][m_iProgrampartValue];
                    }
                }
            }
            else if(m_RightViewClicked)
            {
                // Moving from the Left side to the Right while keeping the last level
                // Load the same Logic of the last part one layer later and let the activated layer be the same as before
                for(y = 0; y < 8; y++)
                {
                    for(z = 0; z < 8; z++)
                    {
                        // Move the Levels to the User
                        for(x = 1; x < 8; x++)
                        {
                            LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x-1][y][z][m_iProgrampartValue];
                        }
                    }
                }
                // Redraw the activated Level
                x = m_iChoosenLevel_Right;
                for(y = 0; y < 8; y++)
                {
                    for(z = 0; z < 8; z++)
                    {
                        LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y][z][m_iProgrampartValue];
                    }
                }
            }
        }

        if(m_no_Existing_Programpart)
        {
            // now a valid Programpart exists
            m_no_Existing_Programpart = false;
        }
    }
    else if(m_toggledAcceptforNextPart && !m_MoveToALayerBehindorInFront)
    {
        // Load the Logic of the clicked part
        for(x = 0; x < 8; x++)
        {
            for(y = 0; y < 8; y++)
            {
                for(z = 0; z < 8; z++)
                {
                    LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y][z][m_iProgrampartValue];
                }
            }
        }

        if(m_no_Existing_Programpart)
        {
            // now a valid Programpart exists
            m_no_Existing_Programpart = false;
        }
    }
    else if(m_MoveToALayerBehindorInFront && !m_toggledAcceptforNextPart)
    {
        // which direction
        if(m_WhichDirectionToMove)
        {
            // which view?
            if(m_FrontViewClicked)
            {
                // Moving away form the User
                // Load the same Logic of the last part one layer later and let the first layer be empty
                for(x = 0; x < 8; x++)
                {
                    for(y = 0; y < 8; y++)
                    {
                        z = 0;
                        LED_Selection_Array[x][y][z] = false;

                        for(z = 1; z < 8; z++)
                        {
                            LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y][z-1][m_iProgrampartValue];
                        }
                    }
                }
            }
            else if(m_TopViewClicked)
            {
                // Moving from the Top to the Bottom
                // Load the same Logic of the last part one layer later and let the activated layer be the same as before
                for(x = 0; x < 8; x++)
                {
                    for(z = 0; z < 8; z++)
                    {
                        y = 0;
                        LED_Selection_Array[x][y][z] = false;

                        for(y = 1; y < 8; y++)
                        {
                            LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y-1][z][m_iProgrampartValue];
                        }
                    }
                }
            }
            else if(m_RightViewClicked)
            {
                // Moving from the Left side to the Right
                // Load the same Logic of the last part one layer later and let the activated layer be the same as before
                for(y = 0; y < 8; y++)
                {
                    for(z = 0; z < 8; z++)
                    {
                        x = 7;
                        LED_Selection_Array[x][y][z] = false;

                        for(x = 6; x >= 0; x--)
                        {
                            LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x+1][y][z][m_iProgrampartValue];
                        }
                    }
                }
            }
        }
        else
        {
            // which view?
            if(m_FrontViewClicked)
            {
                // Moving to the User
                for(x = 0; x < 8; x++)
                {
                    for(y = 0; y < 8; y++)
                    {

                        z = 7;
                        LED_Selection_Array[x][y][z] = false;

                        for(z = 6; z >= 0; z--)
                        {
                            LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y][z+1][m_iProgrampartValue];
                        }
                    }
                }
            }
            else if(m_TopViewClicked)
            {
                // Moving from the Top to the Bottom
                // Load the same Logic of the last part one layer later and let the activated layer be the same as before
                for(x = 0; x < 8; x++)
                {
                    for(z = 0; z < 8; z++)
                    {

                        y = 7;
                        LED_Selection_Array[x][y][z] = false;

                        for(y = 6; y >= 0; y--)
                        {
                            LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x][y+1][z][m_iProgrampartValue];
                        }
                    }
                }
            }
            else if(m_RightViewClicked)
            {
                // Moving from the Top to the Bottom
                // Load the same Logic of the last part one layer later and let the activated layer be the same as before
                for(y = 0; y < 8; y++)
                {
                    for(z = 0; z < 8; z++)
                    {

                        x = 0;
                        LED_Selection_Array[x][y][z] = false;

                        for(x = 1; x < 8; x++)
                        {
                            LED_Selection_Array[x][y][z] = LED_Selection_Array_Program[x-1][y][z][m_iProgrampartValue];
                        }
                    }
                }
            }
        }

        if(m_no_Existing_Programpart)
        {
            // now a valid Programpart exists
            m_no_Existing_Programpart = false;
        }
    }
    else if(m_Rotate_Left_or_Right)
    {
        int x, y, z;  // Counter

        // The 28 Square will move every step (it is the slowest Square)
        // The others got diverent values, and only if on of them is changed, the Square should move

        // which direction to Rotate?
        if(m_WhichDirectionToRotate)
        {
            // Right Rotation

            // which view?
            if(m_FrontViewClicked)
            {                
                // if m_iRotationStep is resetet reset cache Variables
                if(m_iRotationStep_Front == 0)
                {
                    m_i20SquareCache_Front = 0;
                    m_i12SquareCache_Front = 0;
                    m_i4SquareCache_Front = 0;
                }
                else if(m_iRotationStep_Front == 27)
                {
                    // if the last Step of the Rotation is reached, reset all, do another Rotation
                    m_iRotationStep_Front = 0;
                    m_i20SquareCache_Front = 0;
                    m_i12SquareCache_Front = 0;
                    m_i4SquareCache_Front = 0;
                }

                // 1. Rotate the outermost Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                for(z = 0; z < 8; z++)
                {
                    for(x = 0; x < 7; x++)
                    {
                        LED_Selection_Array[x+1][0][z] = LED_Selection_Array_Program[x][0][z][m_iProgrampartValue];
                        LED_Selection_Array[7-x-1][7][z] = LED_Selection_Array_Program[7-x][7][z][m_iProgrampartValue];
                    }
                    // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                    for(y = 0; y < 7; y++)
                    {
                        LED_Selection_Array[0][7-y-1][z] = LED_Selection_Array_Program[0][7-y][z][m_iProgrampartValue];
                        LED_Selection_Array[7][y+1][z] = LED_Selection_Array_Program[7][y][z][m_iProgrampartValue];
                    }
                }
                // 1. Rotate the outermost Square: End

                // 2. Rotate the second outermost Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i20SquareCache_Front != m_iRotationLogic[0][m_iRotationStep_Front])
                {
                    // only do a rotation on the second outermost Square if the m_iRotationLogic Value has changed
                    for(z = 0; z < 8; z++)
                    {
                        for(x = 1; x < 6; x++)
                        {
                            LED_Selection_Array[x+1][1][z] = LED_Selection_Array_Program[x][1][z][m_iProgrampartValue];
                            LED_Selection_Array[6-x][6][z] = LED_Selection_Array_Program[6-x+1][6][z][m_iProgrampartValue];
                        }
                        // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                        for(y = 1; y < 6; y++)
                        {
                            LED_Selection_Array[1][6-y][z] = LED_Selection_Array_Program[1][6-y+1][z][m_iProgrampartValue];
                            LED_Selection_Array[6][y+1][z] = LED_Selection_Array_Program[6][y][z][m_iProgrampartValue];
                        }
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i20SquareCache_Front = m_iRotationLogic[0][m_iRotationStep_Front];
                // 2. Rotate the second outermost Square: End

                // 3. Rotate the second inner Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i12SquareCache_Front != m_iRotationLogic[1][m_iRotationStep_Front])
                {
                    // only do a rotation on the second inner Square if the m_iRotationLogic Value has changed
                    for(z = 0; z < 8; z++)
                    {
                        for(x = 2; x < 5; x++)
                        {
                            LED_Selection_Array[x+1][2][z] = LED_Selection_Array_Program[x][2][z][m_iProgrampartValue];
                            LED_Selection_Array[5-x+1][5][z] = LED_Selection_Array_Program[5-x+2][5][z][m_iProgrampartValue];
                        }
                        // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                        for(y = 2; y < 5; y++)
                        {
                            LED_Selection_Array[2][5-y+1][z] = LED_Selection_Array_Program[2][5-y+2][z][m_iProgrampartValue];
                            LED_Selection_Array[5][y+1][z] = LED_Selection_Array_Program[5][y][z][m_iProgrampartValue];
                        }
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i12SquareCache_Front = m_iRotationLogic[1][m_iRotationStep_Front];
                // 3. Rotate the second inner Square: End

                // 4. Rotate the inner Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i4SquareCache_Front != m_iRotationLogic[2][m_iRotationStep_Front])
                {
                    // only do a rotation on the inner Square if the m_iRotationLogic Value has changed
                    for(z = 0; z < 8; z++)
                    {
                        LED_Selection_Array[4][3][z] = LED_Selection_Array_Program[3][3][z][m_iProgrampartValue];
                        LED_Selection_Array[4][4][z] = LED_Selection_Array_Program[4][3][z][m_iProgrampartValue];
                        LED_Selection_Array[3][4][z] = LED_Selection_Array_Program[4][4][z][m_iProgrampartValue];
                        LED_Selection_Array[3][3][z] = LED_Selection_Array_Program[3][4][z][m_iProgrampartValue];
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i4SquareCache_Front = m_iRotationLogic[2][m_iRotationStep_Front];
                // 4. Rotate the inner Square: End                

                // increase the Stepcounter
                m_iRotationStep_Front++;
            }
            else if(m_TopViewClicked)
            {
                // if m_iRotationStep is reseted reset cache Variables
                if(m_iRotationStep_Top == 0)
                {
                    m_i20SquareCache_Top = 0;
                    m_i12SquareCache_Top = 0;
                    m_i4SquareCache_Top = 0;
                }
                else if(m_iRotationStep_Top == 27)
                {
                    // if the last Step of the Rotation is reached, reset all, do another Rotation
                    m_iRotationStep_Top = 0;
                    m_i20SquareCache_Top = 0;
                    m_i12SquareCache_Top = 0;
                    m_i4SquareCache_Top = 0;
                }

                // 1. Rotate the outermost Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                for(y = 0; y < 8; y++)
                {
                    for(x = 0; x < 7; x++)
                    {
                        LED_Selection_Array[7-x-1][y][0] = LED_Selection_Array_Program[7-x][y][0][m_iProgrampartValue];
                        LED_Selection_Array[x+1][y][7] = LED_Selection_Array_Program[x][y][7][m_iProgrampartValue];
                    }
                    // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                    for(z = 0; z < 7; z++)
                    {
                        LED_Selection_Array[0][y][z+1] = LED_Selection_Array_Program[0][y][z][m_iProgrampartValue];
                        LED_Selection_Array[7][y][7-z-1] = LED_Selection_Array_Program[7][y][7-z][m_iProgrampartValue];
                    }
                }
                // 1. Rotate the outermost Square: End

                // 2. Rotate the second outermost Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i20SquareCache_Top != m_iRotationLogic[0][m_iRotationStep_Top])
                {
                    // only do a rotation on the second outermost Square if the m_iRotationLogic Value has changed
                    for(y = 0; y < 8; y++)
                    {
                        for(x = 1; x < 6; x++)
                        {
                            LED_Selection_Array[6-x][y][1] = LED_Selection_Array_Program[6-x+1][y][1][m_iProgrampartValue];
                            LED_Selection_Array[x+1][y][6] = LED_Selection_Array_Program[x][y][6][m_iProgrampartValue];
                        }
                        // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                        for(z = 1; z < 6; z++)
                        {
                            LED_Selection_Array[1][y][z+1] = LED_Selection_Array_Program[1][y][z][m_iProgrampartValue];
                            LED_Selection_Array[6][y][6-z] = LED_Selection_Array_Program[6][y][6-z+1][m_iProgrampartValue];
                        }
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i20SquareCache_Top = m_iRotationLogic[0][m_iRotationStep_Top];
                // 2. Rotate the second outermost Square: End

                // 3. Rotate the second inner Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i12SquareCache_Top != m_iRotationLogic[1][m_iRotationStep_Top])
                {
                    // only do a rotation on the second inner Square if the m_iRotationLogic Value has changed
                    for(y = 0; y < 8; y++)
                    {
                        for(x = 2; x < 5; x++)
                        {
                            LED_Selection_Array[5-x+1][y][2] = LED_Selection_Array_Program[5-x+2][y][2][m_iProgrampartValue];
                            LED_Selection_Array[x+1][y][5] = LED_Selection_Array_Program[x][y][5][m_iProgrampartValue];
                        }
                        // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                        for(z = 2; z < 5; z++)
                        {
                           LED_Selection_Array[2][y][z+1] = LED_Selection_Array_Program[2][y][z][m_iProgrampartValue];
                           LED_Selection_Array[5][y][5-z+1] = LED_Selection_Array_Program[5][y][5-z+2][m_iProgrampartValue];
                        }
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i12SquareCache_Top = m_iRotationLogic[1][m_iRotationStep_Top];
                // 3. Rotate the second inner Square: End

                // 4. Rotate the inner Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i4SquareCache_Top != m_iRotationLogic[2][m_iRotationStep_Top])
                {
                    // only do a rotation on the inner Square if the m_iRotationLogic Value has changed
                    for(y = 0; y < 8; y++)
                    {
                        LED_Selection_Array[3][y][3] = LED_Selection_Array_Program[4][y][3][m_iProgrampartValue];
                        LED_Selection_Array[4][y][3] = LED_Selection_Array_Program[4][y][4][m_iProgrampartValue];
                        LED_Selection_Array[4][y][4] = LED_Selection_Array_Program[3][y][4][m_iProgrampartValue];
                        LED_Selection_Array[3][y][4] = LED_Selection_Array_Program[3][y][3][m_iProgrampartValue];
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i4SquareCache_Top = m_iRotationLogic[2][m_iRotationStep_Top];
                // 4. Rotate the inner Square: End

                // increase the Stepcounter
                m_iRotationStep_Top++;

            }
            else if(m_RightViewClicked)
            {
                // if m_iRotationStep is reseted reset cache Variables
                if(m_iRotationStep_Right == 0)
                {
                    m_i20SquareCache_Right = 0;
                    m_i12SquareCache_Right = 0;
                    m_i4SquareCache_Right = 0;
                }
                else if(m_iRotationStep_Right == 27)
                {
                    // if the last Step of the Rotation is reached, reset all, do another Rotation
                    m_iRotationStep_Right = 0;
                    m_i20SquareCache_Right = 0;
                    m_i12SquareCache_Right = 0;
                    m_i4SquareCache_Right = 0;
                }

                // 1. Rotate the outermost Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                for(x = 0; x < 8; x++)
                {
                    for(y = 0; y < 7; y++)
                    {
                        LED_Selection_Array[x][7-y-1][0] = LED_Selection_Array_Program[x][7-y][0][m_iProgrampartValue];
                        LED_Selection_Array[x][y+1][7] = LED_Selection_Array_Program[x][y][7][m_iProgrampartValue];
                    }
                    // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                    for(z = 0; z < 7; z++)
                    {
                        LED_Selection_Array[x][0][z+1] = LED_Selection_Array_Program[x][0][z][m_iProgrampartValue];
                        LED_Selection_Array[x][7][7-z-1] = LED_Selection_Array_Program[x][7][7-z][m_iProgrampartValue];
                    }
                }
                // 1. Rotate the outermost Square: End

                // 2. Rotate the second outermost Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i20SquareCache_Right != m_iRotationLogic[0][m_iRotationStep_Right])
                {
                    // only do a rotation on the second outermost Square if the m_iRotationLogic Value has changed
                    for(x = 0; x < 8; x++)
                    {
                        for(y = 1; y < 6; y++)
                        {
                            LED_Selection_Array[x][6-y][1] = LED_Selection_Array_Program[x][6-y+1][1][m_iProgrampartValue];
                            LED_Selection_Array[x][y+1][6] = LED_Selection_Array_Program[x][y][6][m_iProgrampartValue];
                        }
                        // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                        for(z = 1; z < 6; z++)
                        {
                            LED_Selection_Array[x][1][z+1] = LED_Selection_Array_Program[x][1][z][m_iProgrampartValue];
                            LED_Selection_Array[x][6][6-z] = LED_Selection_Array_Program[x][6][6-z+1][m_iProgrampartValue];
                        }
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i20SquareCache_Right = m_iRotationLogic[0][m_iRotationStep_Right];
                // 2. Rotate the second outermost Square: End

                // 3. Rotate the second inner Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i12SquareCache_Right != m_iRotationLogic[1][m_iRotationStep_Right])
                {
                    // only do a rotation on the second inner Square if the m_iRotationLogic Value has changed
                    for(x = 0; x < 8; x++)
                    {
                        for(y = 2; y < 5; y++)
                        {
                            LED_Selection_Array[x][5-y+1][2] = LED_Selection_Array_Program[x][5-y+2][2][m_iProgrampartValue];
                            LED_Selection_Array[x][y+1][5] = LED_Selection_Array_Program[x][y][5][m_iProgrampartValue];
                        }
                        // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                        for(z = 2; z < 5; z++)
                        {
                           LED_Selection_Array[x][2][z+1] = LED_Selection_Array_Program[x][2][z][m_iProgrampartValue];
                           LED_Selection_Array[x][5][5-z+1] = LED_Selection_Array_Program[x][5][5-z+2][m_iProgrampartValue];
                        }
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i12SquareCache_Right = m_iRotationLogic[1][m_iRotationStep_Right];
                // 3. Rotate the second inner Square: End

                // 4. Rotate the inner Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i4SquareCache_Right != m_iRotationLogic[2][m_iRotationStep_Right])
                {
                    // only do a rotation on the inner Square if the m_iRotationLogic Value has changed
                    for(x = 0; x < 8; x++)
                    {
                        LED_Selection_Array[x][3][3] = LED_Selection_Array_Program[x][4][3][m_iProgrampartValue];
                        LED_Selection_Array[x][4][3] = LED_Selection_Array_Program[x][4][4][m_iProgrampartValue];
                        LED_Selection_Array[x][4][4] = LED_Selection_Array_Program[x][3][4][m_iProgrampartValue];
                        LED_Selection_Array[x][3][4] = LED_Selection_Array_Program[x][3][3][m_iProgrampartValue];
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i4SquareCache_Right = m_iRotationLogic[2][m_iRotationStep_Right];
                // 4. Rotate the inner Square: End

                // increase the Stepcounter
                m_iRotationStep_Right++;
            }
        }
        else
        {
            // Left Rotation

            // which view?
            if(m_FrontViewClicked)
            {
                // if m_iRotationStep is resetet reset cache Variables
                if(m_iRotationStep_Front == 0)
                {
                    m_i20SquareCache_Front = 0;
                    m_i12SquareCache_Front = 0;
                    m_i4SquareCache_Front = 0;
                }
                else if(m_iRotationStep_Front == 27)
                {
                    // if the last Step of the Rotation is reached, reset all, do another Rotation
                    m_iRotationStep_Front = 0;
                    m_i20SquareCache_Front = 0;
                    m_i12SquareCache_Front = 0;
                    m_i4SquareCache_Front = 0;
                }

                // 1. Rotate the outermost Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                for(z = 0; z < 8; z++)
                {
                    for(x = 0; x < 7; x++)
                    {
                        LED_Selection_Array[7-x-1][0][z] = LED_Selection_Array_Program[7-x][0][z][m_iProgrampartValue];
                        LED_Selection_Array[x+1][7][z] = LED_Selection_Array_Program[x][7][z][m_iProgrampartValue];
                    }
                    // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                    for(y = 0; y < 7; y++)
                    {
                        LED_Selection_Array[0][y+1][z] = LED_Selection_Array_Program[0][y][z][m_iProgrampartValue];
                        LED_Selection_Array[7][7-y-1][z] = LED_Selection_Array_Program[7][7-y][z][m_iProgrampartValue];
                    }
                }
                // 1. Rotate the outermost Square: End

                // 2. Rotate the second outermost Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i20SquareCache_Front != m_iRotationLogic[0][m_iRotationStep_Front])
                {
                    // only do a rotation on the second outermost Square if the m_iRotationLogic Value has changed
                    for(z = 0; z < 8; z++)
                    {
                        for(x = 1; x < 6; x++)
                        {
                            LED_Selection_Array[6-x][1][z] = LED_Selection_Array_Program[6-x+1][1][z][m_iProgrampartValue];
                            LED_Selection_Array[x+1][6][z] = LED_Selection_Array_Program[x][6][z][m_iProgrampartValue];
                        }
                        // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                        for(y = 1; y < 6; y++)
                        {
                            LED_Selection_Array[1][y+1][z] = LED_Selection_Array_Program[1][y][z][m_iProgrampartValue];
                            LED_Selection_Array[6][6-y][z] = LED_Selection_Array_Program[6][6-y+1][z][m_iProgrampartValue];
                        }
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i20SquareCache_Front = m_iRotationLogic[0][m_iRotationStep_Front];
                // 2. Rotate the second outermost Square: End

                // 3. Rotate the second inner Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i12SquareCache_Front != m_iRotationLogic[1][m_iRotationStep_Front])
                {
                    // only do a rotation on the second inner Square if the m_iRotationLogic Value has changed
                    for(z = 0; z < 8; z++)
                    {
                        for(x = 2; x < 5; x++)
                        {
                            LED_Selection_Array[5-x+1][2][z] = LED_Selection_Array_Program[5-x+2][2][z][m_iProgrampartValue];
                            LED_Selection_Array[x+1][5][z] = LED_Selection_Array_Program[x][5][z][m_iProgrampartValue];
                        }
                        // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                        for(y = 2; y < 5; y++)
                        {
                            LED_Selection_Array[2][y+1][z] = LED_Selection_Array_Program[2][y][z][m_iProgrampartValue];
                            LED_Selection_Array[5][5-y+1][z] = LED_Selection_Array_Program[5][5-y+2][z][m_iProgrampartValue];
                        }
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i12SquareCache_Front = m_iRotationLogic[1][m_iRotationStep_Front];
                // 3. Rotate the second inner Square: End

                // 4. Rotate the inner Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i4SquareCache_Front != m_iRotationLogic[2][m_iRotationStep_Front])
                {
                    // only do a rotation on the inner Square if the m_iRotationLogic Value has changed
                    for(z = 0; z < 8; z++)
                    {
                        LED_Selection_Array[3][3][z] = LED_Selection_Array_Program[4][3][z][m_iProgrampartValue];
                        LED_Selection_Array[4][3][z] = LED_Selection_Array_Program[4][4][z][m_iProgrampartValue];
                        LED_Selection_Array[4][4][z] = LED_Selection_Array_Program[3][4][z][m_iProgrampartValue];
                        LED_Selection_Array[3][4][z] = LED_Selection_Array_Program[3][3][z][m_iProgrampartValue];
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i4SquareCache_Front = m_iRotationLogic[2][m_iRotationStep_Front];
                // 4. Rotate the inner Square: End

                // increase the Stepcounter
                m_iRotationStep_Front++;
            }
            else if(m_TopViewClicked)
            {
                // if m_iRotationStep is reseted reset cache Variables
                if(m_iRotationStep_Top == 0)
                {
                    m_i20SquareCache_Top = 0;
                    m_i12SquareCache_Top = 0;
                    m_i4SquareCache_Top = 0;
                }
                else if(m_iRotationStep_Top == 27)
                {
                    // if the last Step of the Rotation is reached, reset all, do another Rotation
                    m_iRotationStep_Top = 0;
                    m_i20SquareCache_Top = 0;
                    m_i12SquareCache_Top = 0;
                    m_i4SquareCache_Top = 0;
                }

                // 1. Rotate the outermost Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                for(y = 0; y < 8; y++)
                {
                    for(x = 0; x < 7; x++)
                    {
                        LED_Selection_Array[x+1][y][0] = LED_Selection_Array_Program[x][y][0][m_iProgrampartValue];
                        LED_Selection_Array[7-x-1][y][7] = LED_Selection_Array_Program[7-x][y][7][m_iProgrampartValue];
                    }
                    // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                    for(z = 0; z < 7; z++)
                    {
                        LED_Selection_Array[0][y][7-z-1] = LED_Selection_Array_Program[0][y][7-z][m_iProgrampartValue];
                        LED_Selection_Array[7][y][z+1] = LED_Selection_Array_Program[7][y][z][m_iProgrampartValue];
                    }
                }
                // 1. Rotate the outermost Square: End

                // 2. Rotate the second outermost Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i20SquareCache_Top != m_iRotationLogic[0][m_iRotationStep_Top])
                {
                    // only do a rotation on the second outermost Square if the m_iRotationLogic Value has changed
                    for(y = 0; y < 8; y++)
                    {
                        for(x = 1; x < 6; x++)
                        {
                            LED_Selection_Array[x+1][y][1] = LED_Selection_Array_Program[x][y][1][m_iProgrampartValue];
                            LED_Selection_Array[6-x][y][6] = LED_Selection_Array_Program[6-x+1][y][6][m_iProgrampartValue];
                        }
                        // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                        for(z = 1; z < 6; z++)
                        {
                            LED_Selection_Array[1][y][6-z] = LED_Selection_Array_Program[1][y][6-z+1][m_iProgrampartValue];
                            LED_Selection_Array[6][y][z+1] = LED_Selection_Array_Program[6][y][z][m_iProgrampartValue];
                        }
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i20SquareCache_Top = m_iRotationLogic[0][m_iRotationStep_Top];
                // 2. Rotate the second outermost Square: End

                // 3. Rotate the second inner Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i12SquareCache_Top != m_iRotationLogic[1][m_iRotationStep_Top])
                {
                    // only do a rotation on the second inner Square if the m_iRotationLogic Value has changed
                    for(y = 0; y < 8; y++)
                    {
                        for(x = 2; x < 5; x++)
                        {
                            LED_Selection_Array[x+1][y][2] = LED_Selection_Array_Program[x][y][2][m_iProgrampartValue];
                            LED_Selection_Array[5-x+1][y][5] = LED_Selection_Array_Program[5-x+2][y][5][m_iProgrampartValue];
                        }
                        // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                        for(z = 2; z < 5; z++)
                        {
                           LED_Selection_Array[2][y][5-z+1] = LED_Selection_Array_Program[2][y][5-z+2][m_iProgrampartValue];
                           LED_Selection_Array[5][y][z+1] = LED_Selection_Array_Program[5][y][z][m_iProgrampartValue];
                        }
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i12SquareCache_Top = m_iRotationLogic[1][m_iRotationStep_Top];
                // 3. Rotate the second inner Square: End

                // 4. Rotate the inner Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i4SquareCache_Top != m_iRotationLogic[2][m_iRotationStep_Top])
                {
                    // only do a rotation on the inner Square if the m_iRotationLogic Value has changed
                    for(y = 0; y < 8; y++)
                    {
                        LED_Selection_Array[4][y][3] = LED_Selection_Array_Program[3][y][3][m_iProgrampartValue];
                        LED_Selection_Array[4][y][4] = LED_Selection_Array_Program[4][y][3][m_iProgrampartValue];
                        LED_Selection_Array[3][y][4] = LED_Selection_Array_Program[4][y][4][m_iProgrampartValue];
                        LED_Selection_Array[3][y][3] = LED_Selection_Array_Program[3][y][4][m_iProgrampartValue];
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i4SquareCache_Top = m_iRotationLogic[2][m_iRotationStep_Top];
                // 4. Rotate the inner Square: End

                // increase the Stepcounter
                m_iRotationStep_Top++;
            }
            else if(m_RightViewClicked)
            {
                // if m_iRotationStep is reseted reset cache Variables
                if(m_iRotationStep_Right == 0)
                {
                    m_i20SquareCache_Right = 0;
                    m_i12SquareCache_Right = 0;
                    m_i4SquareCache_Right = 0;
                }
                else if(m_iRotationStep_Right == 27)
                {
                    // if the last Step of the Rotation is reached, reset all, do another Rotation
                    m_iRotationStep_Right = 0;
                    m_i20SquareCache_Right = 0;
                    m_i12SquareCache_Right = 0;
                    m_i4SquareCache_Right = 0;
                }

                // 1. Rotate the outermost Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                for(x = 0; x < 8; x++)
                {
                    for(y = 0; y < 7; y++)
                    {
                        LED_Selection_Array[x][y+1][0] = LED_Selection_Array_Program[x][y][0][m_iProgrampartValue];
                        LED_Selection_Array[x][7-y-1][7] = LED_Selection_Array_Program[x][7-y][7][m_iProgrampartValue];
                    }
                    // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                    for(z = 0; z < 7; z++)
                    {
                        LED_Selection_Array[x][0][7-z-1] = LED_Selection_Array_Program[x][0][7-z][m_iProgrampartValue];
                        LED_Selection_Array[x][7][z+1] = LED_Selection_Array_Program[x][7][z][m_iProgrampartValue];
                    }
                }
                // 1. Rotate the outermost Square: End

                // 2. Rotate the second outermost Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i20SquareCache_Right != m_iRotationLogic[0][m_iRotationStep_Right])
                {
                    // only do a rotation on the second outermost Square if the m_iRotationLogic Value has changed
                    for(x = 0; x < 8; x++)
                    {
                        for(y = 1; y < 6; y++)
                        {
                            LED_Selection_Array[x][y+1][1] = LED_Selection_Array_Program[x][y][1][m_iProgrampartValue];
                            LED_Selection_Array[x][6-y][6] = LED_Selection_Array_Program[x][6-y+1][6][m_iProgrampartValue];
                        }
                        // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                        for(z = 1; z < 6; z++)
                        {
                            LED_Selection_Array[x][1][6-z] = LED_Selection_Array_Program[x][1][6-z+1][m_iProgrampartValue];
                            LED_Selection_Array[x][6][z+1] = LED_Selection_Array_Program[x][6][z][m_iProgrampartValue];
                        }
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i20SquareCache_Right = m_iRotationLogic[0][m_iRotationStep_Right];
                // 2. Rotate the second outermost Square: End

                // 3. Rotate the second inner Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i12SquareCache_Right != m_iRotationLogic[1][m_iRotationStep_Right])
                {
                    // only do a rotation on the second inner Square if the m_iRotationLogic Value has changed
                    for(x = 0; x < 8; x++)
                    {
                        for(y = 2; y < 5; y++)
                        {
                            LED_Selection_Array[x][y+1][2] = LED_Selection_Array_Program[x][y][2][m_iProgrampartValue];
                            LED_Selection_Array[x][5-y+1][5] = LED_Selection_Array_Program[x][5-y+2][5][m_iProgrampartValue];
                        }
                        // Move the two vertical parts (without the corners) in a Right Rotation "Move"
                        for(z = 2; z < 5; z++)
                        {
                           LED_Selection_Array[x][2][5-z+1] = LED_Selection_Array_Program[x][2][5-z+2][m_iProgrampartValue];
                           LED_Selection_Array[x][5][z+1] = LED_Selection_Array_Program[x][5][z][m_iProgrampartValue];
                        }
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i12SquareCache_Right = m_iRotationLogic[1][m_iRotationStep_Right];
                // 3. Rotate the second inner Square: End

                // 4. Rotate the inner Square: Beginn
                // Move the two horizontal parts in a Right Rotation "Move"
                if(m_i4SquareCache_Right != m_iRotationLogic[2][m_iRotationStep_Right])
                {
                    // only do a rotation on the inner Square if the m_iRotationLogic Value has changed
                    for(x = 0; x < 8; x++)
                    {
                        LED_Selection_Array[x][4][3] = LED_Selection_Array_Program[x][3][3][m_iProgrampartValue];
                        LED_Selection_Array[x][4][4] = LED_Selection_Array_Program[x][4][3][m_iProgrampartValue];
                        LED_Selection_Array[x][3][4] = LED_Selection_Array_Program[x][4][4][m_iProgrampartValue];
                        LED_Selection_Array[x][3][3] = LED_Selection_Array_Program[x][3][4][m_iProgrampartValue];
                    }
                }
                // Save the Current m_iRotationLogic Value
                m_i4SquareCache_Right = m_iRotationLogic[2][m_iRotationStep_Right];
                // 4. Rotate the inner Square: End

                // increase the Stepcounter
                m_iRotationStep_Right++;
            }
        }

        if(m_no_Existing_Programpart)
        {
            // now a valid Programpart exists
            m_no_Existing_Programpart = false;
        }
    }
    else if(!m_toggledAcceptforNextPart && !m_MoveToALayerBehind && !m_Deleted)
    {
        // Normal Reset, no flags singed (Default case)
        // prepare for new Programpart
        LED_Cube_Main::ResetLED_Selection_Array();

        if(m_no_Existing_Programpart)
        {
            // now a valid Programpart exists
            m_no_Existing_Programpart = false;
        }
    }

    // set ProgrammpartValue
    m_iProgrampartValue = m_iAnzProgramNr;

    // save the new Part (it could be empty or inlcude the same Logic as the last clicked part)
    for(int x = 0; x < 8; x++)
    {
        for(int y = 0; y < 8; y++)
        {
            for(int z = 0; z < 8; z++)
            {
               LED_Selection_Array_Program[x][y][z][m_iProgrampartValue] = LED_Selection_Array[x][y][z];
            }
        }
    }

    // set choosen Seconds
    m_iChoosenSecondsProgram[m_iProgrampartValue] = m_iSeconds;

    // Delete "old" RectEdges
    LED_Cube_Main::DeleteOldRectEdges();

    // Show new Programpart in the management
    LED_Cube_Main::CreateNewProgramSquare(m_iAnzProgramNr);

    // increase m_iAnzProgramNr Value
    m_iAnzProgramNr++;

    // set m_New_Prog_Part falg true (to let the RectEdge be correctly drawn)
    m_New_Prog_Part = true;

    // ProgramNumber Cursor manipulation (manipulate it to be in the middle of the new ProgramPartSquare, if that happens, a Rect_Edge is drawn around it)
    int PosX, PosY;
    // Get relative X/Y coordinates
    PosY = (m_iAnzProgramNr - 1)/4;
    PosX = (m_iAnzProgramNr - 1) - (PosY*4);
    // Call DrawRectEdge to Draw the Rect_Edge
    LED_Cube_Main::DrawRectEdge(PosX, PosY);
    // Show the new LED-Logic on the Scenes
    LED_Cube_Main::DisplayTheChoosenProgrampartOnTheScene(PosX, PosY);
}
void LED_Cube_Main::on_Button_Back_clicked()
{
    if(m_iRotationStep_Front != 0)
    {
        m_iRotationStep_Front--;        
        m_i20SquareCache_Front = m_iRotationLogic[0][m_iRotationStep_Front-1];
        m_i12SquareCache_Front = m_iRotationLogic[1][m_iRotationStep_Front-1];
        m_i4SquareCache_Front = m_iRotationLogic[2][m_iRotationStep_Front-1];
    }
    if(m_iRotationStep_Top != 0)
    {
        m_iRotationStep_Top--;
        m_i20SquareCache_Top = m_iRotationLogic[0][m_iRotationStep_Top-1];
        m_i12SquareCache_Top = m_iRotationLogic[1][m_iRotationStep_Top-1];
        m_i4SquareCache_Top = m_iRotationLogic[2][m_iRotationStep_Top-1];
    }
    if(m_iRotationStep_Right != 0)
    {
        m_iRotationStep_Right--;
        m_i20SquareCache_Right = m_iRotationLogic[0][m_iRotationStep_Right-1];
        m_i12SquareCache_Right = m_iRotationLogic[1][m_iRotationStep_Right-1];
        m_i4SquareCache_Right = m_iRotationLogic[2][m_iRotationStep_Right-1];
    }


    if(m_iAnzProgramNr == 1)
    {
        // if there is only one Programpart left, delete it and creat a new, blank Programpart

        // Delete "old" RectEdges
        LED_Cube_Main::DeleteOldRectEdges();

        // Delete the Last Programpart from the Scene (now the Scene is empty)
        for(int i = 0; i < 3; i++)
        {
            ItemList = ProgramNumber_Scene->items();    // Get the Itemlist of ProgramNumber_Scene
            QGraphicsItem *item;
            item = ItemList.first();                    // Initialize the item which should be deleted
            ProgramNumber_Scene->removeItem(item);      // delete item form the ProgramNumber_Scene
        }

        // sign m_Deleted Flag
        m_Deleted = true;
        m_iAnzProgramNr--;
        LED_Cube_Main::on_Button_New_clicked();
    }
    else
    {
        // Delete "old" RectEdges
        LED_Cube_Main::DeleteOldRectEdges();

        // Delete the Last Programpart from the Scene
         for(int i = 0; i < 3; i++)
         {
             ItemList = ProgramNumber_Scene->items();    // Get the Itemlist of ProgramNumber_Scene
             QGraphicsItem *item;
             item = ItemList.first();                    // Initialize the item which should be deleted
             ProgramNumber_Scene->removeItem(item);      // delete item form the ProgramNumber_Scene
         }

        // PosY == the Row, PosX == Part in the Row
        int PosX, PosY, NewPosX, NewPosY;

        // Get relative X/Y coordinates
        PosY = (m_iAnzProgramNr - 1)/4;
        PosX = (m_iAnzProgramNr - 1) - (PosY*4);

        // CursorManipulation
        if(PosX == 0)
        {
            // if the Part is the last in a Row jump on the last part in the row on top
            NewPosY = PosY - 1;
            NewPosX = 3;
        }
        else
        {
            // if not just go on the next part left to it
            NewPosX = PosX - 1;
            NewPosY = PosY;
        }

        LED_Cube_Main::DrawRectEdge(NewPosX, NewPosY);
        LED_Cube_Main::DisplayTheChoosenProgrampartOnTheScene(NewPosX, NewPosY);

        m_iAnzProgramNr--;
    }
    LED_Cube_Main::SetProgramNumberSceneRectandSliderPos(m_iAnzProgramNr - 1);
}
void LED_Cube_Main::on_Button_Delete_All_clicked()
{
    m_iAnzProgramNr = 0;

    // Delete old Rect Edges and set Flags
    LED_Cube_Main::DeleteOldRectEdges();

    // Delete all Items on ProgramNumber_Scene
    qDeleteAll(ProgramNumber_Scene->items());

    // set m_Deleted flag
    m_Deleted = true;
    // reset Rotationvariables
    LED_Cube_Main::ResetRotationVariables();

    // create a new Programpart, Programview is never empty
    LED_Cube_Main::on_Button_New_clicked();
}
void LED_Cube_Main::on_Button_Top_View_clicked()
{
    if(m_Top_View_toggle)
    {
        // Define Picture
        QPixmap Button_Top_View_pm(":/images/images/Button_Top_View_deakt.png");
        // Set Icons on Buttons
        ui->Button_Top_View->setIcon(Button_Top_View_pm);
        // Correct Icon Size
        ui->Button_Top_View->setIconSize(Button_Top_View_pm.rect().size());

        // Show View and Buttons
        ui->LED_Selection_Top_View->show();
        ui->Button_Top_Level_1->show();
        ui->Button_Top_Level_2->show();
        ui->Button_Top_Level_3->show();
        ui->Button_Top_Level_4->show();
        ui->Button_Top_Level_5->show();
        ui->Button_Top_Level_6->show();
        ui->Button_Top_Level_7->show();
        ui->Button_Top_Level_8->show();
        // Put Buttons under the shown view
        ui->Button_Right_View->setGeometry(784, 201, 152, 32);
        ui->Button_Right_Level_1->setGeometry(784, 234, 20, 20);
        ui->Button_Right_Level_2->setGeometry(802, 234, 20, 20);
        ui->Button_Right_Level_3->setGeometry(821, 234, 20, 20);
        ui->Button_Right_Level_4->setGeometry(840, 234, 20, 20);
        ui->Button_Right_Level_5->setGeometry(859, 234, 20, 20);
        ui->Button_Right_Level_6->setGeometry(878, 234, 20, 20);
        ui->Button_Right_Level_7->setGeometry(897, 234, 20, 20);
        ui->Button_Right_Level_8->setGeometry(916, 234, 20, 20);
        ui->LED_Selection_Right_View->setGeometry(784, 253, 152, 152);
        // Set toggle variable
        m_Top_View_toggle = false;

        // Set View Flags
        m_FrontViewClicked = false;
        m_TopViewClicked = true;
        m_RightViewClicked = false;
    }
    else
    {
        // Define Picture
        QPixmap Button_Top_View_pm(":/images/images/Button_Top_View_akt.png");
        // Set Icons on Buttons
        ui->Button_Top_View->setIcon(Button_Top_View_pm);
        // Correct Icon Size
        ui->Button_Top_View->setIconSize(Button_Top_View_pm.rect().size());

        // Hide View and Buttons
        ui->LED_Selection_Top_View->setHidden(true);
        ui->Button_Top_Level_1->setHidden(true);
        ui->Button_Top_Level_2->setHidden(true);
        ui->Button_Top_Level_3->setHidden(true);
        ui->Button_Top_Level_4->setHidden(true);
        ui->Button_Top_Level_5->setHidden(true);
        ui->Button_Top_Level_6->setHidden(true);
        ui->Button_Top_Level_7->setHidden(true);
        ui->Button_Top_Level_8->setHidden(true);
        // Put Buttons under Button_Top_View
        ui->Button_Right_View->setGeometry(784, 30, 152, 32);
        ui->Button_Right_Level_1->setGeometry(784, 63, 20, 20);
        ui->Button_Right_Level_2->setGeometry(802, 63, 20, 20);
        ui->Button_Right_Level_3->setGeometry(821, 63, 20, 20);
        ui->Button_Right_Level_4->setGeometry(840, 63, 20, 20);
        ui->Button_Right_Level_5->setGeometry(859, 63, 20, 20);
        ui->Button_Right_Level_6->setGeometry(878, 63, 20, 20);
        ui->Button_Right_Level_7->setGeometry(897, 63, 20, 20);
        ui->Button_Right_Level_8->setGeometry(916, 63, 20, 20);
        ui->LED_Selection_Right_View->setGeometry(784, 82, 152, 152);
        // Set toggle variable
        m_Top_View_toggle = true;
    }
}
void LED_Cube_Main::on_Button_Right_View_clicked()
{
    if(m_Right_View_toggle)
    {
        // Define Picture
        QPixmap Button_Right_View_pm(":/images/images/Button_Right_View_deakt.png");
        // Set Icons on Buttons
        ui->Button_Right_View->setIcon(Button_Right_View_pm);
        // Correct Icon Size
        ui->Button_Right_View->setIconSize(Button_Right_View_pm.rect().size());

        // Show View and Buttons
        ui->LED_Selection_Right_View->show();
        ui->Button_Right_Level_1->show();
        ui->Button_Right_Level_2->show();
        ui->Button_Right_Level_3->show();
        ui->Button_Right_Level_4->show();
        ui->Button_Right_Level_5->show();
        ui->Button_Right_Level_6->show();
        ui->Button_Right_Level_7->show();
        ui->Button_Right_Level_8->show();
        // Set toggle variable
        m_Right_View_toggle = false;
    }
    else
    {
        // Define Picture
        QPixmap Button_Right_View_pm(":/images/images/Button_Right_View_akt.png");
        // Define Icons
        QIcon Button_Right_View_Icon(Button_Right_View_pm);
        // Set Icons on Buttons
        ui->Button_Right_View->setIcon(Button_Right_View_Icon);
        // Correct Icon Size
        ui->Button_Right_View->setIconSize(Button_Right_View_pm.rect().size());

        // Hide View and Buttons
        ui->LED_Selection_Right_View->setHidden(true);
        ui->Button_Right_Level_1->setHidden(true);
        ui->Button_Right_Level_2->setHidden(true);
        ui->Button_Right_Level_3->setHidden(true);
        ui->Button_Right_Level_4->setHidden(true);
        ui->Button_Right_Level_5->setHidden(true);
        ui->Button_Right_Level_6->setHidden(true);
        ui->Button_Right_Level_7->setHidden(true);
        ui->Button_Right_Level_8->setHidden(true);
        // Set toggle variable
        m_Right_View_toggle = true;
    }
}
void LED_Cube_Main::on_Button_Level_1_clicked()
{
    // Setup Level 1
    m_iChoosenLevel = 0;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOnScene();
    SetChoosenLeveldisabled();
}
void LED_Cube_Main::on_Button_Level_2_clicked()
{
    // Setup Level 2
    m_iChoosenLevel = 1;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOnScene();
    SetChoosenLeveldisabled();
}
void LED_Cube_Main::on_Button_Level_3_clicked()
{
    // Setup Level 3
    m_iChoosenLevel = 2;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOnScene();
    SetChoosenLeveldisabled();
}
void LED_Cube_Main::on_Button_Level_4_clicked()
{
    // Setup Level 4
    m_iChoosenLevel = 3;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOnScene();
    SetChoosenLeveldisabled();
}
void LED_Cube_Main::on_Button_Level_5_clicked()
{
    // Setup Level 5
    m_iChoosenLevel = 4;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOnScene();
    SetChoosenLeveldisabled();
}
void LED_Cube_Main::on_Button_Level_6_clicked()
{
    // Setup Level 6
    m_iChoosenLevel = 5;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOnScene();
    SetChoosenLeveldisabled();
}
void LED_Cube_Main::on_Button_Level_7_clicked()
{
    // Setup Level 7
    m_iChoosenLevel = 6;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOnScene();
    SetChoosenLeveldisabled();
}
void LED_Cube_Main::on_Button_Level_8_clicked()
{
    // Setup Level 8
    m_iChoosenLevel = 7;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOnScene();
    SetChoosenLeveldisabled();
}
void LED_Cube_Main::on_Button_Top_Level_1_clicked()
{
    // Setup Level 1
    m_iChoosenLevel_Top = 0;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
    SetChoosen_Top_Leveldisabled();

}
void LED_Cube_Main::on_Button_Top_Level_2_clicked()
{
    // Setup Level 2
    m_iChoosenLevel_Top = 1;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
    SetChoosen_Top_Leveldisabled();
}
void LED_Cube_Main::on_Button_Top_Level_3_clicked()
{
    // Setup Level 3
    m_iChoosenLevel_Top = 2;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
    SetChoosen_Top_Leveldisabled();

}
void LED_Cube_Main::on_Button_Top_Level_4_clicked()
{
    // Setup Level 4
    m_iChoosenLevel_Top = 3;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
    SetChoosen_Top_Leveldisabled();

}
void LED_Cube_Main::on_Button_Top_Level_5_clicked()
{
    // Setup Level 5
    m_iChoosenLevel_Top = 4;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
    SetChoosen_Top_Leveldisabled();

}
void LED_Cube_Main::on_Button_Top_Level_6_clicked()
{
    // Setup Level 6
    m_iChoosenLevel_Top = 5;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
    SetChoosen_Top_Leveldisabled();

}
void LED_Cube_Main::on_Button_Top_Level_7_clicked()
{
    // Setup Level 7
    m_iChoosenLevel_Top = 6;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
    SetChoosen_Top_Leveldisabled();

}
void LED_Cube_Main::on_Button_Top_Level_8_clicked()
{
    // Setup Level 8
    m_iChoosenLevel_Top = 7;

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
    SetChoosen_Top_Leveldisabled();

}
void LED_Cube_Main::on_Button_Right_Level_1_clicked()
{
    // Setup Level 1
    m_iChoosenLevel_Right = 7;         // Inverse the first Right Level is the outermost Cube Level

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
    SetChoosen_Right_Leveldisabled();
}
void LED_Cube_Main::on_Button_Right_Level_2_clicked()
{
    // Setup Level 2
    m_iChoosenLevel_Right = 6;         // Inverse the first Right Level is the outermost Cube Level

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
    SetChoosen_Right_Leveldisabled();
}
void LED_Cube_Main::on_Button_Right_Level_3_clicked()
{
    // Setup Level 3
    m_iChoosenLevel_Right = 5;         // Inverse the first Right Level is the outermost Cube Level

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
    SetChoosen_Right_Leveldisabled();
}
void LED_Cube_Main::on_Button_Right_Level_4_clicked()
{
    // Setup Level 4
    m_iChoosenLevel_Right = 4;         // Inverse the first Right Level is the outermost Cube Level

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
    SetChoosen_Right_Leveldisabled();
}
void LED_Cube_Main::on_Button_Right_Level_5_clicked()
{
    // Setup Level 5
    m_iChoosenLevel_Right = 3;         // Inverse the first Right Level is the outermost Cube Level

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
    SetChoosen_Right_Leveldisabled();
}
void LED_Cube_Main::on_Button_Right_Level_6_clicked()
{
    // Setup Level 6
    m_iChoosenLevel_Right = 2;         // Inverse the first Right Level is the outermost Cube Level

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
    SetChoosen_Right_Leveldisabled();
}
void LED_Cube_Main::on_Button_Right_Level_7_clicked()
{
    // Setup Level 7
    m_iChoosenLevel_Right = 1;         // Inverse the first Right Level is the outermost Cube Level

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
    SetChoosen_Right_Leveldisabled();
}
void LED_Cube_Main::on_Button_Right_Level_8_clicked()
{
    // Setup Level 8
    m_iChoosenLevel_Right = 0;         // Inverse the first Right Level is the (äußerste) Cube Level

    // LED View Output
    LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
    SetChoosen_Right_Leveldisabled();
}
void LED_Cube_Main::on_Button_Play_clicked()
{
    if(m_toggledPlay_Button)
    {
        // Define Picture
        QPixmap Button_Play_pm(":/images/images/Button_Play.png");
        // Set Icon on Button
        ui->Button_Play->setIcon(Button_Play_pm);
        // Correct Icon Size
        ui->Button_Play->setIconSize(Button_Play_pm.rect().size());

        // Enable Buttons
        ui->Button_PlayLoop->setEnabled(true);

        m_toggledPlay_Button = false;
    }
    else
    {
        // Define Picture
        QPixmap Button_Stop_pm(":/images/images/Button_Stop.png");
        // Set Icon on Button
        ui->Button_Play->setIcon(Button_Stop_pm);
        // Correct Icon Size
        ui->Button_Play->setIconSize(Button_Stop_pm.rect().size());

        // Disable Buttons
        ui->Button_PlayLoop->setEnabled(false);
        m_toggledPlay_Button = true;
    }

    DisablewhilePlay();

    LED_Cube_Main::PlayLEDPorgram();

}
void LED_Cube_Main::on_Button_PlayLoop_clicked()
{
    if(m_toggledPlayLoop_Button)
    {
        // Define Picture
        QPixmap Button_PlayLoop_pm(":/images/images/Button_PlayLoop.png");
        // Set Icon on Button
        ui->Button_PlayLoop->setIcon(Button_PlayLoop_pm);
        // Correct Icon Size
        ui->Button_PlayLoop->setIconSize(Button_PlayLoop_pm.rect().size());

        // Enable Play
        ui->Button_Play->setEnabled(true);

        m_toggledPlayLoop_Button = false;
    }
    else
    {
        // Define Picture
        QPixmap Button_StopLoop_pm(":/images/images/Button_StopLoop.png");
        // Set Icon on Button
        ui->Button_PlayLoop->setIcon(Button_StopLoop_pm);
        // Correct Icon Size
        ui->Button_PlayLoop->setIconSize(Button_StopLoop_pm.rect().size());

        // Disable Play
        ui->Button_Play->setEnabled(false);

        m_toggledPlayLoop_Button = true;
    }

    DisablewhilePlay();

    LED_Cube_Main::PlayLEDPorgram();

}
void LED_Cube_Main::on_Button_Check_Accept_Part_for_Next_Part_clicked()
{
    if(m_toggledAcceptforNextPart)
    {
        // Define Picture
        QPixmap Button_Check_Accept_Part_for_Next_Part_pm(":/images/images/Button_Check_Accept_Part_for_Next_Part_unchecked.png");
        // Set Icon on Button
        ui->Button_Check_Accept_Part_for_Next_Part->setIcon(Button_Check_Accept_Part_for_Next_Part_pm);
        // Correct Icon Size
        ui->Button_Check_Accept_Part_for_Next_Part->setIconSize(Button_Check_Accept_Part_for_Next_Part_pm.rect().size());

        m_toggledAcceptforNextPart = false;
    }
    else
    {
        // Define Picture
        QPixmap Button_Check_Accept_Part_for_Next_Part_pm(":/images/images/Button_Check_Accept_Part_for_Next_Part_checked.png");
        // Define Icon
        QIcon Button_Check_Accept_Part_for_Next_Part_Icon(Button_Check_Accept_Part_for_Next_Part_pm);
        // Set Icon on Button
        ui->Button_Check_Accept_Part_for_Next_Part->setIcon(Button_Check_Accept_Part_for_Next_Part_Icon);
        // Correct Icon Size
        ui->Button_Check_Accept_Part_for_Next_Part->setIconSize(Button_Check_Accept_Part_for_Next_Part_pm.rect().size());

        // Toggle other Buttons and set them false and unchecked
        m_Rotate_Left_View = true;
        LED_Cube_Main::on_Button_Rotate_Left_View_clicked();  // -> m_Center_View will be flase and the Button gets unchecked

        m_Rotate_Right_View = true;
        LED_Cube_Main::on_Button_Rotate_Right_View_clicked();  // -> m_Rotate_View will be flase and the Button gets unchecked

        // set m_toggledAcceptforNextPart Flag true
        m_toggledAcceptforNextPart = true;
    }
}
void LED_Cube_Main::on_Button_Move_To_A_Layer_Behind_clicked()
{
    if(m_MoveToALayerBehind)
    {
        // Define Picture
        QPixmap Button_Move_To_A_Layer_Behind_pm(":/images/images/Button_Move_To_A_Layer_Behind_unchecked.png");
        // Set Icon on Button
        ui->Button_Move_To_A_Layer_Behind->setIcon(Button_Move_To_A_Layer_Behind_pm);
        // Correct Icon Size
        ui->Button_Move_To_A_Layer_Behind->setIconSize(Button_Move_To_A_Layer_Behind_pm.rect().size());

        // set m_MoveToALayerBehindorInFront Flag false
        m_MoveToALayerBehindorInFront = false;

        // set m_MoveToALayerBehind toggle to false
        m_MoveToALayerBehind = false;
    }
    else
    {
        // Define Picture
        QPixmap Button_Move_To_A_Layer_Behind_pm(":/images/images/Button_Move_To_A_Layer_Behind_checked.png");
        // Set Icon on Button
        ui->Button_Move_To_A_Layer_Behind->setIcon(Button_Move_To_A_Layer_Behind_pm);
        // Correct Icon Size
        ui->Button_Move_To_A_Layer_Behind->setIconSize(Button_Move_To_A_Layer_Behind_pm.rect().size());

        // Toggle other Buttons and set them false and unchecked
        m_MoveToALayerInFront = true;
        LED_Cube_Main::on_Button_Move_To_A_Layer_InFront_clicked();  // -> m_MoveToALayerInFront will be flase and the Button gets unchecked

        m_Rotate_Left_View = true;
        LED_Cube_Main::on_Button_Rotate_Left_View_clicked();  // -> m_Center_View will be flase and the Button gets unchecked

        m_Rotate_Right_View = true;
        LED_Cube_Main::on_Button_Rotate_Right_View_clicked();  // -> m_Rotate_View will be flase and the Button gets unchecked

        // set m_MoveToALayerBehindorInFront Flag true
        m_MoveToALayerBehindorInFront = true;
        // set m_WhichDirectionToMove Flag false
        m_WhichDirectionToMove = true;
        // set m_MoveToALayerBehind toggle to true
        m_MoveToALayerBehind = true;
    }
    LED_Cube_Main::ResetRotationVariables();
}
void LED_Cube_Main::on_Button_Move_To_A_Layer_InFront_clicked()
{
    if(m_MoveToALayerInFront)
    {
        // Define Picture
        QPixmap Button_Move_To_A_Layer_InFront_pm(":/images/images/Button_Move_To_A_Layer_InFront_unchecked.png");
        // Set Icon on Button
        ui->Button_Move_To_A_Layer_InFront->setIcon(Button_Move_To_A_Layer_InFront_pm);
        // Correct Icon Size
        ui->Button_Move_To_A_Layer_InFront->setIconSize(Button_Move_To_A_Layer_InFront_pm.rect().size());

        // set m_MoveToALayerBehindorInFront Flag false
        m_MoveToALayerBehindorInFront = false;

        // set m_MoveToALayerInFront toggle to false
        m_MoveToALayerInFront = false;
    }
    else
    {
        // Define Picture
        QPixmap Button_Move_To_A_Layer_InFront_pm(":/images/images/Button_Move_To_A_Layer_InFront_checked.png");
        // Set Icon on Button
        ui->Button_Move_To_A_Layer_InFront->setIcon(Button_Move_To_A_Layer_InFront_pm);
        // Correct Icon Size
        ui->Button_Move_To_A_Layer_InFront->setIconSize(Button_Move_To_A_Layer_InFront_pm.rect().size());

        // Toggle other Buttons and set them false and unchecked
        m_MoveToALayerBehind = true;
        LED_Cube_Main::on_Button_Move_To_A_Layer_Behind_clicked();  // -> m_MoveToALayerBehind will be flase and the Button gets unchecked

        m_Rotate_Left_View = true;
        LED_Cube_Main::on_Button_Rotate_Left_View_clicked();  // -> m_Center_View will be flase and the Button gets unchecked

        m_Rotate_Right_View = true;
        LED_Cube_Main::on_Button_Rotate_Right_View_clicked();  // -> m_Rotate_View will be flase and the Button gets unchecked

        // set m_MoveToALayerBehindorInFront Flag true
        m_MoveToALayerBehindorInFront = true;
        // set m_WhichDirectionToMove Flag true
        m_WhichDirectionToMove = false;
        // set m_MoveToALayerInFront toggle to true
        m_MoveToALayerInFront = true;
    }
    LED_Cube_Main::ResetRotationVariables();
}
void LED_Cube_Main::on_Button_Mirror_View_clicked()
{
    // if the User has choosen mirror view every draw he does is also made on the mirrored side (Top will draw Bottom, Right will draw left ...)
    if(m_Mirror_View)
    {
        // Define Picture
        QPixmap Button_Mirror_View_pm(":/images/images/Button_Mirror_View_unchecked.png");
        // Set Icon on Button
        ui->Button_Mirror_View->setIcon(Button_Mirror_View_pm);
        // Correct Icon Size
        ui->Button_Mirror_View->setIconSize(Button_Mirror_View_pm.rect().size());

        // set m_Mirror_View toggle to false
        m_Mirror_View = false;
    }
    else
    {
        // Define Picture
        QPixmap Button_Mirror_View_pm(":/images/images/Button_Mirror_View_checked.png");
        // Set Icon on Button
        ui->Button_Mirror_View->setIcon(Button_Mirror_View_pm);
        // Correct Icon Size
        ui->Button_Mirror_View->setIconSize(Button_Mirror_View_pm.rect().size());

        // set m_Mirror_View toggle to true
        m_Mirror_View = true;
    }
}
void LED_Cube_Main::on_Button_Rotate_Left_View_clicked()
{
    if(m_Rotate_Left_View)
    {
        // Define Picture
        QPixmap Button_Rotate_Left_View_pm(":/images/images/Button_Rotate_Left_View_unchecked.png");
        // Set Icon on Button
        ui->Button_Rotate_Left_View->setIcon(Button_Rotate_Left_View_pm);
        // Correct Icon Size
        ui->Button_Rotate_Left_View->setIconSize(Button_Rotate_Left_View_pm.rect().size());

        // set m_Rotate_Left_or_Right Flag false
        m_Rotate_Left_or_Right = false;

        // set m_Rotate_Left_View toggle to false
        m_Rotate_Left_View = false;

        LED_Cube_Main::ResetRotationVariables();
    }
    else
    {
        // Define Picture
        QPixmap Button_Rotate_Left_View_pm(":/images/images/Button_Rotate_Left_View_checked.png");
        // Set Icon on Button
        ui->Button_Rotate_Left_View->setIcon(Button_Rotate_Left_View_pm);
        // Correct Icon Size
        ui->Button_Rotate_Left_View->setIconSize(Button_Rotate_Left_View_pm.rect().size());

        // Toggle other Buttons and set them false and unchecked
        m_toggledAcceptforNextPart = true;
        LED_Cube_Main::on_Button_Check_Accept_Part_for_Next_Part_clicked(); // -> m_toggledAcceptforNextPart will be flase and the Button gets unchecked

        m_MoveToALayerBehind = true;
        LED_Cube_Main::on_Button_Move_To_A_Layer_Behind_clicked();  // -> m_MoveToALayerBehind will be flase and the Button gets unchecked

        m_MoveToALayerInFront = true;
        LED_Cube_Main::on_Button_Move_To_A_Layer_InFront_clicked();  // -> m_MoveToALayerInFront will be flase and the Button gets unchecked

        m_Rotate_Right_View = true;
        LED_Cube_Main::on_Button_Rotate_Right_View_clicked();  // -> m_Rotate_Right_View will be flase and the Button gets unchecked


        // set m_Rotate_Left_or_Right Flag true
        m_Rotate_Left_or_Right = true;

        // set m_WhichDirectionToRotate Flag true
        m_WhichDirectionToRotate= false;

        // set m_Rotate_Left_View toggle to true
        m_Rotate_Left_View = true;
    }
}
void LED_Cube_Main::on_Button_Rotate_Right_View_clicked()
{
    if(m_Rotate_Right_View)
    {
        // Define Picture
        QPixmap Button_Rotate_Right_View_pm(":/images/images/Button_Rotate_Right_View_unchecked.png");
        // Set Icon on Button
        ui->Button_Rotate_Right_View->setIcon(Button_Rotate_Right_View_pm);
        // Correct Icon Size
        ui->Button_Rotate_Right_View->setIconSize(Button_Rotate_Right_View_pm.rect().size());

        // set m_Rotate_Left_or_Right Flag false
        m_Rotate_Left_or_Right = false;

        // set m_Rotate_Right_View toggle to false
        m_Rotate_Right_View = false;

        LED_Cube_Main::ResetRotationVariables();
    }
    else
    {
        // Define Picture
        QPixmap Button_Rotate_Right_View_pm(":/images/images/Button_Rotate_Right_View_checked.png");
        // Set Icon on Button
        ui->Button_Rotate_Right_View->setIcon(Button_Rotate_Right_View_pm);
        // Correct Icon Size
        ui->Button_Rotate_Right_View->setIconSize(Button_Rotate_Right_View_pm.rect().size());

        // Toggle other Buttons and set them false and unchecked
        m_toggledAcceptforNextPart = true;
        LED_Cube_Main::on_Button_Check_Accept_Part_for_Next_Part_clicked(); // -> m_toggledAcceptforNextPart will be flase and the Button gets unchecked

        m_MoveToALayerBehind = true;
        LED_Cube_Main::on_Button_Move_To_A_Layer_Behind_clicked();  // -> m_MoveToALayerBehind will be flase and the Button gets unchecked

        m_MoveToALayerInFront = true;
        LED_Cube_Main::on_Button_Move_To_A_Layer_InFront_clicked();  // -> m_MoveToALayerInFront will be flase and the Button gets unchecked

        m_Rotate_Left_View = true;
        LED_Cube_Main::on_Button_Rotate_Left_View_clicked(); // -> m_Rotate_View will be flase and the Button gets unchecked

        // set m_Rotate_Left_or_Right Flag true
        m_Rotate_Left_or_Right = true;

        // set m_WhichDirectionToRotate Flag true
        m_WhichDirectionToRotate= true;

        // set m_Rotate_Right_View toggle to true
        m_Rotate_Right_View = true;
    }
}
void LED_Cube_Main::on_Button_Fill_Clicked_View_clicked()
{
    // Which View is clicked
    if(m_FrontViewClicked)
    {
        int x, y, z = m_iChoosenLevel;
        // fill activated level
        for(x = 0; x < 8; x++)
        {
            for(y = 0; y < 8; y++)
            {
               LED_Selection_Array[x][y][z] = true;
               LED_Selection_Array_Program[x][y][z][m_iProgrampartValue] = true;
            }
        }

        // LED View Output
        LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
        LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
        LED_Cube_Main::PutSelectedLEDsOnScene();
        LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();
    }
    else if(m_TopViewClicked)
    {
        int x, y = m_iChoosenLevel_Top, z;
        // fill activated level
        for(x = 0; x < 8; x++)
        {
            for(z = 0; z < 8; z++)
            {
               LED_Selection_Array[x][y][z] = true;
               LED_Selection_Array_Program[x][y][z][m_iProgrampartValue] = true;
            }
        }

        // LED View Output
        LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
        LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
        LED_Cube_Main::PutSelectedLEDsOnScene();
        LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();

    }
    else if(m_RightViewClicked)
    {
        int x = m_iChoosenLevel_Right, y, z;
        // fill activated level
        for(y = 0; y < 8; y++)
        {
            for(z = 0; z < 8; z++)
            {
               LED_Selection_Array[x][y][z] = true;
               LED_Selection_Array_Program[x][y][z][m_iProgrampartValue] = true;
            }
        }

        // LED View Output
        LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
        LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
        LED_Cube_Main::PutSelectedLEDsOnScene();
        LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();
    }
    // if no flag is singed, do nothing
}
void LED_Cube_Main::on_Button_Unfill_Clicked_View_clicked()
{
    // Which View is clicked
    if(m_FrontViewClicked)
    {
        int x, y, z = m_iChoosenLevel;
        // fill activated level
        for(x = 0; x < 8; x++)
        {
            for(y = 0; y < 8; y++)
            {
               LED_Selection_Array[x][y][z] = false;
               LED_Selection_Array_Program[x][y][z][m_iProgrampartValue] = false;
            }
        }

        // LED View Output
        LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
        LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
        LED_Cube_Main::PutSelectedLEDsOnScene();
        LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();
    }
    else if(m_TopViewClicked)
    {
        int x, y = m_iChoosenLevel_Top, z;
        // fill activated level
        for(x = 0; x < 8; x++)
        {
            for(z = 0; z < 8; z++)
            {
               LED_Selection_Array[x][y][z] = false;
               LED_Selection_Array_Program[x][y][z][m_iProgrampartValue] = false;
            }
        }

        // LED View Output
        LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
        LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
        LED_Cube_Main::PutSelectedLEDsOnScene();
        LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();

    }
    else if(m_RightViewClicked)
    {
        int x = m_iChoosenLevel_Right, y, z;
        // fill activated level
        for(y = 0; y < 8; y++)
        {
            for(z = 0; z < 8; z++)
            {
               LED_Selection_Array[x][y][z] = false;
               LED_Selection_Array_Program[x][y][z][m_iProgrampartValue] = false;
            }
        }

        // LED View Output
        LED_Cube_Main::PutSelectedLEDsOn_Right_Scene();
        LED_Cube_Main::PutSelectedLEDsOn_Top_Scene();
        LED_Cube_Main::PutSelectedLEDsOnScene();
        LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();
    }
    // if no flag is singed, do nothing
}
void LED_Cube_Main::on_Button_KabinettRight3DView_clicked()
{
    // Set 3DView Option Flags
    m_KabinettRight3DView = true;
    m_KabinettLeft3DView = false;
    m_IsometricRight3DView = false;
    m_IsometricLeft3DView = false;

    ui->Button_KabinettRight3DView->setDisabled(true);
    ui->Button_KabinettLeft3DView->setEnabled(true);
    ui->Button_IsometricLeft3DView->setEnabled(true);
    ui->Button_IsometricRight3DView->setEnabled(true);

    // Draw new 3DView
    LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();
}
void LED_Cube_Main::on_Button_KabinettLeft3DView_clicked()
{
    // Set 3DView Option Flags
    m_KabinettRight3DView = false;
    m_KabinettLeft3DView = true;
    m_IsometricRight3DView = false;
    m_IsometricLeft3DView = false;

    ui->Button_KabinettRight3DView->setEnabled(true);
    ui->Button_KabinettLeft3DView->setDisabled(true);
    ui->Button_IsometricLeft3DView->setEnabled(true);
    ui->Button_IsometricRight3DView->setEnabled(true);

    // Draw new 3DView
    LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();
}
void LED_Cube_Main::on_Button_IsometricRight3DView_clicked()
{
    // Set 3DView Option Flags
    m_KabinettRight3DView = false;
    m_KabinettLeft3DView = false;
    m_IsometricRight3DView = true;
    m_IsometricLeft3DView = false;

    ui->Button_KabinettRight3DView->setEnabled(true);
    ui->Button_KabinettLeft3DView->setEnabled(true);
    ui->Button_IsometricLeft3DView->setEnabled(true);
    ui->Button_IsometricRight3DView->setDisabled(true);

    // Draw new 3DView
    LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();
}
void LED_Cube_Main::on_Button_IsometricLeft3DView_clicked()
{
    // Set 3DView Option Flags
    m_KabinettRight3DView = false;
    m_KabinettLeft3DView = false;
    m_IsometricRight3DView = false;
    m_IsometricLeft3DView = true;

    ui->Button_KabinettRight3DView->setEnabled(true);
    ui->Button_KabinettLeft3DView->setEnabled(true);
    ui->Button_IsometricLeft3DView->setDisabled(true);
    ui->Button_IsometricRight3DView->setEnabled(true);


    // Draw new 3DView
    LED_Cube_Main::PutSelectedLEDsOn_3D_Scene();
}
void LED_Cube_Main::on_Button_Select_Front_View_clicked()
{
    // Set View Flags
    m_FrontViewClicked = true;
    m_TopViewClicked = false;
    m_RightViewClicked = false;

    // Disable Button_Select_Front_View
    ui->Button_Select_Front_View->setDisabled(true);
    // Enable Button_Select_Right_View and Button_Select_Top_View
    ui->Button_Select_Right_View->setEnabled(true);
    ui->Button_Select_Top_View->setEnabled(true);
}
void LED_Cube_Main::on_Button_Select_Top_View_clicked()
{
    // Set View Flags
    m_FrontViewClicked = false;
    m_TopViewClicked = true;
    m_RightViewClicked = false;

    // Disable Button_Select_Top_View
    ui->Button_Select_Top_View->setDisabled(true);
    // Enable Button_Select_Right_View and Button_Select_Front_View
    ui->Button_Select_Right_View->setEnabled(true);
    ui->Button_Select_Front_View->setEnabled(true);
}
void LED_Cube_Main::on_Button_Select_Right_View_clicked()
{
    // Set View Flags
    m_FrontViewClicked = false;
    m_TopViewClicked = false;
    m_RightViewClicked = true;

    // Disable Button_Select_Right_View
    ui->Button_Select_Right_View->setDisabled(true);
    // Enable Button_Select_Top_View and Button_Select_Front_View
    ui->Button_Select_Top_View->setEnabled(true);
    ui->Button_Select_Front_View->setEnabled(true);
}
void LED_Cube_Main::on_Button_Holdtime_clicked()
{
    // Hide Buttons
    ui->Button_Load->setHidden(true);
    ui->Button_Save->setHidden(true);
    ui->Button_New->setHidden(true);
    ui->Button_Holdtime->setHidden(true);
    ui->Button_Back->setHidden(true);
    ui->Button_Delete_All->setHidden(true);
    ui->Button_Back->setHidden(true);
    ui->Current_Seconds_label->setHidden(true);

    // Disable Views and Buttons
    ui->LED_Selection_View->setDisabled(true);
    ui->Button_Fill_Clicked_View->setDisabled(true);
    ui->Button_Unfill_Clicked_View->setDisabled(true);
    ui->Button_Check_Accept_Part_for_Next_Part->setDisabled(true);
    ui->Button_Move_To_A_Layer_Behind->setDisabled(true);
    ui->LED_Selection_Top_View->setDisabled(true);
    ui->LED_Selection_Right_View->setDisabled(true);

    // Show SecondsString edit area
    ui->Button_key_0->show();
    ui->Button_key_1->show();
    ui->Button_key_2->show();
    ui->Button_key_3->show();
    ui->Button_key_4->show();
    ui->Button_key_5->show();
    ui->Button_key_6->show();
    ui->Button_key_7->show();
    ui->Button_key_8->show();
    ui->Button_key_9->show();
    ui->Button_Return->show();
    ui->Button_Accept_SecondsString->show();
    ui->SecondsString_label->show();
    ui->Button_Seconds->show();
    ui->Button_MilliSeconds->show();
    ui->Button_Abort_SecondSelection->show();

    // set Default
    m_SecondsString = "";
    m_iSecondsStringlength = 0;
    LED_Cube_Main::SetNumbersOnDisplay();
}
void LED_Cube_Main::on_Button_key_1_clicked()
{
    m_SecondsString = m_SecondsString + "1";
    m_iSecondsStringlength++;
    // Display the new SecondsString
    LED_Cube_Main::SetNumbersOnDisplay();
}
void LED_Cube_Main::on_Button_key_2_clicked()
{
    m_SecondsString = m_SecondsString + "2";
    m_iSecondsStringlength++;
    // Display the new SecondsString
    LED_Cube_Main::SetNumbersOnDisplay();
}
void LED_Cube_Main::on_Button_key_3_clicked()
{
    m_SecondsString = m_SecondsString + "3";
    m_iSecondsStringlength++;
    // Display the new SecondsString
    LED_Cube_Main::SetNumbersOnDisplay();
}
void LED_Cube_Main::on_Button_key_4_clicked()
{
    m_SecondsString = m_SecondsString + "4";
    m_iSecondsStringlength++;
    // Display the new SecondsString
    LED_Cube_Main::SetNumbersOnDisplay();

}
void LED_Cube_Main::on_Button_key_5_clicked()
{
    m_SecondsString = m_SecondsString + "5";
    m_iSecondsStringlength++;
    // Display the new SecondsString
    LED_Cube_Main::SetNumbersOnDisplay();
}
void LED_Cube_Main::on_Button_key_6_clicked()
{
    m_SecondsString = m_SecondsString + "6";
    m_iSecondsStringlength++;
    // Display the new SecondsString
    LED_Cube_Main::SetNumbersOnDisplay();
}
void LED_Cube_Main::on_Button_key_7_clicked()
{
    m_SecondsString = m_SecondsString + "7";
    m_iSecondsStringlength++;
    // Display the new SecondsString
    LED_Cube_Main::SetNumbersOnDisplay();
}
void LED_Cube_Main::on_Button_key_8_clicked()
{
    m_SecondsString = m_SecondsString + "8";
    m_iSecondsStringlength++;
    // Display the new SecondsString
    LED_Cube_Main::SetNumbersOnDisplay();
}
void LED_Cube_Main::on_Button_key_9_clicked()
{
    m_SecondsString = m_SecondsString + "9";
    m_iSecondsStringlength++;
    // Display the new SecondsString
    LED_Cube_Main::SetNumbersOnDisplay();
}
void LED_Cube_Main::on_Button_key_0_clicked()
{
    m_SecondsString = m_SecondsString + "0";
    m_iSecondsStringlength++;
    // Display the new SecondsString
    LED_Cube_Main::SetNumbersOnDisplay();

}
void LED_Cube_Main::on_Button_Return_clicked()
{
    if(m_iSecondsStringlength > 0)
    {
        m_iSecondsStringlength--;
        m_SecondsString.remove(m_iSecondsStringlength, 1);

        // Output of NumberString on Display
        LED_Cube_Main::SetNumbersOnDisplay();
    }
}
void LED_Cube_Main::on_Button_Accept_SecondsString_clicked()
{
    // Get User-Second-Input
    if(m_Seconds_toggle)
    {
        ui->Current_Seconds_label->setText(m_SecondsString + " s");
        m_iSeconds = m_SecondsString.toInt()*1000;        
    }
    else if(m_MilliSeconds_toggle)
    {
        m_iSeconds = m_SecondsString.toInt();
        ui->Current_Seconds_label->setText(QString("%2").arg(m_iSeconds) + " ms");
    }
    if(m_iSeconds == 0)
    {
        // no Valid User interaction
        m_iSecondsStringlength = 0;
        m_SecondsString = tr("nicht gültig");
        LED_Cube_Main::SetNumbersOnDisplay();
        m_SecondsString = "";

        // Stop this Function User made a wrong input
        return;
    }
    else
    {
        // Show Buttons
        ui->Button_Load->show();
        ui->Button_Save->show();
        ui->Button_New->show();
        ui->Button_Holdtime->show();
        ui->Button_Back->show();
        ui->Button_Delete_All->show();
        ui->Button_Back->show();
        // Show Current_Seconds_label
        ui->Current_Seconds_label->show();

        // Enable Views and Buttons
        ui->LED_Selection_View->setEnabled(true);
        ui->Button_Fill_Clicked_View->setEnabled(true);
        ui->Button_Unfill_Clicked_View->setEnabled(true);
        ui->Button_Check_Accept_Part_for_Next_Part->setEnabled(true);;
        ui->Button_Move_To_A_Layer_Behind->setEnabled(true);
        ui->LED_Selection_Top_View->setEnabled(true);
        ui->LED_Selection_Right_View->setEnabled(true);

        // Hide SecondsString edit area
        ui->Button_key_0->setHidden(true);
        ui->Button_key_1->setHidden(true);
        ui->Button_key_2->setHidden(true);
        ui->Button_key_3->setHidden(true);
        ui->Button_key_4->setHidden(true);
        ui->Button_key_5->setHidden(true);
        ui->Button_key_6->setHidden(true);
        ui->Button_key_7->setHidden(true);
        ui->Button_key_8->setHidden(true);
        ui->Button_key_9->setHidden(true);
        ui->Button_Return->setHidden(true);
        ui->Button_Accept_SecondsString->setHidden(true);
        ui->SecondsString_label->setHidden(true);
        ui->Button_Seconds->setHidden(true);
        ui->Button_MilliSeconds->setHidden(true);
        ui->Button_Abort_SecondSelection->setHidden(true);
        LED_Cube_Main::SaveSecondsforChoosenParts();
        // Draw Rect Edge on the first choosen Programpart
        int PosY = m_iSelectedProgramParts[0]/4;
        int PosX = m_iSelectedProgramParts[0] - PosY*4;
        LED_Cube_Main::DrawRectEdge(PosX, PosY);
    }
}
void LED_Cube_Main::on_Button_Seconds_clicked()
{
    m_Seconds_toggle = true;
    m_MilliSeconds_toggle = false;
    ui->Button_MilliSeconds->setEnabled(true);
    ui->Button_Seconds->setDisabled(true);
}
void LED_Cube_Main::on_Button_MilliSeconds_clicked()
{
    m_Seconds_toggle = false;
    m_MilliSeconds_toggle = true;
    ui->Button_MilliSeconds->setDisabled(true);
    ui->Button_Seconds->setEnabled(true);
}
void LED_Cube_Main::on_Button_Start_From_Part_clicked()
{
    if(m_Start_From_Part_Toggle)
    {
        // Define Picture
        QPixmap Button_Start_From_Part_pm(":/images/images/Button_Start_From_Part_unchecked.png");
        // Define Icon
        QIcon Button_Start_From_Part_Icon(Button_Start_From_Part_pm);
        // Set Icon on Button
        ui->Button_Start_From_Part->setIcon(Button_Start_From_Part_Icon);
        // Correct Icon Size
        ui->Button_Start_From_Part->setIconSize(Button_Start_From_Part_pm.rect().size());

        m_Start_From_Part_Toggle = false;
    }
    else
    {
        // Define Picture
        QPixmap Button_Start_From_Part_pm(":/images/images/Button_Start_From_Part_checked.png");
        // Define Icon
        QIcon Button_Start_From_Part_Icon(Button_Start_From_Part_pm);
        // Set Icon on Button
        ui->Button_Start_From_Part->setIcon(Button_Start_From_Part_Icon);
        // Correct Icon Size
        ui->Button_Start_From_Part->setIconSize(Button_Start_From_Part_pm.rect().size());

        // set m_toggledAcceptforNextPart Flag true
        m_Start_From_Part_Toggle = true;
    }
}
void LED_Cube_Main::on_Button_Abort_SecondSelection_clicked()
{
    // Show Buttons
    ui->Button_Load->show();
    ui->Button_Save->show();
    ui->Button_New->show();
    ui->Button_Holdtime->show();
    ui->Button_Back->show();
    ui->Button_Delete_All->show();
    ui->Button_Back->show();
    // Show Current_Seconds_label
    ui->Current_Seconds_label->show();

    // Enable Views and Buttons
    ui->LED_Selection_View->setEnabled(true);
    ui->Button_Fill_Clicked_View->setEnabled(true);
    ui->Button_Unfill_Clicked_View->setEnabled(true);
    ui->Button_Check_Accept_Part_for_Next_Part->setEnabled(true);;
    ui->Button_Move_To_A_Layer_Behind->setEnabled(true);
    ui->LED_Selection_Top_View->setEnabled(true);
    ui->LED_Selection_Right_View->setEnabled(true);

    // Hide SecondsString edit area
    ui->Button_key_0->setHidden(true);
    ui->Button_key_1->setHidden(true);
    ui->Button_key_2->setHidden(true);
    ui->Button_key_3->setHidden(true);
    ui->Button_key_4->setHidden(true);
    ui->Button_key_5->setHidden(true);
    ui->Button_key_6->setHidden(true);
    ui->Button_key_7->setHidden(true);
    ui->Button_key_8->setHidden(true);
    ui->Button_key_9->setHidden(true);
    ui->Button_Return->setHidden(true);
    ui->Button_Accept_SecondsString->setHidden(true);
    ui->SecondsString_label->setHidden(true);
    ui->Button_Seconds->setHidden(true);
    ui->Button_MilliSeconds->setHidden(true);
    ui->Button_Abort_SecondSelection->setHidden(true);

    // if m_iSeconds is still not valid (after Escape Sequenz for Example) set it as Default
    if(m_iSeconds == 0)
    {
        m_iSeconds = 100;
        ui->Current_Seconds_label->setText(QString("%2").arg(m_iSeconds) + " ms");
    }
}
// Button Funktions: End
