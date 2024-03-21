#pragma once

void HoareQuickSorting(int* Arr, int startIndex, int endIndex)
{
    //Если индекс начался <= индекс конца
    if (startIndex <= endIndex)
    {
        int middleElement = Arr[(startIndex + endIndex) / 2]; //Находим средний элемент

        //Заводим индексы левого и правого элементов
        int LeftIndex = startIndex;
        int RightIndex = endIndex;

        while (LeftIndex <= RightIndex) //Пока левый индекс <= правого
        {
            while (Arr[LeftIndex] < middleElement) //Пока значение по левому индексу < среднего элемента
                LeftIndex++; //Увеличиваем левый индекс

            while (Arr[RightIndex] > middleElement) //Пока значение по правому индексу > среднее значение
                RightIndex--; //Уменьшаем правый индекс

            if (LeftIndex <= RightIndex) //Если левый индекс <= правого
            {
                //Меняем значение по ним местами
                int tmp = Arr[LeftIndex];
                Arr[LeftIndex] = Arr[RightIndex];
                Arr[RightIndex] = tmp;

                LeftIndex++; //Увеличиваем левый индекс
                RightIndex--; //Уменьшаем правый индекс
            }
        }

        HoareQuickSorting(Arr, startIndex, RightIndex); //Уходим в рекурсию. Начало не меняем, конец = правый индекс
        HoareQuickSorting(Arr, LeftIndex, endIndex); //Начало = левый индекс, конец не меняем
    }
}
