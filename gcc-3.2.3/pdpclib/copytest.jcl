//PDPMVS   JOB CLASS=C,REGION=0K
//*
//* Test various formats
//*
//*
//* Test of FB
//*
//S1       EXEC PGM=COPYFILE,PARM='-tt dd:in dd:out'
//STEPLIB  DD DSN=PDPCLIB.LINKLIB,DISP=SHR
//SYSIN    DD DUMMY
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//IN       DD *
line 1

line two
/*
//OUT      DD DSN=&&FIX,DISP=(,PASS),
// UNIT=SYSALLDA,SPACE=(CYL,(1,1)),
// DCB=(RECFM=FB,LRECL=20,BLKSIZE=40)
//*
//* We're expecting to see padding with blanks here
//*
//S2       EXEC PGM=HEXDUMP,PARM='dd:in'
//STEPLIB  DD DSN=PDPCLIB.LINKLIB,DISP=SHR
//SYSIN    DD DUMMY
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//IN       DD DSN=&&FIX,DISP=(OLD,PASS)
//*
//* Test of VB
//*
//S3       EXEC PGM=COPYFILE,PARM='-tt dd:in dd:out'
//STEPLIB  DD DSN=PDPCLIB.LINKLIB,DISP=SHR
//SYSIN    DD DUMMY
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//IN       DD DSN=&&FIX,DISP=(OLD,PASS)
//OUT      DD DSN=&&VAR,DISP=(,PASS),
// UNIT=SYSALLDA,SPACE=(CYL,(1,1)),
// DCB=(RECFM=VB,LRECL=20,BLKSIZE=44)
//*
//* We're expecting no trailing blanks, and RDWs upfront,
//* and the blank line should now be a single space, with
//* the RDW being 5.
//*
//S4       EXEC PGM=HEXDUMP,PARM='dd:in'
//STEPLIB  DD DSN=PDPCLIB.LINKLIB,DISP=SHR
//SYSIN    DD DUMMY
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//IN       DD DSN=&&VAR,DISP=(OLD,PASS)
//*
//* Test of U
//*
//S5       EXEC PGM=COPYFILE,PARM='-tt dd:in dd:out'
//STEPLIB  DD DSN=PDPCLIB.LINKLIB,DISP=SHR
//SYSIN    DD DUMMY
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//IN       DD DSN=&&VAR,DISP=(OLD,PASS)
//OUT      DD DSN=&&UND,DISP=(,PASS),
// UNIT=SYSALLDA,SPACE=(CYL,(1,1)),
// DCB=(RECFM=U,LRECL=0,BLKSIZE=60)
//*
//* We're expecting newline characters, no blanks, no RDW
//*
//S6       EXEC PGM=HEXDUMP,PARM='dd:in'
//STEPLIB  DD DSN=PDPCLIB.LINKLIB,DISP=SHR
//SYSIN    DD DUMMY
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//IN       DD DSN=&&UND,DISP=(OLD,PASS)
//*
//* Test of NUL-padding to fixed destination
//*
//S7       EXEC PGM=COPYFILE,PARM='-bb dd:in dd:out'
//STEPLIB  DD DSN=PDPCLIB.LINKLIB,DISP=SHR
//SYSIN    DD DUMMY
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//IN       DD DSN=&&VAR,DISP=(OLD,PASS)
//OUT      DD DSN=&&FIXB,DISP=(,PASS),
// UNIT=SYSALLDA,SPACE=(CYL,(1,1)),
// DCB=(RECFM=FB,LRECL=20,BLKSIZE=40)
//*
//* We're expecting a whole lot of extraneous NULs
//*
//S8       EXEC PGM=HEXDUMP,PARM='dd:in'
//STEPLIB  DD DSN=PDPCLIB.LINKLIB,DISP=SHR
//SYSIN    DD DUMMY
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//IN       DD DSN=&&FIXB,DISP=(OLD,PASS)
//*
//* Test the extraneous NULs are preserved going to U
//*
//S9       EXEC PGM=COPYFILE,PARM='-bb dd:in dd:out'
//STEPLIB  DD DSN=PDPCLIB.LINKLIB,DISP=SHR
//SYSIN    DD DUMMY
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//IN       DD DSN=&&FIXB,DISP=(OLD,PASS)
//OUT      DD DSN=&&UNDB,DISP=(,PASS),
// UNIT=SYSALLDA,SPACE=(CYL,(1,1)),
// DCB=(RECFM=U,LRECL=0,BLKSIZE=10)
//*
//* We're expecting a whole lot of extraneous NULs
//*
//S10      EXEC PGM=HEXDUMP,PARM='dd:in'
//STEPLIB  DD DSN=PDPCLIB.LINKLIB,DISP=SHR
//SYSIN    DD DUMMY
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//IN       DD DSN=&&UNDB,DISP=(OLD,PASS)
//*
//* Test that the NULs are stripped going back to VB
//*
//S11      EXEC PGM=COPYFILE,PARM='-bb dd:in dd:out'
//STEPLIB  DD DSN=PDPCLIB.LINKLIB,DISP=SHR
//SYSIN    DD DUMMY
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//IN       DD DSN=&&UNDB,DISP=(OLD,PASS)
//OUT      DD DSN=&&VARB,DISP=(,PASS),
// UNIT=SYSALLDA,SPACE=(CYL,(1,1)),
// DCB=(RECFM=VB,LRECL=20,BLKSIZE=40)
//*
//* We're expecting it be clean (RDW only)
//*
//S12      EXEC PGM=HEXDUMP,PARM='dd:in'
//STEPLIB  DD DSN=PDPCLIB.LINKLIB,DISP=SHR
//SYSIN    DD DUMMY
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//IN       DD DSN=&&VARB,DISP=(OLD,PASS)
//*
//*
//* Test same thing with RECFM=U override in case the
//* read routines are obscuring the truth. Note that this
//* will cause the BDW to be seen, since RECFM=U is the
//* whole truth and nothing but the truth, so help me Allah.
//*
//S13      EXEC PGM=HEXDUMP,PARM='dd:in'
//STEPLIB  DD DSN=PDPCLIB.LINKLIB,DISP=SHR
//SYSIN    DD DUMMY
//SYSPRINT DD SYSOUT=*
//SYSTERM  DD SYSOUT=*
//IN       DD DSN=&&VARB,DISP=(OLD,PASS),
//         DCB=(RECFM=U,LRECL=0,BLKSIZE=100)
//*
//
