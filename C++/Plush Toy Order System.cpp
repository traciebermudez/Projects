#include <iostream>
#include <cstring>
using namespace std;

class PlushToy
{
public:
  int calcProductionDays(int orderedPlushies)
  {
    const int plushiesPerHour = 12;
    const int hoursPerShift = 8;
    const int shiftsPerDay = 2;

    int dailyProductionCapacity = plushiesPerHour * hoursPerShift * shiftsPerDay;
    int totalDays = (orderedPlushies + dailyProductionCapacity - 1) / dailyProductionCapacity;
    return totalDays;
  }

  double calcTotalCost(int orderedPlushies)
  {
    const double costPerPlushie = 6.0;
    return orderedPlushies * costPerPlushie;
  }

  double calcManufacturerIncome(int orderedPlushies)
  {
    const double manufacturerPrice = 15.0;
    return orderedPlushies * manufacturerPrice;
  }

  double calcBuyerIncome(int orderedPlushies)
  {
    const double msrp = 20.0;
    return orderedPlushies * msrp;
  }
};

int main()
{
  PlushToy plushToy;
  const int MAX_LENGTH = 100;

  char buyerName[MAX_LENGTH];
  char buyerAddress[MAX_LENGTH];
  int orderedPlushies;

  cout << "-----------------Buyer Information-------------\n";

  cout << "Enter Buyer's Name: \n";
  cin >> buyerName;

  cout << "Enter Buyer's Address: \n";
  cin >> buyerAddress;

  cout << "Enter Number of Plushies Ordered: \n";
  cin >> orderedPlushies;

  int productionDays = plushToy.calcProductionDays(orderedPlushies);
  double totalCost = plushToy.calcTotalCost(orderedPlushies);
  double manufacturerIncome = plushToy.calcManufacturerIncome(orderedPlushies);
  double buyerIncome = plushToy.calcBuyerIncome(orderedPlushies);

  cout << "-----------------Order Summary-----------------\n";
  cout << "\tBuyer's Name: " << buyerName << endl;
  cout << "\tBuyer's Address: " << buyerAddress << endl;
  cout << "\tNumber of Plushies Ordered: " << orderedPlushies << endl;
  cout << "\tProduction Days: " << productionDays << endl;
  cout << "\tTotal Cost to Produce: $" << totalCost << endl;
  cout << "\tCost for Buyer: $" << manufacturerIncome << endl;
  cout << "\tTotal Buyer Income (MSRP): $" << buyerIncome << endl;

  return 0;
}