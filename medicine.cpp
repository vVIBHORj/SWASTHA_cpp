#include <iostream>
#include <string>
#include <vector>

class PedigreeAnalysis {
public:
    // Constructor
    PedigreeAnalysis() : diabetesScore(0) {}

    // Method to collect family history and calculate the diabetes score
    void performAnalysis() {
        // Ask the user for family history
        getFamilyHistory();

        // Calculate the diabetes score
        calculateDiabetesScore();

        // Display the result
        displayResult();
    }

private:
    // Attributes
    int diabetesScore;

    // Method to get family history input
    void getFamilyHistory() {
        std::cout << "Enter the number of parents with diabetes: ";
        int parentDiabetesCount;
        std::cin >> parentDiabetesCount;

        std::cout << "Enter the number of grandparents with diabetes: ";
        int grandparentDiabetesCount;
        std::cin >> grandparentDiabetesCount;

        // Assign scores based on family history
        diabetesScore = parentDiabetesCount * 2 + grandparentDiabetesCount;
    }

    // Method to calculate diabetes score
    void calculateDiabetesScore() {
        // You can customize the scoring system based on more detailed genetic information
        // Here, we are using a simple scoring system: 2 points for each affected parent and 1 point for each affected grandparent
    }

    // Method to display the result
    void displayResult() {
        std::cout << "Diabetes Score: " << diabetesScore << std::endl;

        // Determine the likelihood based on the score (you can customize this based on your scoring system)
        if (diabetesScore >= 4) {
            std::cout << "High likelihood of diabetes. Consult a healthcare professional." << std::endl;
        } else if (diabetesScore >= 2) {
            std::cout << "Moderate likelihood of diabetes. Monitor your health regularly." << std::endl;
        } else {
            std::cout << "Low likelihood of diabetes. Maintain a healthy lifestyle." << std::endl;
        }
    }
};

int main() {
    PedigreeAnalysis analysis;
    analysis.performAnalysis();

    return 0;
}
