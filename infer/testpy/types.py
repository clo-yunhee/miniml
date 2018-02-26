#!/usr/bin/python3

from pygments import highlight
from pygments.lexers import PythonLexer
from pygments.formatters import Terminal256Formatter
from pprint import pformat

def pprint(obj):
    print(highlight(pformat(obj), PythonLexer(), Terminal256Formatter()))

addint = lambda x, y: x + y
mulint = lambda x, y: x * y

svenv = { "+": addint, "*": mulint }
stenv = { "+": ("FUN", ["int", "int"], "int"),
          "*": ("FUN", ["int", "int"], "int") }

def compute(venv, expr):
    typex = expr[0]
    content = expr[1:]

    if typex is "LET":
        name, body = content
        (_, value) = compute(venv, body)
        return { name: value, **venv }, value
    elif typex is "APP":
        fnexp, args = content

        (_, fun) = compute(venv, fnexp)

        value = fun(*args)

        return venv, value
    elif typex is "VAR":
        return venv, venv[content[0]]
    else:
        value = "<error>"


def flatten(tree):
    l = [tree]
    if isinstance(tree, tuple):
        for elem in tree[1:]:
            l.extend(flatten(elem)) # tree and its children
    return l


def typeinfer(expr):
    flat = flatten(expr)

    # annotate each node with a placeholder type
    # (index, expression, type)
    annotated = [(i, x, ("POLY", i)) for i, x in enumerate(flat)]

     




    return annotated


#      Let
#  "a"     App
#        "+" 2 2
expr = ("LET", "b", ("APP", ("VAR", "+"), [1, 2]))

pprint(typeinfer(expr))

#pprint(compute(svenv, expr))
