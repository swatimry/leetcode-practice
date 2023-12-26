/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    var a={
         "toBe":function(inval){
            if(val===inval){
                return true;
            }
            else{
                throw new Error("Not Equal");
            }
        },
     "notToBe":function(inval){
            if(val===inval){
                throw new Error("Equal");
            }
            else{
                return true;
            }
        }
    }
return a;
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */