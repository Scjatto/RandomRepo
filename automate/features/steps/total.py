from behave import *
from List import *

@given("we have behave installed")
def step_impl(context):
    pass

@given('I have the list')
def step_impl(context):
        context.list = List()

@when("we implement a test")
def step_impl(context):
    assert True is not False

@when('I spend Rupees {money:d}')
def step_impl(context,money):
        context.list_product = context.list.cost(money)

@then("behave will test for us")
def step_impl(context):
    assert context.failed is False

@then("celebrate")
def step_impl(context):
    assert context.failed is False


@then('I can buy {product}')
def step_impl(context,product):
    assert (context.list_product == product)