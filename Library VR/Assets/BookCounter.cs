using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class BookCounter : MonoBehaviour
{
    public int bookCount;
    private string writeOut;
    public TMP_Text count;

    // Start is called before the first frame update
    void Start()
    {
        bookCount = 12;
    }

    // Update is called once per frame
    void Update()
    {
        writeOut = bookCount + " / 12 books left";
        count.text = writeOut;
    }
}
