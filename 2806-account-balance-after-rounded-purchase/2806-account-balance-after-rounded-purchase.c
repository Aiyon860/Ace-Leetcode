int accountBalanceAfterPurchase(int purchaseAmount){
    int roundedAmount = purchaseAmount % 10;
    
    if (roundedAmount < 5) {
        purchaseAmount -= roundedAmount;
    } else {
        purchaseAmount += (10 - roundedAmount);
    }
    
    return 100 - purchaseAmount;
}