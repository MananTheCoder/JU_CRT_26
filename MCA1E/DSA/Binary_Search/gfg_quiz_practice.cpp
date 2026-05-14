int fun(int arr[], int size, int key, int k)
{
    int s = 0, e = size - 1, ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            if (arr[mid - k] == arr[mid])
                e = mid - 1;
            else if (arr[mid - (k - 1)] == arr[mid])
            {
                ans = mid;
                break;
            }
            else
            {
                s = mid + 1;
            }
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}