	int left = 0, right = n - 1;
		int flag = 1;
		while (left < right && flag>0)
		{
			for (int i = left; i < right; i++)
			{
				flag = 0;
				if (mas[i] > mas[i + 1])
				{
					swap(mas[i], mas[i + 1]);
					flag = 1;
				}
			}
			right--;
			for (int i = right; i > left; i--)
			{
				if (mas[i - 1] > mas[i])
				{
					swap(mas[i - 1], mas[i]);
					flag = 1;
				}
			}
			left++;
		}
		
