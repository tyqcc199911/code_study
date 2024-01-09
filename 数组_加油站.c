//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
///*int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize)
//{
//	int p = 0, q = 0;
//	int gassum = 0, costsum = 0;
//	for(int i=0;i<gasSize;i++)
//	{
//		gassum = 0; 
//		costsum = 0;
//		if (gas[i] >= cost[i])
//		{
//			p = i;
//			q = p;
//			gassum = gas[p];
//			costsum = cost[p];
//			for (int j = 0; j < gasSize; j++)
//			{
//				if (p == gasSize - 1)
//				{
//					p = 0;
//				}
//				else
//				{
//					p++;
//				}
//				gassum += gas[p];
//				costsum += cost[p];
//				if (gassum < costsum)
//					break;
//			}
//			if (q == p)
//				return q;
//		}
//		
//	}
//	return -1;
//}*///³¬Ê±
//
//int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize)
//{
//	int i = 0;
//	
//	while (i < gasSize)
//	{
//		int gassum = 0, costsum = 0;
//		int cnt = 0;
//		while (cnt<gasSize)
//		{
//			int j = (i + cnt) % gasSize;
//			gassum += gas[j];
//			costsum += cost[j];
//			if (gassum < costsum)
//				break;
//			cnt++;
//		}
//		if (cnt == gasSize)
//		{
//			return i;
//		}
//		else
//		{
//			i = i+cnt+1;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int gas[] = {2};
//	int cost[] = {2};
//	int k = canCompleteCircuit(gas, 1, cost, 1);
//	printf("%d", k);
//
//	system("pause");
//	return EXIT_SUCCESS;
//}