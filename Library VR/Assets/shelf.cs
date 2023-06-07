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
    List<GameObject> shelfSpot = new List<GameObject>();
    public GameObject[] shelfSlots;

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
    
    private void SortBooks(GameObject book)
    {
        bookCol.enabled = false;
        book.GetComponent<BookColision>().MoveBook();
    }

}
