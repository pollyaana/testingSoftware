[![CI/CD GitHub Actions](https://github.com/pollyaana/testingSoftware/actions/workflows/test-action.yml/badge.svg)](https://github.com/pollyaana/testingSoftware/actions/workflows/test-action.yml)
[![Coverage Status](https://coveralls.io/repos/github/pollyaana/testingSoftware/badge.svg)](https://coveralls.io/github/pollyaana/testingSoftware)
[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=pollyaana_testingSoftware&metric=alert_status)](https://sonarcloud.io/summary/new_code?id=pollyaana_testingSoftware)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=pollyaana_testingSoftware&metric=bugs)](https://sonarcloud.io/summary/new_code?id=pollyaana_testingSoftware)
[![Code Smells](https://sonarcloud.io/api/project_badges/measure?project=pollyaana_testingSoftware&metric=code_smells)](https://sonarcloud.io/summary/new_code?id=pollyaana_testingSoftware)
# План тестирования
1. Тест А1 (Позитивный)<br/>
   Тест проверяет: Вычисление корней квадратного уравнения, если дискриминант больше нуля.<br/>
   Входные данные: a = 1, b = -4, b = -5<br/>
   Ожидаемый результат: "5 -1"<br/>
2. Тест А2 (Позитивный)<br/>
   Тест проверяет: Вычисление корней квадратного уравнения, если дискриминант больше нуля.<br/>
   Входные данные: a = 1, b = -3, b = 2<br/>
   Ожидаемый результат: "2 1"<br/>
3. Тест А3 (Позитивный)<br/>
   Тест проверяет: Вычисление корней квадратного уравнения, если дискриминант равен нулю.<br/>
   Входные данные: a = 1, b = -2, b = 1<br/>
   Ожидаемый результат: "1"<br/>
4. Тест А4 (Позитивный)<br/>
   Тест проверяет: Вычисление корней квадратного уравнения, если дискриминант равен нулю.<br/>
   Входные данные: a = 1, b = 12, b = 36<br/>
   Ожидаемый результат: "-6"<br/
5. Тест А5 (Позитивный)<br/>
   Тест проверяет: Вычисление корней квадратного уравнения, если дискриминант меньше нуля.<br/>
   Входные данные: a = 2, b = 1, b = 1<br/>
   Ожидаемый результат: "Нет корней"<br/
6 Тест А6 (Позитивный)<br/>
   Тест проверяет: Вычисление корней квадратного уравнения, если все коэффциенты равны нулю.<br/>
   Входные данные: a = 0, b = 0, b = 0<br/>
   Ожидаемый результат: "Бесконечное число решений"<br/

