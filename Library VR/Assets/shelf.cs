using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shelf : MonoBehaviour
{
    public enum ShelfType {fire,water,earth,wind}
    public ShelfType shelfType;
    BookColision bookColision;

    List<GameObject> gameObjects = new List<GameObject>();

    private void OnTriggerEnter(Collider other) 
    {
        if(other.tag == "book")
        {
            string booktype = other.GetComponent<BookColision>().bookType.ToString();
            if(booktype == shelfType.ToString())
            {
                SortBooks();
            }
        }
    }
    
    private void SortBooks()
    {

    }

}
