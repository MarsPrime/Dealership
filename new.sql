-- MySQL dump 10.13  Distrib 8.4.3, for Linux (x86_64)
--
-- Host: localhost    Database: Dealership
-- ------------------------------------------------------
-- Server version	8.4.3

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `Auto`
--

DROP TABLE IF EXISTS `Auto`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Auto` (
  `ID` int NOT NULL AUTO_INCREMENT,
  `Name` varchar(64) NOT NULL,
  `Mark` int NOT NULL,
  `ProductionDate` date NOT NULL,
  `Category` int NOT NULL,
  `Price` double NOT NULL,
  `Color` int NOT NULL,
  PRIMARY KEY (`ID`),
  KEY `Auto_ibfk_1` (`Mark`),
  KEY `Auto_ibfk_2` (`Category`),
  CONSTRAINT `Auto_ibfk_1` FOREIGN KEY (`Mark`) REFERENCES `AutoMark` (`ID`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `Auto_ibfk_2` FOREIGN KEY (`Category`) REFERENCES `Category` (`ID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Auto`
--

LOCK TABLES `Auto` WRITE;
/*!40000 ALTER TABLE `Auto` DISABLE KEYS */;
INSERT INTO `Auto` VALUES (1,'Focus',1,'2000-11-11',2,2300000,1),(2,'Vesta',3,'2012-09-09',1,1400000,1),(3,'Corvette',4,'2020-11-12',9,5000000,2),(4,'Evoque',5,'2014-10-01',7,4500000,3),(5,'CX5',6,'2015-09-09',4,2300000,4),(6,'Lancer Evo X',2,'2017-08-08',9,3000000,5),(7,'RSX',7,'2000-11-06',3,6000000,6),(8,'GNX',9,'1980-02-02',6,7000000,7),(9,'Camry',8,'2005-09-01',8,12000000,7);
/*!40000 ALTER TABLE `Auto` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `AutoMark`
--

DROP TABLE IF EXISTS `AutoMark`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `AutoMark` (
  `ID` int NOT NULL AUTO_INCREMENT,
  `Name` varchar(64) NOT NULL,
  `Facility` varchar(128) NOT NULL,
  `FacilityAddress` varchar(128) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `AutoMark`
--

LOCK TABLES `AutoMark` WRITE;
/*!40000 ALTER TABLE `AutoMark` DISABLE KEYS */;
INSERT INTO `AutoMark` VALUES (1,'Ford','FordFacility','635095, Тверская область, город Мытищи, пер. Гагарина, 46'),(2,'Mitsubishi','JapanCar','853926, Костромская область, город Дмитров, въезд 1905 года, 84'),(3,'Lada','LadaCenter','992991, Оренбургская область, город Орехово-Зуево, пр. Ладыгина, 97'),(4,'Chevrolet','ChevBuild','170568, Тверская область, город Ногинск, въезд Ломоносова, 04'),(5,'Range Rover',' RoverAuto','034972, Саратовская область, город Балашиха, пр. Косиора, 53'),(6,'Mazda','MazdaRus','531820, Омская область, город Талдом, проезд Космонавтов, 61'),(7,'Nissan','NisaanNihon','615686, Московская область, город Талдом, пр. Ленина, 26'),(8,'Toyota','MachineBiuild','570597, Сахалинская область, город Видное, шоссе Чехова, 27'),(9,'Buick','AmericanAuto','769974, Волгоградская область, город Домодедово, бульвар Балканская, 89');
/*!40000 ALTER TABLE `AutoMark` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Bill`
--

DROP TABLE IF EXISTS `Bill`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Bill` (
  `ID` int NOT NULL AUTO_INCREMENT,
  `Employee` int NOT NULL,
  `Client` int NOT NULL,
  `Auto` int NOT NULL,
  PRIMARY KEY (`ID`),
  KEY `Order_ibfk_3` (`Auto`),
  KEY `Order_ibfk_2` (`Employee`),
  KEY `Order_ibfk_1` (`Client`),
  CONSTRAINT `Bill_ibfk_1` FOREIGN KEY (`Client`) REFERENCES `User` (`ID`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `Bill_ibfk_2` FOREIGN KEY (`Employee`) REFERENCES `User` (`ID`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `Bill_ibfk_3` FOREIGN KEY (`Auto`) REFERENCES `Auto` (`ID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Bill`
--

LOCK TABLES `Bill` WRITE;
/*!40000 ALTER TABLE `Bill` DISABLE KEYS */;
INSERT INTO `Bill` VALUES (1,1,2,1),(2,1,3,2),(3,1,4,4),(4,1,5,3),(5,1,6,5),(6,1,7,6),(7,1,8,7),(8,1,9,8);
/*!40000 ALTER TABLE `Bill` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Category`
--

DROP TABLE IF EXISTS `Category`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Category` (
  `ID` int NOT NULL AUTO_INCREMENT,
  `Name` varchar(64) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Category`
--

LOCK TABLES `Category` WRITE;
/*!40000 ALTER TABLE `Category` DISABLE KEYS */;
INSERT INTO `Category` VALUES (1,'A - Мини'),(2,'B - Городской'),(3,'C - Гольф'),(4,'D - Средний'),(5,'E - Бизнес'),(6,'F - Люкс'),(7,'J - Внедорожники'),(8,'M - Минивэн'),(9,'S - Спорт');
/*!40000 ALTER TABLE `Category` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Color`
--

DROP TABLE IF EXISTS `Color`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Color` (
  `ID` int NOT NULL AUTO_INCREMENT,
  `Name` varchar(64) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Color`
--

LOCK TABLES `Color` WRITE;
/*!40000 ALTER TABLE `Color` DISABLE KEYS */;
INSERT INTO `Color` VALUES (1,'Бледно-каштановый'),(2,'Красный Крайола'),(3,'Насыщенный синий'),(4,'Насыщенный зеленовато-желтый'),(5,'Почти черный'),(6,'Пурпурное сердце'),(7,'Рапсово-желтый'),(8,'Светлый синевато-зеленый'),(9,'Спаржа'),(10,'Средний карминный');
/*!40000 ALTER TABLE `Color` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `EmployeeData`
--

DROP TABLE IF EXISTS `EmployeeData`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `EmployeeData` (
  `User` int NOT NULL,
  `Salary` double NOT NULL,
  `Post` int NOT NULL,
  `Password` varchar(15) NOT NULL,
  `Login` varchar(15) NOT NULL,
  KEY `EmployeeData_ibfk_1` (`Post`),
  KEY `EmployeeData_ibfk_2` (`User`),
  CONSTRAINT `EmployeeData_ibfk_1` FOREIGN KEY (`Post`) REFERENCES `Post` (`ID`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `EmployeeData_ibfk_2` FOREIGN KEY (`User`) REFERENCES `User` (`ID`) ON DELETE CASCADE ON UPDATE RESTRICT
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `EmployeeData`
--

LOCK TABLES `EmployeeData` WRITE;
/*!40000 ALTER TABLE `EmployeeData` DISABLE KEYS */;
INSERT INTO `EmployeeData` VALUES (1,35000,2,'1','1'),(12,60000,1,'2','1');
/*!40000 ALTER TABLE `EmployeeData` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Post`
--

DROP TABLE IF EXISTS `Post`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Post` (
  `ID` int NOT NULL AUTO_INCREMENT,
  `Name` varchar(64) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Post`
--

LOCK TABLES `Post` WRITE;
/*!40000 ALTER TABLE `Post` DISABLE KEYS */;
INSERT INTO `Post` VALUES (1,'Администратор'),(2,'Продавец');
/*!40000 ALTER TABLE `Post` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Status`
--

DROP TABLE IF EXISTS `Status`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Status` (
  `ID` int NOT NULL AUTO_INCREMENT,
  `Name` varchar(64) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Status`
--

LOCK TABLES `Status` WRITE;
/*!40000 ALTER TABLE `Status` DISABLE KEYS */;
INSERT INTO `Status` VALUES (1,'Сотрудник'),(2,'Клиент');
/*!40000 ALTER TABLE `Status` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `User`
--

DROP TABLE IF EXISTS `User`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `User` (
  `ID` int NOT NULL AUTO_INCREMENT,
  `Surname` varchar(64) NOT NULL,
  `Name` varchar(64) NOT NULL,
  `Patronymic` varchar(64) NOT NULL,
  `PassportSerial` int NOT NULL,
  `PassportNumber` int NOT NULL,
  `Address` varchar(128) NOT NULL,
  `Age` int NOT NULL,
  `Status` int NOT NULL,
  PRIMARY KEY (`ID`),
  KEY `User_ibfk_1` (`Status`),
  CONSTRAINT `User_ibfk_1` FOREIGN KEY (`Status`) REFERENCES `Status` (`ID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=16 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `User`
--

LOCK TABLES `User` WRITE;
/*!40000 ALTER TABLE `User` DISABLE KEYS */;
INSERT INTO `User` VALUES (1,'Андреев','Андрей','Андреевич',2929,987693,'293085, Ленинградская область, город Луховицы, ул. Сталина, 93',20,1),(2,'Дмитриев','Дмитрий','Дмитриевич',9292,832974,'352836, Рязанская область, город Клин, спуск Гагарина, 42',24,2),(3,'Романов','Роман','Романович',2829,923874,'606878, Омская область, город Серпухов, наб. Бухарестская, 02',30,2),(4,'Иванов','Иван','Иванович',2872,839237,'728413, Калининградская область, город Одинцово, шоссе Ленина, 42',40,2),(5,'Петров','Петр','Петрович',2891,387492,'492407, Читинская область, город Ступино, спуск Будапештсткая, 59',45,2),(6,'Романов','Роман','Романович',2981,927492,'059209, Брянская область, город Серпухов, пр. Славы, 45',34,2),(7,'Пушкин','Александр','Сергеевич',3872,826492,'128920, Астраханская область, город Коломна, шоссе Балканская, 99',64,2),(8,'Гофман','Игроь','Анлреевич',7432,749246,'975866, Саратовская область, город Солнечногорск, наб. Чехова, 61',74,2),(9,'Андреев','Андрей','Викторович',8472,928475,'718139, Волгоградская область, город Истра, въезд Космонавтов, 37',23,2),(10,'Антонов','Олег','Андреевич',4828,839274,'743605, Московская область, город Шатура, проезд Бухарестская, 89',20,2),(11,'Толстой','Игроь','Владиславович',3982,759275,'144173, Амурская область, город Ногинск, спуск Бухарестская, 26',43,2),(12,'Андреев','Сергей','Олегович',8732,395792,'741847, Саратовская область, город Воскресенск, наб. Ломоносова, 40',20,1),(13,'Достоевский','Владислав','Игоревич',8628,937420,'255328, Магаданская область, город Одинцово, наб. Гагарина, 37',64,2),(14,'Богатый','Руслан','Васильевич',3298,387492,'325278, Воронежская область, город Волоколамск, пл. Чехова, 83',25,2),(15,'Егорова','Антонина','Андреевна',9832,824792,'293085, Ленинградская область, город Луховицы, ул. Сталина, 10',32,2);
/*!40000 ALTER TABLE `User` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2024-11-25 11:18:23
