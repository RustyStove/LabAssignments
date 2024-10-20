#include <stdio.h>
#include <string.h>

struct Student
{
  char nim[11];
  char nama[21];
};

void merge(struct Student students[], int p, int q, int r)
{

  int n1 = q - p + 1;
  int n2 = r - q;

  struct Student L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = students[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = students[q + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2)
  {
    if (strcmp(L[i].nim, M[j].nim) <= 0)
    {
      students[k] = L[i];
      i++;
    }
    else
    {
      students[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1)
  {
    students[k] = L[i];
    i++;
    k++;
  }

  while (j < n2)
  {
    students[k] = M[j];
    j++;
    k++;
  }
}

void sortnim(struct Student students[], int l, int r)
{
  if (l < r)
  {

    int m = l + (r - l) / 2;

    sortnim(students, l, m);
    sortnim(students, m + 1, r);

    merge(students, l, m, r);
  }
}

int main()
{
  FILE *fptr;

  fptr = fopen("testdata.in", "r");

  int n;
  fscanf(fptr, "%d\n", &n);

  struct Student students[1000];

  int student_counter = 0;

  while (fscanf(fptr, "%s %s\n", students[student_counter].nim, students[student_counter].nama) != EOF)
  {
    student_counter++;
  }

  sortnim(students, 0, n - 1);

  int i;
  for (i = 0; i < student_counter; i++)
  {
    printf("%s %s\n", students[i].nim, students[i].nama);
  }

  return 0;
}

