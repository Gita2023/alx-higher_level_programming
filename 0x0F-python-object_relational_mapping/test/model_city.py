#!/usr/bin/python3
"""Defines a city model
    Inherits from the SQLAlchemy Base and links to the MYSQL cities table.
"""
from sqlalchemy import Column, Integer, String, ForeignKey
from sqlalchemy.ext.declarative import declarative_base


Base = declarative_base()


class City(Base):
    """ Represents a city for a MYSQL database.
    id (sqlalchemy.Integer): The cities id.

