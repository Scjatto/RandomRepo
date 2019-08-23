from behave import *
from List import *

@given('I have the list')
def step_impl(context):
        context.list = List()

@when('I spend Rupees {money:d}')
def step_impl(context,money):
        context.list_product = context.list.cost(money)
    


@then('I can buy {product}')
def step_impl(context,product):
    assert (context.list_product == product)
