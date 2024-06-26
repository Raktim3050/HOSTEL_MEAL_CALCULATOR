#include <iostream>
using namespace std;
float maruf(float per_mealcost, float b_cost_maruf)
{
    system("color f4");
    float t_meal_maruf;
    cout << "\n\nENTER THE AMOUNT OF MEAL MARUF HAD: ";
    cin >> t_meal_maruf;
    float m_cost_maruf = t_meal_maruf * per_mealcost;
    cout << "THE MEAL COST OF MARUF IS: " << m_cost_maruf << " taka";
    if (b_cost_maruf > m_cost_maruf)
    {
        cout << "\nMARUF WILL GET: " << b_cost_maruf - m_cost_maruf << " taka";
    }
    else if (b_cost_maruf < m_cost_maruf)
    {
        cout << "\nMARUF WILL Pay: " << m_cost_maruf - b_cost_maruf << " taka";
    }
    else
    {
        cout << "\nNOT HAVE TO PAY";
    }
}

float raktim(float per_mealcost, float b_cost_raktim)
{
    system("color f4");
    float t_meal_raktim;
    cout << "\n\nENTER THE AMOUNT OF MEAL RAKTIM HAD: ";
    cin >> t_meal_raktim;
    float m_cost_raktim = t_meal_raktim * per_mealcost;
    cout << "THE MEAL COST OF RAKTIM IS: " << m_cost_raktim << " taka";

    if (b_cost_raktim > m_cost_raktim)
    {
        cout << "\nRAKTIM WILL GET: " << b_cost_raktim - m_cost_raktim << " taka";
    }
    else if (b_cost_raktim < m_cost_raktim)
    {
        cout << "\nRAKTIM WILL Pay: " << m_cost_raktim - b_cost_raktim << " taka";
    }
    else
    {
        cout << "\nNOT HAVE TO PAY";
    }
}

float ayon(float per_mealcost, float b_cost_ayon)
{
    system("color f4");
    float t_meal_ayon;
    cout << "\n\nENTER THE AMOUNT OF MEAL AYON HAD: ";
    cin >> t_meal_ayon;
    float m_cost_ayon = t_meal_ayon * per_mealcost;
    cout << "THE MEAL COST OF AYON IS: " << m_cost_ayon << " taka";
    if (b_cost_ayon > m_cost_ayon)
    {
        cout << "\nAYON WILL GET: " << b_cost_ayon - m_cost_ayon << " taka";
    }
    else if (b_cost_ayon < m_cost_ayon)
    {
        cout << "\nAYON WILL Pay: " << m_cost_ayon - b_cost_ayon << " taka";
    }
    else
    {
        cout << "\nNOT HAVE TO PAY";
    }
}

float tahmid(float per_mealcost, float b_cost_tahmid)
{
    system("color f4");
    float t_meal_tahmid;
    cout << "\n\nENTER THE AMOUNT OF MEAL TAHMID HAD: ";
    cin >> t_meal_tahmid;
    float m_cost_tahmid = t_meal_tahmid * per_mealcost;
    cout << "THE MEAL COST OF TAHMID IS: " << m_cost_tahmid << " taka";
    if (b_cost_tahmid > m_cost_tahmid)
    {
        cout << "\nTAHMID WILL GET: " << b_cost_tahmid - m_cost_tahmid << " taka";
    }
    else if (b_cost_tahmid < m_cost_tahmid)
    {
        cout << "\nTAHMID WILL Pay: " << m_cost_tahmid - b_cost_tahmid << " taka";
    }
    else
    {
        cout << "\nNOT HAVE TO PAY";
    }
}

int main()
{
    system("color 4f");
    cout << "*WELCOME TO THE MASS MEAL CALCULATOR SYSTEM*\n\n\n";
    float t_meal, t_bazarcost, b_cost_maruf, b_cost_raktim, b_cost_ayon, b_cost_tahmid;
    cout << "\nENTER THE AMOUNT OF TOTAL MEAL: ";
    cin >> t_meal;
    cout << "\nENTER THE AMOUNT OF TOTAL BAZAR COST: ";
    cin >> t_bazarcost;
    float per_mealcost = t_bazarcost / t_meal;
    cout << "$$$$$$$$$$$$$$$$$ THE PER MEAL COST is: " << per_mealcost << " taka $$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout << "\n\t\tENTER THE AMOUNT OF MARUF BAZAR COST: ";
    cin >> b_cost_maruf;
    cout << "\n\t\tENTER THE AMOUNT OF RAKTIM BAZAR COST: ";
    cin >> b_cost_raktim;
    cout << "\n\t\tENTER THE AMOUNT OF AYON BAZAR COST: ";
    cin >> b_cost_ayon;
    cout << "\n\t\tENTER THE AMOUNT OF TAHMID BAZAR COST: ";
    cin >> b_cost_tahmid;

    float maruf_amount = maruf(per_mealcost, b_cost_maruf);
    float raktim_amount = raktim(per_mealcost, b_cost_raktim);
    float ayon_amount = ayon(per_mealcost, b_cost_ayon);
    float tahmid_amount = tahmid(per_mealcost, b_cost_tahmid);
    cout << "\n\n\t\t\t\t\t*THANK YOU FOR USING MY PROGRAMME\n\n";
    return 0;
}