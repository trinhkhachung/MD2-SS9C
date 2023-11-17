#include<stdio.h>
#include<math.h>
int main(){
	int n,sum,max,min;
	int arr[100];
	int currentIndex=0;
	int choice;
	int count;
	int findNumber;
	do{
		printf("----------MENU---------\n");
		printf("1.nhap so phan tu can nhap va gia tri cac phan tu \n");
		printf("2.in ra gia tri phan tu dang quan li\n");
		printf("3.in ra gia tri phan tu chan va tinh tong\n");
		printf("4.in ra gia tri lon nhat va nho nhat trong mang\n");
		printf("5.in ra cac phan tu so nguyen to trong mang va tinh tong\n");
		printf("6.nhap vao mot so va thong ke trong mang co bao nhieu phan tu co gia tri nhu vay\n");
		printf("7.them mot phan tu vao vi tri chi dinh\n");
		printf("8.thoat\n");
		printf("nhap lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf ("nhap so phan tu can nhap: ");
				scanf ("%d",&n);
				for(int i=0;i<n;i++){
					printf("moi nhap arr[%d]",currentIndex);
					scanf("%d",&arr[currentIndex]);\
					currentIndex++;
				}
				break;
			case 2:
				for(int i;i<currentIndex;i++){
					printf("arr[%d]= %d\n",i,arr[i]);
				}
				break;
			case 3:
				sum=0;
				for(int i;i<currentIndex;i++){
					if(arr[i]%2==0){
						printf("%d la so chan\n",arr[i]);
						sum+=arr[i];
					}
				}
				printf("tong cac so chan la: %d\n",sum);
				break;
			case 4:
				min=arr[0];
				max=arr[0];
				for(int i=0;i<currentIndex;i++){
					max = (max > arr[i]) ? max : arr[i];
					min = (min < arr[i]) ? min : arr[i];
				}
				printf("MAX = %d \nMin = %d\n",max,min);
				break;
			case 5:
				for(int i=0;i<n;i++){
					count=0;
					for(int k=2;k<arr[i];k++){
						if(arr[i] % k == 0){
							count=1;
						}
					}
					if(count == 0){
						printf("arr[%d]=%d\n",i,arr[i]);
						sum+=arr[i];
						printf("tong so nguyen to la: %d\n",sum);
					}else{
					continue;
					}
				}
				break;	
			case 6:
				printf("nhap phan tu de ktra: ");
				scanf("%d",&findNumber);
				for (int i = 0; i < currentIndex; i++)
            {
                if (findNumber == arr[i])
                {
                    count++;
                }
            }
            printf("%d", count);
                 break;
            case 7:
            int addvalue, index;
            printf("phan phan tu them vao");
            scanf("%d", &addvalue);
            printf("nhap vao vi tri");
            scanf("%d", &index);
            if (currentIndex > index)
            {
                for (int i = currentIndex; i > index; i--)
                {       
                    arr[i] = arr[i - 1];                
                }
            }
            else currentIndex=index+1;
            arr[index] = addvalue;
            printf("arr[%d]= %d", index, arr[index]);
                 break;
            case 8:
                  return 0;
               default:
                    printf("NHAP TU 1-8\N");
            	break;
		}
		
	}while(1==1);
}
