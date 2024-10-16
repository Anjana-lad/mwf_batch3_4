// nested structure: structure inside structure.
#include<stdio.h>
struct employee{
    int eid;
    float salary;
    struct department{
        int dept_id;
        int dept_name;
    }dept;
}emp1;
int main(){
    emp1.eid=1;
    emp1.salary=25000;
    emp1.dept.dept_id=123;
    emp1.dept.dept_name="Software";

    printf("\n Employee id=%d",emp1.eid);
    printf("\n Salary=%.2f",emp1.salary);
    printf("\n Dept_id=%d",emp1.dept.dept_id);
    printf("\n Dept_name=%s",emp1.dept.dept_name);
}