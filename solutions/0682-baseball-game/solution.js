/**
 * @param {string[]} operations
 * @return {number}
 */
var calPoints = function(operations) {
    let res = [];
    let sum = 0;
    for(let i = 0;i<operations.length;i++){
        if(operations[i] === "+"){
            res.push(res[res.length - 1] + res[res.length-2]);
        }
        else if(operations[i] === "D"){
            res.push(res[res.length-1] * 2);
        }
        else if(operations[i] === "C"){
            res.pop();
        }
        else{
            res.push(Number(operations[i]));
        }

    }
    for(let i = 0;i<res.length;i++){
        sum += res[i];
    }
    return sum;
};
