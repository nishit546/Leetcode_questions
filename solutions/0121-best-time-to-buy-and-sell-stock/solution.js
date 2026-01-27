/**
 * @param {number[]} price
 * @return {number}
 */
var maxProfit = function(price) {
  let min = price[0];
  let profit = 0;
  for(let i = 0;i<price.length;i++){
    if(price[i] < min){
        min = price[i];
    }
    else{
        profit =  Math.max(profit,price[i] - min)
    }
  }
    return profit;
}


