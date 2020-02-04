#include <stdio.h>

int main(void)
{
  int num_shares, price_per_share, value;
  float broker_commission, rival_commission;

  printf("\nEnter the number of shares: ");
  scanf("%d", &num_shares);

  printf("Enter the price per share: ");
  scanf("%d", &price_per_share);

  value = num_shares * price_per_share;

  if(num_shares < 2000)
    rival_commission = 33.00f + (0.03f * num_shares);
  else
    rival_commission = 33.00f + (0.02f * num_shares);

  if (value < 2500.00f)
    broker_commission = 30.00f + .017f * value;
  else if (value < 6250.00f)
    broker_commission = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    broker_commission = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    broker_commission = 100.00f + .0022f * value;
  else if (value < 500000.00f)
    broker_commission = 155.00f + .0011f * value;
  else
    broker_commission = 255.00f + .0009f * value;

  if (broker_commission < 39.00f)
    broker_commission = 39.00f;

  printf("Rival's Commission: $%.2f\nBroker's commission: $%.2f\n", broker_commission,rival_commission);

  return 0;
}
