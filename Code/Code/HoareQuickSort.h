#pragma once

void HoareQuickSorting(int* Arr, int startIndex, int endIndex)
{
    //���� ������ ������� <= ������ �����
    if (startIndex <= endIndex)
    {
        int middleElement = Arr[(startIndex + endIndex) / 2]; //������� ������� �������

        //������� ������� ������ � ������� ���������
        int LeftIndex = startIndex;
        int RightIndex = endIndex;

        while (LeftIndex <= RightIndex) //���� ����� ������ <= �������
        {
            while (Arr[LeftIndex] < middleElement) //���� �������� �� ������ ������� < �������� ��������
                LeftIndex++; //����������� ����� ������

            while (Arr[RightIndex] > middleElement) //���� �������� �� ������� ������� > ������� ��������
                RightIndex--; //��������� ������ ������

            if (LeftIndex <= RightIndex) //���� ����� ������ <= �������
            {
                //������ �������� �� ��� �������
                int tmp = Arr[LeftIndex];
                Arr[LeftIndex] = Arr[RightIndex];
                Arr[RightIndex] = tmp;

                LeftIndex++; //����������� ����� ������
                RightIndex--; //��������� ������ ������
            }
        }

        HoareQuickSorting(Arr, startIndex, RightIndex); //������ � ��������. ������ �� ������, ����� = ������ ������
        HoareQuickSorting(Arr, LeftIndex, endIndex); //������ = ����� ������, ����� �� ������
    }
}
