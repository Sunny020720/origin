#include<stdio.h>
#include<string.h>

int main()
{
	//31��ʡ�ĳ���Ϊ�����������壬³�����������ɣ�
	//�ɣ������ڣ��գ��㣬�
	//�����ӣ�ԥ���棬��������
	//	�������������ƣ��أ�
	//�£��ʣ��࣬�����£�
	//�ۣ��ģ�̨���ң�����ѧ��ʹ���졣
    char plate[16]={}; 
    
    char car[16][3]={};//��ԭ�������Ķ�ά���� 
	int i = 0;
	
	int a=1;
	while(a) 
{
	printf("�����복�ƺţ�\n") ;
	scanf("%s",plate); 
	
	//�����ά����
	int n = 0;//car���±� 
	for(i = 0;i < 16;i++)
	{
		if(plate[i] < 0)
		{
			car[n][0]  =  plate[i];
			car[n][1]  =  plate[i+1];
			
			i++;		 
		} 
		else
		{
			car[n][0]  =  plate[i];
			
			
		}
		n++;
    }
	
	//�鿴��ά���� 
/*	for(i = 0;i < 16;i++)	
    {
   	printf("car[%d]= %s  ",i,car[i]);
	 } 
    printf("\n");*/ 
   
    //utf-8
    char name[40][3]={"��","��","��","³","��","��","��","��","��","��",
				   	"��","��","��","��","��","ԥ","��","��","��","��",
					"��","��","��","��","��","��","��","��","��","��",
					"��","��","̨","��","��","ѧ","ʹ","��"} ;
    
    char utf[40][16]={"E4BAAC","E6B2AA","E6B4A5","E9B281","E58680","E6998B","E89299","E8BEBD","E59089","E9BB91",
	                "E88B8F","E6B599","E79A96","E997BD","E8B5A3","E8B1AB","E6B998","E98482","E7B2A4","E6A182",
					 "E790BC","E5B79D","E8B4B5","E4BA91","E8978F","E99995","E79498","E99D92","E5AE81","E696B0",
					 "E6B8AF","E6BEB3","E58FB0","E68C82","E8ADA6","E5ADA6","E4BDBF","E9A286"}; 
    
	for(n = 0;n < 10;n++)
	{
		for(i = 0;i < 40;i++)
		{
	
		if( strcmp(car[n],name[i]) == 0) //�Ƚ��ַ��� 
	   		{
	    	    printf(" %s ",utf[i]);  //�Ǻ��֣����UTF-8�� 
	    	    break;
	   		}    
		} 
	
		if(i == 40)
		{
		printf("%s",car[n]) ;//�����꣬���Ǻ��֣�ֱ����� 
		}
	}
	
    printf("\n����0�˳�����������\n");
	scanf("%d",&a); 

}
	return 0;
 } 
