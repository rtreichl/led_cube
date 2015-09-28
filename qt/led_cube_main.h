#ifndef LED_CUBE_MAIN_H
#define LED_CUBE_MAIN_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QtAlgorithms>

// Project classes
#include "led_cube_project_classes.h"

// Loading Dialog
#include "loading.h"

#include <QMouseEvent>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QScrollBar>
#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QFileDialog>
#include <vector>

// Defines
// Defines for LED_Selection_Scene
#define LED_Selection_Scene_StartX 0
#define LED_Selection_Scene_StartY 0
#define LED_Selection_Scene_Size 360
// Defines for LED_Selection_Top_Scene
#define LED_Selection_Top_Scene_StartX 0
#define LED_Selection_Top_Scene_StartY 0
#define LED_Selection_Top_Scene_Size 152
// Defines for LED_Selection_Right_Scene
#define LED_Selection_Right_Scene_StartX 0
#define LED_Selection_Right_Scene_StartY 0
#define LED_Selection_Right_Scene_Size 152
// Defines for LED_Cube_3D_Scene
#define LED_Cube_3D_Scene_StartX 0
#define LED_Cube_3D_Scene_StartY 0
#define LED_Cube_3D_Scene_SizeX 410
#define LED_Cube_3D_Scene_SizeY 445
// Defines for ProgramNumber_Scene
#define ProgramNumber_Scene_StartX 3
#define ProgramNumber_Scene_StartY 2
#define ProgramNumber_Scene_SizeX 341
#define ProgramNumber_Scene_SizeY 173

#define SizeOfCube 8


namespace Ui {
class LED_Cube_Main;
}

class LED_Cube_Main : public QDialog
{
    Q_OBJECT

public:
    explicit LED_Cube_Main(QWidget *parent = 0);
    ~LED_Cube_Main();

    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);

    // Key handle
    void keyPressEvent(QKeyEvent* event);

    // Memberfunctions
    void PutSelectedLEDsOnScene();
    void PutSelectedLEDsOn_Top_Scene();
    void PutSelectedLEDsOn_Right_Scene();
    void PutSelectedLEDsOn_3D_Scene();
    void LocateChoosenLEDPressed();
    void LocateChoosenLEDHold();
    void LocateChoosenLEDPressed_Top();
    void LocateChoosenLEDHold_Top();
    void LocateChoosenLEDPressed_Right();
    void LocateChoosenLEDHold_Right();
    void SaveSecondsforChoosenParts();
    void ResetLEDScenes();                                          // Reset the scenes
    void SetChoosenLeveldisabled();                                 // disable Levels of the Front Scene
    void SetChoosen_Top_Leveldisabled();                            // disable Levels of the Top Scene
    void SetChoosen_Right_Leveldisabled();                          // disable Levels of the Right Scene    
    void CreateNewProgramSquare(int ProgramPartPositionNumber);     // Locates the X/Y Position and draws a new gray Square at that position (with text in relation to the PartNumber and Second information)
    void ResetLED_Selection_Array();
    void PlayLEDPorgram();
    void PlayNextElement();
    void PlayLoopNextElement();
    void EndProgram(int iCase);
    void DeleteAProgramPart(int ProgramPartPosition);
    void DisablewhilePlay();
    void EnableafterPlay();
    void RotationLogic();                                           // Generates the Step logic to get a Rotation
    void ResetRotationVariables();
    void DrawRectEdge(int PosX, int PosY);                          // Draws an Edge on a ProgramPart in the Programview (Softwareactivated)
    void DrawRectEdgeAfterUserClicked(int PosX, int PosY);          // Draws an Edge on the Clicked ProgramPart in the Programview (Useractivated)
    void DeleteOldRectEdges();                                      // Deletes all "old" Rect Edges
    void DeleteOldSelectionRectangle();                             // Deletes the old Selection Rectangle    
    void DisplayTheChoosenProgrampartOnTheScene(int PosX, int PosY);
    void DisplayTheChoosenProgrampartOnTheSceneAfterUserClicked(int PosX, int PosY);
    void SetProgramNumberSceneRectandSliderPos(int ProgramPartPositionNumber);
    void KeyDeletePressed();
    void SetNumbersOnDisplay();    
    void DisableMainDialog();
    void EnableMainDialog();
    void SaveLogicOnArray(bool ProgramPartLogic[8][8][8]);          // Dynamic allocation of memory to store

private slots:
    // Custom Slots
    void Recive_LED_Selection_Scene_Pressed_Pos(QPointF ScenePosition); // Recives the Pressed MousePosition on the Scene
    void Recive_LED_Selection_Scene_Hold_Pos(QPointF ScenePosition);    // Recives the Hold MousePosition on the Scene
    void Recive_LED_Selection_Top_Scene_Pressed_Pos(QPointF LED_Selection_Top_Scene_Position);  // Recives the Pressed MousePosition on the Scene
    void Recive_LED_Selection_Top_Scene_Hold_Pos(QPointF LED_Selection_Top_Scene_Position);     // Recives the Hold MousePosition on the Scene
    void Recive_LED_Selection_Right_Scene_Pressed_Pos(QPointF LED_Selection_Right_Scene_Position);  // Recives the Pressed MousePosition on the Scene
    void Recive_LED_Selection_Right_Scene_Hold_Pos(QPointF LED_Selection_Right_Scene_Position); // Recives the Hold MousePosition on the Scene
    void Recive_ProgramNumber_Scene_Pos(QPointF ScenePosition);
    void DrawSelectionRectangle(QPointF ScenePosition);
    void ProgramNumber_Scene_Mouse_Released();

    // Slider Slot
    void Recive_Slider_SpeedRegulation_valueChanged(int ChangedValue);

    // Timer Slots
    void ClockCounterPlay();
    void ClockCounterPlayLoop();

    // Loading Dialog Slot
    void Recive_Loading_Option(bool Loading_Option);
    void DialogClosed();

    // Button slots
    void on_Button_Save_clicked();
    void on_Button_New_clicked();
    void on_Button_Back_clicked();
    void on_Button_Delete_All_clicked();
    void on_Button_Level_1_clicked();
    void on_Button_Level_2_clicked();
    void on_Button_Level_3_clicked();
    void on_Button_Level_4_clicked();
    void on_Button_Level_5_clicked();
    void on_Button_Level_6_clicked();
    void on_Button_Level_7_clicked();
    void on_Button_Level_8_clicked();
    void on_Button_Top_View_clicked();
    void on_Button_Right_View_clicked();
    void on_Button_Top_Level_1_clicked();
    void on_Button_Top_Level_2_clicked();
    void on_Button_Top_Level_3_clicked();
    void on_Button_Top_Level_4_clicked();
    void on_Button_Top_Level_5_clicked();
    void on_Button_Top_Level_6_clicked();
    void on_Button_Top_Level_7_clicked();
    void on_Button_Top_Level_8_clicked();
    void on_Button_Right_Level_1_clicked();
    void on_Button_Right_Level_2_clicked();
    void on_Button_Right_Level_3_clicked();
    void on_Button_Right_Level_4_clicked();
    void on_Button_Right_Level_5_clicked();
    void on_Button_Right_Level_6_clicked();
    void on_Button_Right_Level_7_clicked();
    void on_Button_Right_Level_8_clicked();   
    void on_Button_Play_clicked();
    void on_Button_PlayLoop_clicked();
    void on_Button_Check_Accept_Part_for_Next_Part_clicked();
    void on_Button_Move_To_A_Layer_Behind_clicked();
    void on_Button_Move_To_A_Layer_InFront_clicked();
    void on_Button_Mirror_View_clicked();
    void on_Button_Rotate_Right_View_clicked();
    void on_Button_Rotate_Left_View_clicked();
    void on_Button_Fill_Clicked_View_clicked();
    void on_Button_Unfill_Clicked_View_clicked();
    void on_Button_KabinettRight3DView_clicked();
    void on_Button_KabinettLeft3DView_clicked();
    void on_Button_IsometricRight3DView_clicked();
    void on_Button_IsometricLeft3DView_clicked();
    void on_Button_Select_Front_View_clicked();
    void on_Button_Select_Top_View_clicked();
    void on_Button_Select_Right_View_clicked();
    void on_Button_Load_clicked();
    void on_Button_Holdtime_clicked();
    void on_Button_key_1_clicked();
    void on_Button_key_2_clicked();
    void on_Button_key_3_clicked();
    void on_Button_key_4_clicked();
    void on_Button_key_5_clicked();
    void on_Button_key_6_clicked();
    void on_Button_key_7_clicked();
    void on_Button_key_8_clicked();
    void on_Button_key_9_clicked();
    void on_Button_key_0_clicked();
    void on_Button_Return_clicked();
    void on_Button_Accept_SecondsString_clicked();
    void on_Button_Seconds_clicked();
    void on_Button_MilliSeconds_clicked();
    void on_Button_Start_From_Part_clicked();
    void on_Button_Abort_SecondSelection_clicked();

private:
    Ui::LED_Cube_Main *ui;

    // Membervariables
    bool    LED_Selection_Array[8][8][8];                   // includes current Programpart shown on the Scene
    bool    LED_Selection_Array_Program[8][8][8][1024];     // includes all Programparts made by the User
    bool    m_New_Prog_Part;                                // control Variable for a Buttonclick (Toggle), used if the Button new is clicked to interact
    bool    m_Top_View_toggle;                              // control Variable for a Buttonclick (Toggle)
    bool    m_Right_View_toggle;                            // control Variable for a Buttonclick (Toggle)
    bool    m_toggledPlay_Button;                           // control Variable for a Buttonclick (Toggle)
    bool    m_toggledPlayLoop_Button;                       // control Variable for a Buttonclick (Toggle)
    bool    m_toggledAcceptforNextPart;
    bool    m_MoveToALayerBehind;
    bool    m_MoveToALayerInFront;
    bool    m_MoveToALayerBehindorInFront;
    bool    m_Mirror_View;
    bool    m_Rotate_Left_View;
    bool    m_Rotate_Right_View;
    bool    m_Rotate_Left_or_Right;
    bool    m_WhichDirectionToRotate;
    bool    m_WhichDirectionToMove;                         // Defines which Direction should it should be moved false is out of the View true is into the view
    bool    m_validProgramPartFlag;                         // if the User Clicked on a Programpart this flag is right(the Programpart has a border when clicked or choosen)
    bool    m_Deleted;
    bool    m_DisabledwhilePlayFlag;
    bool    m_FrontViewClicked;
    bool    m_TopViewClicked;
    bool    m_RightViewClicked;
    bool    m_KabinettRight3DView;
    bool    m_KabinettLeft3DView;
    bool    m_IsometricRight3DView;
    bool    m_IsometricLeft3DView;
    bool    m_SelectionRectangleIsDrawn;
    bool    m_ProgramNumber_Scene_Clicked;
    bool    m_ProgramNumber_Scene_Clicked_Released;
    bool    m_MilliSeconds_toggle;
    bool    m_Seconds_toggle;
    bool    m_no_Existing_Programpart;
    bool    m_Start_From_Part_Toggle;
    bool    m_LoadingDialog_Existing;
    int     m_iChoosenProgramParts[1024];                   // The Programparts, the user choose with the Selectionsquare
    int     m_iSliderPosition;                              // SliderPosition of a Valid ProgramPart
    int     m_iChoosenLevel;                                // Which level is activated
    int     m_iChoosenLevel_Top;                            // Which Top-View level is activated
    int     m_iChoosenLevel_Right;                          // Which Right-View level is activated
    int     m_iChoosenSecondsProgram[1024];                 // includes all choosen Second Options to each Programpart    
    int     m_iSeconds;                                     // the choosen seconds for the Programpart (ms)
    bool    m_mousePressed;                                 // true if mouse is pressed (needed for different Slots) look @ MouseEventScene or Recive_LED_Selection_Scene_Pos
    bool    m_mousePressed_Top;                             // true if mouse is pressed (needed for different Slots) look @ MouseEventScene or Recive_LED_Selection_Top_Scene_Pos
    bool    m_mousePressed_Right;                           // true if mouse is pressed (needed for different Slots) look @ MouseEventScene or Recive_LED_Selection_Top_Scene_Pos
    int     PressedMouseValueX;                             // Saved Coordinate Position(not a real Coordinate), used to not toggle the same LED on the scene while mouse is pressed
    int     PressedMouseValueY;                             // Saved Coordinate Position(not a real Coordinate), used to not toggle the same LED on the scene while mouse is pressed
    int     PressedMouseValueX_Top;                         // Saved Coordinate Position(not a real Coordinate), used to not toggle the same LED on the scene while mouse is pressed
    int     PressedMouseValueZ_Top;                         // Saved Coordinate Position(not a real Coordinate), used to not toggle the same LED on the scene while mouse is pressed
    int     PressedMouseValueY_Right;                       // Saved Coordinate Position(not a real Coordinate), used to not toggle the same LED on the scene while mouse is pressed
    int     PressedMouseValueZ_Right;                       // Saved Coordinate Position(not a real Coordinate), used to not toggle the same LED on the scene while mouse is pressed
    int     m_nMouseClick_X_Coordinate;                     // securing variable for the main LED View for the X-Coordinate
    int     m_nMouseClick_Y_Coordinate;                     // securing variable for the main LED View for the Y-Coordinate
    int     m_nMouseClick_X_Top_Coordinate;                 // securing variable for the top LED View for the X-Coordinate
    int     m_nMouseClick_Z_Top_Coordinate;                 // securing variable for the top LED View for the Z-Coordinate
    int     m_nMouseClick_Y_Right_Coordinate;               // securing variable for the right LED View for the Y-Coordinate
    int     m_nMouseClick_Z_Right_Coordinate;               // securing variable for the right LED View for the Z-Coordinate   
    int     m_iAnzProgramNr;                                // current number of Programparts
    int     m_iProgrampartValue;                            // includes the current Number of the Programpart where the User interacts   
    QPointF m_ProgramNumber_Scene_Click;
    QPointF m_ProgramNumber_Scene_Move;
    int     m_iClockCounter;                                // counts every call of the timer slots, builds the timecontext (global used by all timers, it will be resetet after each use)
    int     m_iProgramCounter;                              // counts how many Program Parts have been run through
    int     m_iRotationLogic[3][27];                        // inlcudes 28 Steps of the Rotation Logic. For more Information look at RotationLogic()
    int     m_iRotationStep_Front;                          // the Stepposition through the RotationLogic Look-Up-Table of the Front View
    int     m_iRotationStep_Top;                            // the Stepposition through the RotationLogic Look-Up-Table of the Top View
    int     m_iRotationStep_Right;                          // the Stepposition through the RotationLogic Look-Up-Table of the Right View
    int     m_i20SquareCache_Front;
    int     m_i12SquareCache_Front;
    int     m_i4SquareCache_Front;
    int     m_i20SquareCache_Top;
    int     m_i12SquareCache_Top;
    int     m_i4SquareCache_Top;
    int     m_i20SquareCache_Right;
    int     m_i12SquareCache_Right;
    int     m_i4SquareCache_Right;
    int     m_iNumberOfRectEdges;
    int     m_iSelectedProgramParts[1024];
    float   m_iSpeedRegulator;                              // Regulates the Speed of every Programpart (m_iSeconds * m_iSpeedRegulator/100 in Prozent)
    float   m_iSliderRegulator;
    QString m_SecondsString;
    int     m_iSecondsStringlength;

    // Timer
    QTimer *Playtimer;
    QTimer *PlayLooptimer;

    // Loading Dialog
    Loading *LoadingDialog;

    // GraphicsView Scenes
    MouseEventScene *LED_Selection_Scene;
    MouseEventScene *LED_Selection_Top_Scene;
    MouseEventScene *LED_Selection_Right_Scene;
    MouseEventScene *ProgramNumber_Scene;
    QGraphicsScene *LED_CUBE_3D_Scene;
    // An Item List of the Graphicsscene
    QList<QGraphicsItem *>  ItemList;
};

#endif // LED_CUBE_MAIN_H
