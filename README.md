# M1_scientific_calculator

# badges
* Codacy - Static code analysis
  [![Codacy Badge](https://app.codacy.com/project/badge/Grade/82b2a5f4e2264feea6cece28cdb7caab)](https://www.codacy.com/gh/Amangarg99/M1_scientific_calculator/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Amangarg99/M1_scientific_calculator&amp;utm_campaign=Badge_Grade)

* Codiga - Static code analysis
![Quality](https://api.codiga.io/project/32133/score/svg)





Build | Code Quality | Unity | [Git Inspector](using github.io option)
------|----------|-------|--------------
[![C/C++ CI](https://github.com/Amangarg99/M1_scientific_calculator/actions/workflows/c-build.yml/badge.svg)](https://github.com/Amangarg99/M1_scientific_calculator/actions/workflows/c-build.yml)| [![Static Cppcheck](https://github.com/Amangarg99/M1_scientific_calculator/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/Amangarg99/M1_scientific_calculator/actions/workflows/cppcheck.yml) [![Dynamic Valgrind](https://github.com/Amangarg99/M1_scientific_calculator/actions/workflows/CodeQuality_Dynamic.yml/badge.svg)](https://github.com/Amangarg99/M1_scientific_calculator/actions/workflows/CodeQuality_Dynamic.yml)| [![Unity - Unit Testing](https://github.com/Amangarg99/M1_scientific_calculator/actions/workflows/unity.yml/badge.svg)](https://github.com/Amangarg99/M1_scientific_calculator/actions/workflows/unity.yml)|[![Git Inspector](https://github.com/Amangarg99/M1_scientific_calculator/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/Amangarg99/M1_scientific_calculator/actions/workflows/gitinspector.yml)


## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`0_Certificates`   | All certificates
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_TestPlanAndOutput`      | Documents with test plans and procedures
`5_Report` | All README in one place
`6_Video` | Project explanation video


## Challenges Faced and How Was It Overcome

1. `Issue while running Makefile` - make sure you have included all the files with .o extension and also include correct path for unity and test file
2. `Issue with workflows` - Check you folder structure where all the unity and makefile is present and include the path correctly
3. `Isuue with workflows(Valgrind)`- Here the chances are that you will get some error because of few missing updates . so you can try with this command which i   have mentioned below
  ## run: |
        sudo apt-get update
        sudo apt-get -y install valgrind --fix-missing
        sudo apt-get -y install libcunit1 libcunit1-doc libcunit1-dev --fix-missing
        
 
 ## Learning Resources
1. [markdownCheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
2. [github workflow](https://docs.github.com/en/actions/learn-github-action)


