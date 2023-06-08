using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shelf : MonoBehaviour
{
    public enum ShelfType {fire,water,earth,wind}
    public ShelfType shelfType;
    BookColision bookColision;
    Collider bookCol;
    GameObject book;
    public List<GameObject> shelfSpot = new List<GameObject>();
    public List<GameObject> shelfSlots = new List<GameObject>();

    bool isSorted;
    
    private void Start() 
    {
        
    }
    private void OnTriggerEnter(Collider other) 
    {
        if(other.tag == "book")
        {
            book = other.gameObject;
            bookCol = book.gameObject.GetComponent<BoxCollider>();
            string booktype = other.GetComponent<BookColision>().bookType.ToString();
            if(booktype == shelfType.ToString())
            {
                SortBooks(book);
            }
        }
    }

    private void SlotCheck()
    {
        foreach (GameObject shelfSlots in shelfSlots)
        {
            isSorted = shelfSlots.GetComponent<Slot>().isSorted;
        }
    }
    
    private void SortBooks(GameObject book)
    {
        if(!isSorted)
        {
            bookCol.enabled = false;
            book.transform.position = Vector3.zero;
        }

    }

}
