# Graph Report - .  (2026-05-17)

## Corpus Check
- Corpus is ~24,301 words - fits in a single context window. You may not need a graph.

## Summary
- 869 nodes · 1019 edges · 72 communities (57 shown, 15 thin omitted)
- Extraction: 90% EXTRACTED · 10% INFERRED · 0% AMBIGUOUS · INFERRED: 100 edges (avg confidence: 0.86)
- Token cost: 288,586 input · 72,144 output

## Community Hubs (Navigation)
- [[_COMMUNITY_ClapTrap Hierarchy & Exceptions|ClapTrap Hierarchy & Exceptions]]
- [[_COMMUNITY_Bureaucrat & Concrete Forms (ex02)|Bureaucrat & Concrete Forms (ex02)]]
- [[_COMMUNITY_PhoneBook & 42 Header|PhoneBook & 42 Header]]
- [[_COMMUNITY_Animal Polymorphism (Basic)|Animal Polymorphism (Basic)]]
- [[_COMMUNITY_Dynamic Cast & Identify|Dynamic Cast & Identify]]
- [[_COMMUNITY_Zombie Heap & Fixed Basics|Zombie Heap & Fixed Basics]]
- [[_COMMUNITY_Harl Dispatcher & Trap Methods|Harl Dispatcher & Trap Methods]]
- [[_COMMUNITY_Heap Allocation & Iteration|Heap Allocation & Iteration]]
- [[_COMMUNITY_Module 09 STL Subject|Module 09 STL Subject]]
- [[_COMMUNITY_Bureaucrat & Form (ex01)|Bureaucrat & Form (ex01)]]
- [[_COMMUNITY_Function Templates & STL|Function Templates & STL]]
- [[_COMMUNITY_Animal + Brain (Deep Copy)|Animal + Brain (Deep Copy)]]
- [[_COMMUNITY_Serializer & Pointer Casts|Serializer & Pointer Casts]]
- [[_COMMUNITY_Abstract Animal Hierarchy|Abstract Animal Hierarchy]]
- [[_COMMUNITY_Bank Account (Static Members)|Bank Account (Static Members)]]
- [[_COMMUNITY_ClapTrap + ScavTrap Inheritance|ClapTrap + ScavTrap Inheritance]]
- [[_COMMUNITY_Reference vs Pointer (Weapon)|Reference vs Pointer (Weapon)]]
- [[_COMMUNITY_Zombie Heap vs Stack|Zombie Heap vs Stack]]
- [[_COMMUNITY_Scalar Type Conversion|Scalar Type Conversion]]
- [[_COMMUNITY_ClapTrap Basics (ex00)|ClapTrap Basics (ex00)]]
- [[_COMMUNITY_Fixed Point Operators|Fixed Point Operators]]
- [[_COMMUNITY_Intern Factory & Shrubbery|Intern Factory & Shrubbery]]
- [[_COMMUNITY_Fixed Point Constructors|Fixed Point Constructors]]
- [[_COMMUNITY_WrongAnimal (Deep Copy)|WrongAnimal (Deep Copy)]]
- [[_COMMUNITY_WrongAnimal (Abstract)|WrongAnimal (Abstract)]]
- [[_COMMUNITY_Bureaucrat (ex03)|Bureaucrat (ex03)]]
- [[_COMMUNITY_Memory & 42 AI Policy|Memory & 42 AI Policy]]
- [[_COMMUNITY_AForm Methods (ex03)|AForm Methods (ex03)]]
- [[_COMMUNITY_Fixed Canonical Form|Fixed Canonical Form]]
- [[_COMMUNITY_Bureaucrat Header (ex03)|Bureaucrat Header (ex03)]]
- [[_COMMUNITY_PhoneBook Circular Buffer|PhoneBook Circular Buffer]]
- [[_COMMUNITY_WrongAnimal Files (ex01)|WrongAnimal Files (ex01)]]
- [[_COMMUNITY_Fixed-Point Concepts|Fixed-Point Concepts]]
- [[_COMMUNITY_Fixed FloatInt Conversion|Fixed Float/Int Conversion]]
- [[_COMMUNITY_AForm Execute|AForm Execute]]
- [[_COMMUNITY_Presidential Pardon Form|Presidential Pardon Form]]
- [[_COMMUNITY_Robotomy Request Form|Robotomy Request Form]]
- [[_COMMUNITY_Settings Hooks|Settings Hooks]]
- [[_COMMUNITY_Local Permissions|Local Permissions]]
- [[_COMMUNITY_Project Docs|Project Docs]]
- [[_COMMUNITY_Forward Declaration|Forward Declaration]]
- [[_COMMUNITY_Trap Assignment Operators|Trap Assignment Operators]]
- [[_COMMUNITY_Search and Replace (File IO)|Search and Replace (File IO)]]
- [[_COMMUNITY_Pointer vs Reference|Pointer vs Reference]]
- [[_COMMUNITY_Base Class (ex02)|Base Class (ex02)]]
- [[_COMMUNITY_Fixed setRawBits|Fixed setRawBits]]
- [[_COMMUNITY_Animal Assignment|Animal Assignment]]
- [[_COMMUNITY_Brain Assignment|Brain Assignment]]
- [[_COMMUNITY_Bureaucrat hpp Fragment|Bureaucrat hpp Fragment]]
- [[_COMMUNITY_AForm hpp Fragment|AForm hpp Fragment]]
- [[_COMMUNITY_Presidential hpp Fragment|Presidential hpp Fragment]]
- [[_COMMUNITY_Shrubbery hpp Fragment|Shrubbery hpp Fragment]]
- [[_COMMUNITY_Robotomy hpp Fragment|Robotomy hpp Fragment]]
- [[_COMMUNITY_Intern Class|Intern Class]]
- [[_COMMUNITY_Serializer Class|Serializer Class]]

## God Nodes (most connected - your core abstractions)
1. `Account` - 19 edges
2. `Contact` - 17 edges
3. `C++ Module 09: STL` - 17 edges
4. `main()` - 12 edges
5. `AForm` - 12 edges
6. `AForm()` - 12 edges
7. `class AForm (abstract)` - 12 edges
8. `main()` - 11 edges
9. `PhoneBook` - 10 edges
10. `main()` - 10 edges

## Surprising Connections (you probably didn't know these)
- `complain()` --semantically_similar_to--> `ClapTrap::attack`  [INFERRED] [semantically similar]
  cpp_01/ex05/Harl.cpp → /home/rbagin/cpp_42/cpp_03/ex00/ClapTrap.cpp
- `cpp_07 subject` --rationale_for--> `swap()`  [INFERRED]
  /home/rbagin/cpp_42/cpp_07/en.subject (7).pdf → cpp_07/ex00/whatever.hpp
- `Claude project settings hooks` --conceptually_related_to--> `CLAUDE.md project graphify rules`  [INFERRED]
  .claude/settings.json → CLAUDE.md
- `cpp_02 subject` --references--> `Orthodox Canonical Form (Rule of Three)`  [INFERRED]
  /home/rbagin/cpp_42/cpp_02/en.subject (2).pdf → .github/copilot-instructions.md
- `Fixed (ex00)` --implements--> `Orthodox Canonical Form (Rule of Three)`  [INFERRED]
  /home/rbagin/cpp_42/cpp_02/ex00/Fixed.hpp → .github/copilot-instructions.md

## Hyperedges (group relationships)
- **AI-as-tutor policy (no direct answers, explanatory, career relevance)** — memory_feedback_42_ai_policy, memory_feedback_no_direct_answers, memory_feedback_response_style, memory_feedback_career_relevance [INFERRED 0.85]
- **C++20 build/clean workflow at Codam** — memory_project_codam_cpp_standard, memory_feedback_cpp20_makefiles, memory_feedback_make_fclean [INFERRED 0.85]
- **PhoneBook search flow (table + per-contact display)** — cpp_00_ex01_phonebook_searchcontact, cpp_00_ex01_phonebook_displaytable, cpp_00_ex01_phonebook_displaycontact, cpp_00_ex01_phonebook_truncate [EXTRACTED 1.00]
- **Heap vs stack Zombie allocation** — cpp01_ex00_newzombie, cpp01_ex00_randomchump, concept_heap_vs_stack_allocation [INFERRED 0.95]
- **Human-Weapon aggregation (ref vs ptr)** — cpp01_ex03_humana_hpp, cpp01_ex03_humanb_hpp, cpp01_ex03_weapon_hpp [EXTRACTED 1.00]
- **Zombie class across ex00/ex01** — cpp01_ex00_zombie_hpp, cpp01_ex01_zombie_hpp, cpp01_ex01_zombiehorde [INFERRED 0.85]
- **Fixed class progressive enhancement across ex00/ex01/ex02** — ex00_cpp02_fixed_class, ex01_cpp02_fixed_class, ex02_cpp02_fixed_class [INFERRED 0.95]
- **Orthodox Canonical Form members** — ex00_cpp02_fixed_default_ctor, ex00_cpp02_fixed_copy_ctor, ex00_cpp02_fixed_assign, ex00_cpp02_fixed_class [INFERRED 0.95]
- **ClapTrap base and ScavTrap derived inheritance hierarchy** — ex01_cpp03_claptrap_class, ex01_cpp03_scavtrap_class, concept_inheritance [EXTRACTED 1.00]
- **ClapTrap/ScavTrap/FragTrap inheritance chain** — ex02_claptrap_class, ex02_scavtrap_class, ex02_fragtrap_class [EXTRACTED 1.00]
- **Animal/Cat/Dog polymorphic set** — ex00_animal_class, ex00_cat_class, ex00_dog_class [EXTRACTED 1.00]
- **WrongAnimal/WrongCat static dispatch contrast** — ex00_wronganimal_class, ex00_wrongcat_class, concept_wrong_polymorphism [INFERRED 0.85]
- **ex01 Animal Hierarchy with Brain** — ex01_cat_hpp, ex01_dog_hpp, ex01_brain_hpp [INFERRED 0.85]
- **ex02 Abstract Animal Hierarchy** — ex02_animal_hpp, ex02_cat_hpp, ex02_dog_hpp [INFERRED 0.85]
- **WrongAnimal non-virtual sound demo** — ex01_wronganimal_hpp, ex01_wrongcat_hpp, ex02_wronganimal_hpp [INFERRED 0.75]
- **Concrete forms implement AForm** — ex02_presidential_class, ex02_shrubbery_class, ex02_robotomy_class [EXTRACTED 1.00]
- **Bureaucrat-Form signing interaction** — ex01_bureaucrat_class, ex01_form_class, concept_forward_decl [INFERRED 0.85]
- **AForm polymorphic execute pipeline** — ex02_bureaucrat_class, ex02_aform_class, concept_abstract_class [INFERRED 0.85]
- **Concrete forms inherit AForm** — ex03_presidentialpardonform_class, ex03_robotomyrequestform_class, ex03_shrubberycreationform_class [EXTRACTED 1.00]
- **Intern factory creates three form types** — ex03_intern_makeform, ex03_intern_factory_pattern, ex03_aform_class [INFERRED 0.85]
- **Pointer serialization roundtrip** — ex01_serializer_serialize, ex01_serializer_deserialize, ex01_data_struct [EXTRACTED 1.00]
- **Literal detection and conversion pipeline** — ex00_scalarconverter_convert, ex00_scalarconverter_detecttype, ex00_literaltype_enum [EXTRACTED 1.00]
- **Polymorphic identify (A/B/C via Base)** — ex02_a_class, ex02_b_class, ex02_c_class [EXTRACTED 1.00]
- **cpp_07 template exercises (whatever/iter/Array)** — ex00_whatever_swap, ex01_iter_func, ex02_array_class [INFERRED 0.85]
- **cpp_08 STL container exercises** — ex00_easyfind_func, ex01_span_class, ex02_mutantstack_class [INFERRED 0.85]
- **Module 09 STL Exercises** — cpp_09_subject_ex00_bitcoin_exchange, cpp_09_subject_ex01_rpn, cpp_09_subject_ex02_pmergeme [EXTRACTED 1.00]
- **PmergeMe Algorithmic Foundations** — cpp_09_subject_merge_insert_sort, cpp_09_subject_ford_johnson_algorithm, cpp_09_subject_art_of_computer_programming [EXTRACTED 1.00]
- **General C++ Module Rules** — cpp_09_subject_compile_flags, cpp_09_subject_cpp98_standard, cpp_09_subject_orthodox_canonical_form [EXTRACTED 1.00]
- **STL Usage Constraints** — cpp_09_subject_stl_containers, cpp_09_subject_stl_algorithms, cpp_09_subject_container_uniqueness_rule [EXTRACTED 1.00]

## Communities (72 total, 15 thin omitted)

### Community 0 - "ClapTrap Hierarchy & Exceptions"
Cohesion: 0.05
Nodes (43): Exception-driven validation, cpp_05 subject PDF, class Bureaucrat (ex00), Bureaucrat impl (ex00), Bureaucrat header (ex00), Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException, class Bureaucrat (ex01) (+35 more)

### Community 1 - "Bureaucrat & Concrete Forms (ex02)"
Cohesion: 0.05
Nodes (33): AForm, action, beSigned, execute, getGradeEx, getGradeS, getIsSigned, gradeToExecute (+25 more)

### Community 2 - "PhoneBook & 42 Header"
Cohesion: 0.05
Nodes (32): 42 C++ Modules Project Instructions (Copilot), 42 school file header format, cpp_00 subject PDF, Contact, _darkestSecret, _firstName, getDarkestSecret, getFirstName (+24 more)

### Community 3 - "Animal Polymorphism (Basic)"
Cohesion: 0.05
Nodes (35): Diamond problem / multi-level inheritance, Runtime polymorphism via virtual functions, Non-virtual base demonstrates static dispatch (WrongAnimal contrast), Animal, getType, makeSound, type, Animal (ex00) (+27 more)

### Community 4 - "Dynamic Cast & Identify"
Cohesion: 0.07
Nodes (22): dynamic_cast / RTTI, ~A(), A, A::~A, Array, data, size, sizeN (+14 more)

### Community 5 - "Zombie Heap & Fixed Basics"
Cohesion: 0.06
Nodes (17): Bureaucrat, decrementGrade, getGrade, grade, incrementGrade, name, Fixed, fractionalBits (+9 more)

### Community 6 - "Harl Dispatcher & Trap Methods"
Cohesion: 0.08
Nodes (29): Class inheritance, Member function pointer dispatch, cpp_03 subject, ClapTrap::attack, ClapTrap::beRepaired, ClapTrap (ex00), ClapTrap::getHitPoints, ClapTrap::takeDamage (+21 more)

### Community 7 - "Heap Allocation & Iteration"
Cohesion: 0.07
Nodes (13): iter(), main(), Span, addNumber, longestSpan, N, shortestSpan, v (+5 more)

### Community 8 - "Module 09 STL Subject"
Cohesion: 0.07
Nodes (30): AI Instructions (Learning Tool Only), The Art of Computer Programming, Vol.3 (Knuth), Bjarne Stroustrup, Closest Lower Date Lookup, Compile Flags -Wall -Wextra -Werror, Container Uniqueness Rule (once used, never reused), C++98 Standard, CSV Database (bitcoin price over time) (+22 more)

### Community 9 - "Bureaucrat & Form (ex01)"
Cohesion: 0.08
Nodes (17): Bureaucrat, decrementGrade, getGrade, grade, incrementGrade, name, signForm, Bureaucrat (+9 more)

### Community 10 - "Function Templates & STL"
Cohesion: 0.09
Nodes (28): Class template, Function template, Iterator exposure / std::stack subclassing, STL algorithms (std::find), easyfind<T>, main (cpp08 ex00), main (cpp07 ex00), max() (+20 more)

### Community 11 - "Animal + Brain (Deep Copy)"
Cohesion: 0.09
Nodes (14): Animal, getType, makeSound, type, Brain, ideas, Cat, brain (+6 more)

### Community 12 - "Serializer & Pointer Casts"
Cohesion: 0.1
Nodes (25): Abstract Class (Pure Virtual), Deep Copy, Runtime Polymorphism, reinterpret_cast, Brain (ex01), Cat impl (ex01), Cat (ex01), Data (+17 more)

### Community 13 - "Abstract Animal Hierarchy"
Cohesion: 0.09
Nodes (14): Animal, getType, makeSound, type, Brain, ideas, Cat, brain (+6 more)

### Community 14 - "Bank Account (Static Members)"
Cohesion: 0.08
Nodes (23): Static class members, PhoneBook REPL main, Account, _accountIndex, _amount, checkAmount, displayAccountsInfos, displayStatus (+15 more)

### Community 15 - "ClapTrap + ScavTrap Inheritance"
Cohesion: 0.09
Nodes (12): ClapTrap, attack, attackDamage, beRepaired, energyPoints, getHitPoints, hitPoints, name (+4 more)

### Community 16 - "Reference vs Pointer (Weapon)"
Cohesion: 0.11
Nodes (11): HumanA(), attack, _name, HumanB, attack, _name, setWeapon, _weapon (+3 more)

### Community 17 - "Zombie Heap vs Stack"
Cohesion: 0.13
Nodes (21): Aggregation vs composition, Heap vs Stack allocation, Brain ex00 main, newZombie (heap allocator), randomChump (stack allocator), Zombie impl (ex00), Zombie class (ex00), zombieHorde main (+13 more)

### Community 18 - "Scalar Type Conversion"
Cohesion: 0.13
Nodes (16): Scalar type conversion (char/int/float/double), LiteralType enum, ex00 main.cpp, ScalarConverter, convert(), detectType(), isValidFloatOrDouble(), ScalarConverter() (+8 more)

### Community 19 - "ClapTrap Basics (ex00)"
Cohesion: 0.13
Nodes (9): ClapTrap, attack, attackDamage, beRepaired, energyPoints, getHitPoints, hitPoints, name (+1 more)

### Community 20 - "Fixed Point Operators"
Cohesion: 0.16
Nodes (11): Fixed, fractionalBits, getRawBits, operator<, rawBits, setRawBits, toFloat, toInt (+3 more)

### Community 21 - "Intern Factory & Shrubbery"
Cohesion: 0.17
Nodes (7): Bureaucrat, Intern(), makeForm, main(), ShrubberyCreationForm(), action, target

### Community 22 - "Fixed Point Constructors"
Cohesion: 0.15
Nodes (7): Fixed, fractionalBits, getRawBits, rawBits, setRawBits, toFloat, toInt

### Community 23 - "WrongAnimal (Deep Copy)"
Cohesion: 0.18
Nodes (6): WrongAnimal, getType, makeSound, type, WrongCat, makeSound

### Community 24 - "WrongAnimal (Abstract)"
Cohesion: 0.18
Nodes (6): WrongAnimal, getType, makeSound, type, WrongCat, makeSound

### Community 25 - "Bureaucrat (ex03)"
Cohesion: 0.18
Nodes (7): beSigned(), Bureaucrat, executeForm(), Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException, signForm(), ex03 main.cpp

### Community 26 - "Memory & 42 AI Policy"
Cohesion: 0.27
Nodes (12): Memory Index, Claude local permissions settings, 42 AI usage policy, Career relevance in responses, Use -std=c++20 in cpp_42 Makefiles, Always make fclean after testing, No direct answers — guide instead, Response style — learning/explanatory (+4 more)

### Community 27 - "AForm Methods (ex03)"
Cohesion: 0.18
Nodes (11): AForm(), action, beSigned, execute, getGradeEx, getGradeS, getIsSigned, gradeToExecute (+3 more)

### Community 28 - "Fixed Canonical Form"
Cohesion: 0.24
Nodes (10): Fixed::operator=, Fixed copy ctor, Fixed::Fixed() default ctor, Fixed::getRawBits, main (cpp_02/ex00), Fixed arithmetic operators (+,-,*,/), Fixed comparison operators, Fixed pre/post inc/dec (+2 more)

### Community 29 - "Bureaucrat Header (ex03)"
Cohesion: 0.2
Nodes (9): AForm, Bureaucrat(), decrementGrade, executeForm, getGrade, grade, incrementGrade, name (+1 more)

### Community 30 - "PhoneBook Circular Buffer"
Cohesion: 0.25
Nodes (8): 8-slot circular buffer for contacts, Contact class, PhoneBook::addContact, PhoneBook class, PhoneBook::_displayContact, PhoneBook::_displayTable, PhoneBook::searchContact, PhoneBook::_truncate

### Community 31 - "WrongAnimal Files (ex01)"
Cohesion: 0.29
Nodes (8): WrongAnimal impl (ex01), WrongAnimal (ex01), WrongCat impl (ex01), WrongCat (ex01), WrongAnimal impl (ex02), WrongAnimal (ex02), WrongCat impl (ex02), WrongCat (ex02)

### Community 32 - "Fixed-Point Concepts"
Cohesion: 0.43
Nodes (7): Fixed-point arithmetic, Operator overloading, Orthodox Canonical Form (Rule of Three), cpp_02 subject, Fixed (ex00), Fixed (ex01), Fixed (ex02)

### Community 33 - "Fixed Float/Int Conversion"
Cohesion: 0.33
Nodes (6): Fixed(float), Fixed(int), operator<<(ostream, Fixed), Fixed::toFloat, Fixed::toInt, main (cpp_02/ex01)

### Community 34 - "AForm Execute"
Cohesion: 0.47
Nodes (4): execute(), getGradeEx(), getIsSigned(), action()

### Community 35 - "Presidential Pardon Form"
Cohesion: 0.4
Nodes (4): action(), PresidentialPardonForm(), action, target

### Community 36 - "Robotomy Request Form"
Cohesion: 0.4
Nodes (4): action(), RobotomyRequestForm(), action, target

### Community 39 - "Project Docs"
Cohesion: 0.67
Nodes (3): Claude project settings hooks, CLAUDE.md project graphify rules, cpp_42 README

### Community 40 - "Forward Declaration"
Cohesion: 0.67
Nodes (3): Forward declaration (mutual class deps), Bureaucrat header (ex01), Form header (ex01)

### Community 41 - "Trap Assignment Operators"
Cohesion: 0.67
Nodes (3): ClapTrap::operator=, FragTrap::operator=, ScavTrap::operator=

## Knowledge Gaps
- **327 isolated node(s):** `_firstName`, `_lastName`, `_nickname`, `_phoneNumber`, `_darkestSecret` (+322 more)
  These have ≤1 connection - possible missing edges or undocumented components.
- **15 thin communities (<3 nodes) omitted from report** — run `graphify query` to explore isolated nodes.

## Suggested Questions
_Questions this graph is uniquely positioned to answer:_

- **Why does `class AForm (abstract)` connect `ClapTrap Hierarchy & Exceptions` to `Scalar Type Conversion`, `Serializer & Pointer Casts`?**
  _High betweenness centrality (0.341) - this node is a cross-community bridge._
- **Why does `main()` connect `Heap Allocation & Iteration` to `PhoneBook & 42 Header`, `Bureaucrat & Form (ex01)`, `Animal + Brain (Deep Copy)`, `Serializer & Pointer Casts`, `ClapTrap + ScavTrap Inheritance`, `Fixed Point Constructors`?**
  _High betweenness centrality (0.259) - this node is a cross-community bridge._
- **Why does `Abstract Class (Pure Virtual)` connect `Serializer & Pointer Casts` to `ClapTrap Hierarchy & Exceptions`?**
  _High betweenness centrality (0.242) - this node is a cross-community bridge._
- **What connects `_firstName`, `_lastName`, `_nickname` to the rest of the system?**
  _331 weakly-connected nodes found - possible documentation gaps or missing edges._
- **Should `ClapTrap Hierarchy & Exceptions` be split into smaller, more focused modules?**
  _Cohesion score 0.05 - nodes in this community are weakly interconnected._
- **Should `Bureaucrat & Concrete Forms (ex02)` be split into smaller, more focused modules?**
  _Cohesion score 0.05 - nodes in this community are weakly interconnected._
- **Should `PhoneBook & 42 Header` be split into smaller, more focused modules?**
  _Cohesion score 0.05 - nodes in this community are weakly interconnected._