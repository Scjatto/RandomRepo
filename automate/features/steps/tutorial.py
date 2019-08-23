from behave import *

@given("we have behave installed")
def step_impl(context):
    pass

@when("we implement a test")
def step_impl(context):
    assert True is not False

@then("behave will test for us")
def step_impl(context):
    assert context.failed is False

@then("celebrate")
def step_impl(context):
    assert context.failed is False
