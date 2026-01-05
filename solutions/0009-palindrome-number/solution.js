/**
 * @param {number} x
 * @return {boolean}
 */

function reversed(num) {
    let rev = 0;
    let temp = num;

    while (temp !== 0) {
        let digit = temp % 10;
        rev = rev * 10 + digit;
        temp = Math.floor(temp / 10);
    }

    return rev;
}

var isPalindrome = function (x) {
    if (x < 0) return false;

    return x === reversed(x);
};

