#include "TempHumidView.h"

TempHumidView::TempHumidView(LCD *Lcd)
{
    this -> lcd = Lcd;
}

TempHumidView::~TempHumidView()
{

}

void TempHumidView::setTempHumiData(float temp, float humid)
{
    char buff[30];
    sprintf(buff, "%.1f'C", temp);
    lcd->WriteStringXY(0,10,buff);
    sprintf(buff, "%.1f%%", humid);
    lcd->WriteStringXY(1,10,buff);
    printf("%.1f'C, %.1f%%\n", temp, humid);
}