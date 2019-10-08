#include<stdio.h>
#include<string.h>
struct school{
    int schnum;//学校编号
    int manscore;//男子总分
    int womanscore;//女子总分
    int totalscore;//学校总分
};
struct student{
    int schnum;//学校编号
    char stuname[10];//学生姓名
    char sex[10];//性别
    int stunum;//学号
    int cnum;//比赛编号
    char cname[10];//比赛名字
    int rank;//名次
};
int main()
{
    int i,j,k,x;
    printf("请输入参加比赛的学校个数:");
    scanf("%d",&i);//输入参加比赛的学校个数
    printf("请输入参加比赛的学生人数");
    scanf("%d",&k);// 输入参加比赛的学生人数
    struct school sch[i];//建造学校结构体数组
    struct student stu[k];//建造学生结构体数组
    for(j=0;j<i;j++){
        sch[j].manscore=0;
        sch[j].womanscore=0;
        sch[j].totalscore=0;
    }
    for(j=0;j<k;j++)
    {
        scanf("%d",&stu[j].schnum);
        scanf("%d",&stu[j].cnum);
        scanf("%s",stu[j].cname);
        scanf("%d",&stu[j].stunum);
        scanf("%s",stu[j].sex);
        scanf("%s",stu[j].stuname);
        scanf("%d",&stu[j].rank);
    }//进行学生信息的输入
    for(j=0;j<i;j++)
    {
        for(x=0;x<k;x++)
        {
            if(stu[j].schnum==sch[x].schnum)
            {
                
            }
        }
    }//对每个学生的信息进行处理，对相应的分数进行计算
    // ‰»Î∏˜œÓ–≈œ¢
    //for(j=0;j<i;j++)
    //{
    //    printf("%d %d %s %d %s %s %d",stu[j].schnum,stu[j].cnum,stu[j].cname,stu[j].stunum,stu[j].sex,stu[j].stuname,stu[j].rank);
   // }ºÏ≤È ‰»Î
    //∏˘æ›À˘ ‰»Îµƒ–≈œ¢∂‘√ø∏ˆ—ß…˙Ω¯––∆¿∑÷,»ª∫ÛΩ´∑÷ ˝º”µΩ—ß–£◊‹∑÷,ƒ–◊”◊‹∑÷,≈Æ◊”◊‹∑÷…œ

    return 0;
}
