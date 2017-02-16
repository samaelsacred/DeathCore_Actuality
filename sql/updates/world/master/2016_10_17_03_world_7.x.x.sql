/*
Navicat MySQL Data Transfer

Source Server         : DeathCore 7.x.x
Source Server Version : 50624
Source Host           : localhost:3306
Source Database       : world

Target Server Type    : MYSQL
Target Server Version : 50624
File Encoding         : 65001

Date: 2017-02-16 16:44:53
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `version`
-- ----------------------------
DROP TABLE IF EXISTS `version`;
CREATE TABLE `version` (
  `core_version` varchar(120) NOT NULL DEFAULT '' COMMENT 'Core revision dumped at startup.',
  `core_revision` varchar(120) DEFAULT NULL,
  `db_version` varchar(120) DEFAULT NULL COMMENT 'Version of world DB.',
  `cache_id` int(11) DEFAULT '0',
  PRIMARY KEY (`core_version`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 ROW_FORMAT=FIXED COMMENT='Version Notes';

-- ----------------------------
-- Records of version
-- ----------------------------
INSERT INTO `version` VALUES ('DeathCore rev. 7.x.x 15-02-2017 08:35:00 +7.x.x (Arquivado branch) (Win32, Release, Static)', '7.x.x', 'DC-DB 715.01', '1');
