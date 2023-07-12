using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;
using TMPro;

public class ShelfManager : MonoBehaviour
{
    [SerializeField]
    public GameObject[] shelves;

    public GameObject winState;
   private int n = 0;
    public void CheckShelves()
    {
        for(int i = 0;i < shelves.Length; i++)
        {
            if (shelves[i].gameObject.GetComponent<shelf>().isFull){
                n++;
            }
            if (n == shelves.Length){
                winState.SetActive(true);
            }
        }
    }
}
