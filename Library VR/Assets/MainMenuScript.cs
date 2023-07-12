using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
public class MainMenuScript : MonoBehaviour
{
    public GameObject inGameUi, xrOrigin;

    private void Start() {
        xrOrigin.GetComponent<LocomotionSystem>().enabled = false;
    }
    public void StartGame()
    {
        xrOrigin.GetComponent<LocomotionSystem>().enabled = true;
        inGameUi.SetActive(true);
        this.gameObject.SetActive(false);
    }
}
