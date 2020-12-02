#include<stdio.h>
int main()
{
int a;
printf("QS大学排名\n");
scanf("%d",&a);
switch(a)
	{
	case 1:printf("麻省理工学院\n");break;
	case 2:printf("斯坦福大学\n");break;
	case 3:printf("哈佛大学\n");break;
	case 4:printf("剑桥大学\n");break;
	case 5:printf("加利福尼亚理工学院\n");break;
	case 6:printf("牛津大学\n");break;
	case 7:printf("伦敦大学学院\n");break;
	case 8:printf("苏黎世联邦理工学院\n");break;
	case 9:printf("帝国理工学院\n");break;
	case 10:printf("芝加哥大学\n");break;
	case 11:printf("普林斯顿大学\n");break;
	case 12:printf("新加坡国立大学\n");break;
	case 13:printf("南洋理工大学\n");break;
	case 14:printf("洛桑联邦大学\n");break;		
	case 15:printf("耶鲁大学\n");break;
	case 16:printf("康奈尔大学\n");break;
	case 17:printf("约翰霍普金斯大学\n");break;
	case 18:printf("宾夕法尼亚大学\n");break;
	case 19:printf("爱丁堡大学\n");break;
	case 20:printf("哥伦比亚大学\n");break;
	default:printf("请输入一个1—20之间的数字\n");
	}
return 0;
}
