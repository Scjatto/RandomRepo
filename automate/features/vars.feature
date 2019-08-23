Feature: Intro to vars
    Scenario Outline: Going to shop
        Given I have the list
        When I spend Rupees <money>
        Then I can buy <product>

    Examples:
    | money | product     |
    | 10    | choclate    |
    | 50    | Biscuits    |
    | 100   | Canned Food |    