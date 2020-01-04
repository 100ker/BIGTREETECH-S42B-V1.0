
#ifndef __OLED_H
#define __OLED_H 

#include "main.h"




#define OLED_CMD  0	//д����
#define OLED_DATA 1	//д����

//OLED�����ú���
void OLED_WR_Byte(uint8_t dat,uint8_t cmd);	//д���ݡ�����    

void OLED_Display_On(void);
void OLED_Display_Off(void);
void OLED_Refresh_Gram(void);							//��������		   
							   		    
void OLED_Init(void);									//OLED��ʼ��
void OLED_Clear(void);
void OLED_DrawPoint(uint8_t x,uint8_t y,uint8_t t);					//OLED��һ����

void OLED_Fill(uint8_t x1,uint8_t y1,uint8_t x2,uint8_t y2,uint8_t dot);			//OLED�������
void OLED_ShowChar(uint8_t x,uint8_t y,char chr,uint8_t size,uint8_t mode);	//��ʾASCII�ַ�
void OLED_ShowNum(uint8_t x,uint8_t y,uint32_t num,uint8_t len,uint8_t size);	//��ʾ����
void OLED_ShowString(uint8_t x,uint8_t y,const char *p);	 		//��ʾ�ַ���
  
uint32_t oled_pow(uint8_t m,uint8_t n);//m^n�η�
void OLED_Showword(uint8_t x,uint8_t y,uint8_t *num,uint8_t mode);





























#endif


























