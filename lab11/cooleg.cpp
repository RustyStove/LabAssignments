#include <stdio.h>

struct Students{
    char name[300], NIM[59], postal[65],birthplace[150], birthdate[150], highschool[150], accnum[59];
    int age, num, height;
};

int main(){
    int N;
 struct Students stu;

scanf("%d", &N);
getchar();

for(int i=1;i<=N;i++){
    scanf("%s", stu.name);
    getchar();
    scanf("%s", stu.NIM);
    getchar();
    scanf("%d", &stu.age);
    getchar();
    scanf("%s", stu.postal);
    getchar();
    scanf("%s", stu.birthplace);
    getchar();
    scanf("%s", stu.birthdate);
    getchar();
    scanf("%[^\n]", stu.highschool);
    getchar();
    scanf("%d", &stu.num);
    getchar();
    scanf("%d", &stu.height);
    getchar();
    scanf("%s", stu.accnum);
    getchar();
    
    printf("Mahasiswa ke-%d:\n", i);
    printf("Nama: %s\n", stu.name);
    printf("NIM: %s\n", stu.NIM);
    printf("Umur: %d\n", stu.age);
    printf("Kode Pos: %s\n", stu.postal);
    printf("Tempat Lahir: %s\n", stu.birthplace);
    printf("Tanggal Lahir: %s\n", stu.birthdate);
    printf("Almamater SMA: %s\n", stu.highschool);
    printf("Jumlah Saudara Kandung: %d\n", stu.num);
    printf("Tinggi Badan: %d\n", stu.height);
    printf("NOMOR REKENING: %s\n", stu.accnum);
}

return 0;
}
