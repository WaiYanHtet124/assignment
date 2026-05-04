-- phpMyAdmin SQL Dump
-- version 4.9.0.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Sep 04, 2025 at 09:11 AM
-- Server version: 10.3.15-MariaDB
-- PHP Version: 7.3.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `university`
--

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `studentID` int(10) NOT NULL,
  `stdName` varchar(50) DEFAULT NULL,
  `stdBatch` int(10) DEFAULT NULL,
  `stdEmail` varchar(255) DEFAULT NULL,
  `stdDOB` date DEFAULT NULL,
  `teacherID` int(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`studentID`, `stdName`, `stdBatch`, `stdEmail`, `stdDOB`, `teacherID`) VALUES
(1, 'John', 2018, 'john@gmail.com', '2000-09-05', 1),
(2, 'Jim', 2018, 'jim@gmail.com', '2000-08-05', 1),
(3, 'Jack', 2018, 'jack@gmail.com', '2001-08-05', 2),
(4, 'Joker', 2018, 'joker@gmail.com', '2000-08-05', 2),
(5, 'Honey', 2018, 'honey@gmail.com', '2000-02-05', 2),
(6, 'Haymar', 2019, 'haymar@gmail.com', '2001-08-05', 3),
(7, 'Halar', 2019, 'halar@gmail.com', '2001-02-05', 3),
(8, 'Zek', 2019, 'zek@gmail.com', '2000-09-05', 2),
(9, 'Johngoo', 2019, 'johngoo@gmail.com', '2001-03-02', 2);

-- --------------------------------------------------------

--
-- Table structure for table `teacher`
--

CREATE TABLE `teacher` (
  `teacherID` int(10) NOT NULL,
  `teacherName` varchar(100) DEFAULT NULL,
  `teacherEmail` varchar(100) DEFAULT NULL,
  `teacherDept` varchar(100) DEFAULT NULL,
  `teacherRole` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `teacher`
--

INSERT INTO `teacher` (`teacherID`, `teacherName`, `teacherEmail`, `teacherDept`, `teacherRole`) VALUES
(1, 'Prof:Smith', 'smith@gmail.com', 'FCS', 'Professor'),
(2, 'Dr.Nick', 'nick@gmail.com', 'FIS', 'Lecturer'),
(3, 'Dr.Dom', 'dom@gmail.com', 'FCST', 'Lecturer'),
(4, 'John Smith', 'johnsmith@gmail.com', 'FCS', 'Professor');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`studentID`);

--
-- Indexes for table `teacher`
--
ALTER TABLE `teacher`
  ADD PRIMARY KEY (`teacherID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `student`
--
ALTER TABLE `student`
  MODIFY `studentID` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;

--
-- AUTO_INCREMENT for table `teacher`
--
ALTER TABLE `teacher`
  MODIFY `teacherID` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
