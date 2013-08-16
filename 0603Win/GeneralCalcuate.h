#ifndef GENERALCALCUATE_H
#define GENERALCALCUATE_H

#include  "math.h"

//���Բ�ֵ����(��������ĳһ���ֵ)
//p_in ������xֵ
//p_x  �����ϸ�����xֵ
//p_y  �����ϸ�����yֵ
//p_pot ���ߵ���
float calculate_chazhi(float p_in,float *p_x,float *p_y,unsigned char p_pot)
{
 unsigned char i,temp;
 float p_out;
 float  p_f;

 if(p_in<=*p_x)
 {
  p_out=*(p_y+1);
  p_out-=*p_y;
  p_f=*p_x;
  p_f-=p_in;
  p_out*=p_f;
  p_f=*(p_x+1);
  p_f-=*p_x;
  p_out/=p_f;
  p_f=*p_y;
  p_out=p_f-p_out;
 }
 else if(p_in>=*(p_x+p_pot-1))
 {
  p_out=*(p_y+p_pot-1);
  p_out-=*(p_y+p_pot-2);
  p_f=p_in;
  p_f-=*(p_x+p_pot-1);
  p_out*=p_f;
  p_f=*(p_x+p_pot-1);
  p_f-=*(p_x+p_pot-2);
  p_out/=p_f;
  p_f=*(p_y+p_pot-1);
  p_out+=p_f;
 }
 else
 {
  for(i=0;i<(p_pot-1);i++)
   if(p_in>=*(p_x+i)&&p_in<=*(p_x+1+i))
   {
    temp=i;
    break;
   }
  if(*(p_y+temp+1)>*(p_y+temp))
   p_out=*(p_y+temp+1)-*(p_y+temp);
  else
   p_out=*(p_y+temp)-*(p_y+temp+1);
  p_f=*(p_x+temp+1);
  p_f=p_f-p_in;
  p_out*=p_f;
  p_f=*(p_x+temp+1)-*(p_x+temp);
  p_out/=p_f;
  p_f=*(p_y+temp+1);
  if(*(p_y+temp+1)<=*(p_y+temp))
   p_out+=p_f;
  else
   p_out=p_f-p_out;
 }
 return(p_out);
}


/************������������****************/
void bubble_float(float* in, unsigned short count)
{
 unsigned short x;
 unsigned short y;
 float temp;
 for(y=0;y<count-1;y++)
 {
  for(x=1;x<count-y;x++)
  {
   if((*(in+x))>(*(in+x-1)))
   {
    temp=(*(in+x-1));
    (*(in+x-1))=(*(in+x));
    (*(in+x))=temp;
   }
  }
 }
}


/***********���������С**************/
void bubble(unsigned int* in, unsigned short count)
{
 unsigned short x;
 unsigned short y;
 unsigned int temp;
 for(y=0;y<count-1;y++)
 {
  for(x=1;x<count-y;x++)
  {
   if((*(in+x))>(*(in+x-1)))
   {
    temp=(*(in+x-1));
    (*(in+x-1))=(*(in+x));
    (*(in+x))=temp;
   }
  }
 }
}

/***********��������С����**************/
void bubble_a(unsigned int* in, unsigned short count)
{
 unsigned short x;
 unsigned short y;
 unsigned int temp;
 for(y=0;y<count-1;y++)
 {
  for(x=1;x<count-y;x++)
  {
   if((*(in+x))<(*(in+x-1)))
   {
    temp=(*(in+x-1));
    (*(in+x-1))=(*(in+x));
    (*(in+x))=temp;
   }
  }
 }
}




//����ƽ�����ݶ�
//unsigned int *da     ԭʼ����
//unsigned int *db	   ������ƽ�������ݷ���
//unsigned short con1  �������ݸ���
//unsigned short con2  ��ƥ��������������
//unsigned int d       �����������Է�Χֵ
void smooth_data(unsigned int *da,unsigned int *db,unsigned short con1,unsigned char con2,unsigned int d )
{
  unsigned int zongsu=0;
  unsigned int a=0,b=0;
  unsigned int i=0,j=0;
  for(i=0;i<con1;i++)
  {
   for(j=i;j<(con2+i);j++)
   if(fabs((float)da[i]-(float)da[j])<d)
   a++;

   if(a>=con2)
   {
        for(b=0;b<(j-i);b++)
    {
         db[b]=da[i+b+1];
         zongsu=zongsu+da[i+b+1];
        }
        zongsu=(unsigned int)(zongsu/(j-i));

        for(i=0;i<(con1-j);i++)
        {
         if(fabs((float)zongsu-(float)da[j+i+1])<d)
         db[b+i]=da[j+i+1];
         else
         return;
     if(i==(con1-j-1))
     return;
        }
   }
   else
   a=0;
  }
}

//����ƽ�����ݶ�
//float *da     ԭʼ����
//flaot *db	   ������ƽ�������ݷ���
//unsigned short con1  �������ݸ���
//unsigned short con2  ��ƥ��������������
//unsigned int d       �����������Է�Χֵ
void floatsmooth_data(float *da,float *db,unsigned short con1,unsigned char con2,unsigned int d )
{
  float zongsu=0;
  unsigned int a=0,b=0;
  unsigned int i=0,j=0;
  for(i=0;i<con1;i++)
  {
   for(j=i;j<(con2+i);j++)
   if((fabs(da[i]-da[j])<d)&&(da[i]>1.5)&&(da[j]>1.5))
   a++;

   if(a>=con2)
   {
        for(b=0;b<(j-i);b++)
    {
         db[b]=da[i+b+1];
         zongsu=zongsu+da[i+b+1];
        }
        zongsu=zongsu/(j-i);

        for(i=0;i<(con1-j);i++)
        {
         if(fabs(zongsu-da[j+i+1])<d)
         db[b+i]=da[j+i+1];
         else
         return;
     if(i==(con1-j-1))
     return;
        }

   }
   else
   a=0;
  }
}


#endif // GENERALCALCUATE_H
