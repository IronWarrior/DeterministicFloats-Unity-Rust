using UnityEngine;
using UnityEngine.UI;

public class Menu : MonoBehaviour
{
    [SerializeField]
    Button generateGroundTruthButton, runTestButton;

    [SerializeField]
    GameObject menuUI, testUI;

    private void Awake()
    {
        if (Application.platform == RuntimePlatform.WindowsPlayer ||
            Application.platform == RuntimePlatform.WindowsEditor)
        {
            generateGroundTruthButton.onClick.AddListener(() => GenerateGroundTruth());
        }
        else
        {
            generateGroundTruthButton.gameObject.SetActive(false);
        }

        runTestButton.onClick.AddListener(() => RunTest());

        testUI.SetActive(false);
        menuUI.SetActive(true);
    }

    private void GenerateGroundTruth()
    {
        GetComponent<DeterminismTest>().GenerateGroundTruth();

        testUI.SetActive(true);
        menuUI.SetActive(false);
    }

    private void RunTest()
    {
        GetComponent<DeterminismTest>().RunTest();

        testUI.SetActive(true);
        menuUI.SetActive(false);
    }
}
