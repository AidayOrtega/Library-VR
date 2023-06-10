using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShelfManager : MonoBehaviour
{
    [SerializeField]
    public GameObject[] shelves;
   private int n;
    public void CheckShelves()
    {
        for(int i = 0;i < shelves.Length; i++)
        {
            if (shelves[i].gameObject.GetComponent<shelf>().isFull)
                n++;
            if (n == shelves.Length)
                Debug.Log("win");
        }
    }
}
