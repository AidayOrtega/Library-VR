using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shelf : MonoBehaviour
{
#region variablesforbooks

    public enum ShelfType {fire,water,earth,wind}
    public ShelfType shelfType;
    BookColision bookColision;
    GameObject book;
#endregion
    private Transform emptySlot;
    private Vector3 emptySlotPosition;
    private Quaternion emptySlotRotation;
    [SerializeField]
    public GameObject[] emptySlots;
    public int currentEmptySlot;
    private void Start() 
    {
        currentEmptySlot = 0;        
    }
    private void CheckEmptySlot()
    {
        for(int i=0; i<emptySlots.Length; i++)
        {
            if (emptySlots[i].gameObject.GetComponent<Slot>().isSorted == false)
            {
                currentEmptySlot = i;
                emptySlot = emptySlots[i].gameObject.GetComponent<Transform>();
                emptySlotPosition = emptySlot.position;
                emptySlotRotation = emptySlot.  rotation;
            }
        }
    }

    private void OnTriggerEnter(Collider other) 
    {
        if(other.tag == "book")
        {
            CheckEmptySlot();
            book = other.gameObject;
            string booktype = other.GetComponent<BookColision>().bookType.ToString();
            if(booktype == shelfType.ToString())
            {
                Destroy(book.gameObject);
                GameObject newBook = Instantiate(book.gameObject,emptySlotPosition,emptySlotRotation);
                Collider bookCol = newBook.GetComponent<BoxCollider>();
                Rigidbody bookRb = newBook.GetComponent<Rigidbody>();
                bookRb.constraints = RigidbodyConstraints.FreezeAll;
                newBook.tag = "BookSorted";
                emptySlots[currentEmptySlot].gameObject.GetComponent<Slot>().isSorted = true;
            }
        }
    }
}
