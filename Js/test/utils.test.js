const chai = require("chai");
const { expect } = chai;
const { sum, subtract } = require("../utils");

describe("Utils", () => {
  describe("sum()", () => {
    it("should return correct sum of two numbers", () => {
      expect(sum(2, 3)).to.equal(5);
    });

    it("should work with negative numbers", () => {
      expect(sum(-2, -3)).to.equal(-5);
    });
  });

  describe("subtract()", () => {
    it("should return correct difference of two numbers", () => {
      expect(subtract(5, 3)).to.equal(2);
    });

    it("should work with negative numbers", () => {
      expect(subtract(-5, -2)).to.equal(-3);
    });
  });
});
