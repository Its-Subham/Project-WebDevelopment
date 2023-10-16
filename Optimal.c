#include <stdio.h>
void main()
{
    int p[20], f[5] = {99, 99, 99, 99, 99}, clone_f[5], tmp_arr[5];
    int i, j, k, n, m, c = 0, count = 1, tmp = 0, s = 0;
    printf("Enter the number of pages:-");
    scanf("%d", &n);
    printf("\nEnter the pages:-");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("\nEnter the number of frames:-");
    scanf("%d", &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (f[j] == p[i])
            {
                printf("Hit\n");
                c++;
                break;
            }
        }
        if (j == m)
        {
            for (j = 0; j < m; j++)
            {
                for (k = i + 1; k < n; k++)
                {
                    if (f[j] == p[k])
                    {
                        clone_f[j] = k;
                        break;
                    }
                    else
                    {
                        clone_f[j] = 99;
                    }
                }
            }
            for (j = 0; j < m; j++)
                tmp_arr[j] = clone_f[j];

            for (j = 0; j < m; j++)
            {
                for (k = j + 1; k < m; k++)
                {
                    if (tmp_arr[j] < tmp_arr[k])
                    {
                        tmp = tmp_arr[j];
                        tmp_arr[j] = tmp_arr[k];
                        tmp_arr[k] = tmp;
                    }
                }
            }
            for (j = 0; j < m; j++)
            {
                if (tmp_arr[1] == clone_f[j])
                {
                    f[j] = p[i];
                    clone_f[j]=i;
                }
            }
            // for (j = 0; j < m; j++)
            // {
            //     clone_f[j] == f[j];
            // }
            // for (k = i + 1; k < n; k++)
            // {
            //     for (j = 0; j < m; j++)
            //     {
            //         if (p[k] == clone_f[j])
            //         {
            //             if (count < m)
            //             {
            //                 clone_f[j] = -1;
            //                 count = count + 1;
            //                 // f[j]=p[i];
            //                 break;
            //             }
            //             else
            //             {
            //                 f[j]=p[i];
            //                 break;
            //             }
            //         }
            //         // else
            //         // break;
            //     }
            // }
            // if (count<m)
            // {
            //     tmp = (tmp + 1) % m;
            //     f[tmp] = p[i];
            // }
            for (j = 0; j < m; j++)
            {
                printf("%d\t", f[j]);
            }
            printf("\n");
        }
    }
}