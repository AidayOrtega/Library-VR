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
#region Check for empty slots
    
    private Transform emptySlot;
    private Vector3 emptySlotPosition;
    private Quaternion emptySlotRotation;
    [SerializeField]
    public GameObject[] emptySlots;
    public int currentEmptySlot;
    public bool isFull = false;
    int n = 0;
    public BookCounter count;

#endregion
    public ShelfManager shelfManager;

    private void Start() 
    {
        currentEmptySlot = 0;
        shelfManager = this.gameObject.GetComponentInParent<ShelfManager>();
    }
    private void CheckEmptySlot()
    {
        if (emptySlots[n].gameObject.GetComponent<Slot>().isSorted == false)
        {
            emptySlot = emptySlots[n].gameObject.GetComponent<Transform>();
            emptySlotPosition = emptySlot.position;
            emptySlotRotation = emptySlot.rotation;
        }
    }
    private void OnTriggerEnter(Collider other) 
    {
        if(other.tag == "book" && n!=emptySlots.Length)
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
                n++;
                count.bookCount--;
            }
            if(n == emptySlots.Length)
            {
                isFull = true;
                shelfManager.CheckShelves();
            }
        }
    }
}
