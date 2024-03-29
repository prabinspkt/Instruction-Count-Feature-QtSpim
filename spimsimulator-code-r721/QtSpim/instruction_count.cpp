#include "instruction_count.h"
#include <iostream>

// Mapping of integer opcode representation to integer count of the occurance of the instruction
std::map<int, int> instruction_count = {{ 258 , 0 },{ 259 , 0 },{ 260 , 0 },{ 261 , 0 },{ 262 , 0 },{ 263 , 0 },{ 264 , 0 },{ 265 , 0 },{ 266 , 0 },{ 267 , 0 },{ 268 , 0 },{ 269 , 0 },{ 270 , 0 },{ 271 , 0 },{ 272 , 0 },{ 273 , 0 },{ 274 , 0 },{ 275 , 0 },{ 276 , 0 },{ 277 , 0 },{ 278 , 0 },{ 279 , 0 },{ 280 , 0 },{ 281 , 0 },{ 282 , 0 },{ 283 , 0 },{ 284 , 0 },{ 285 , 0 },{ 286 , 0 },{ 287 , 0 },{ 288 , 0 },{ 289 , 0 },{ 290 , 0 },{ 291 , 0 },{ 292 , 0 },{ 293 , 0 },{ 294 , 0 },{ 295 , 0 },{ 296 , 0 },{ 297 , 0 },{ 298 , 0 },{ 299 , 0 },{ 300 , 0 },{ 301 , 0 },{ 302 , 0 },{ 303 , 0 },{ 304 , 0 },{ 305 , 0 },{ 306 , 0 },{ 307 , 0 },{ 308 , 0 },{ 309 , 0 },{ 310 , 0 },{ 311 , 0 },{ 312 , 0 },{ 313 , 0 },{ 314 , 0 },{ 315 , 0 },{ 316 , 0 },{ 317 , 0 },{ 318 , 0 },{ 319 , 0 },{ 320 , 0 },{ 321 , 0 },{ 322 , 0 },{ 323 , 0 },{ 324 , 0 },{ 325 , 0 },{ 326 , 0 },{ 327 , 0 },{ 328 , 0 },{ 329 , 0 },{ 330 , 0 },{ 331 , 0 },{ 332 , 0 },{ 333 , 0 },{ 334 , 0 },{ 335 , 0 },{ 336 , 0 },{ 337 , 0 },{ 338 , 0 },{ 339 , 0 },{ 340 , 0 },{ 341 , 0 },{ 342 , 0 },{ 343 , 0 },{ 344 , 0 },{ 345 , 0 },{ 346 , 0 },{ 347 , 0 },{ 348 , 0 },{ 349 , 0 },{ 350 , 0 },{ 351 , 0 },{ 352 , 0 },{ 353 , 0 },{ 354 , 0 },{ 355 , 0 },{ 356 , 0 },{ 357 , 0 },{ 358 , 0 },{ 359 , 0 },{ 360 , 0 },{ 361 , 0 },{ 362 , 0 },{ 363 , 0 },{ 364 , 0 },{ 365 , 0 },{ 366 , 0 },{ 367 , 0 },{ 368 , 0 },{ 369 , 0 },{ 370 , 0 },{ 371 , 0 },{ 372 , 0 },{ 373 , 0 },{ 374 , 0 },{ 375 , 0 },{ 376 , 0 },{ 377 , 0 },{ 378 , 0 },{ 379 , 0 },{ 380 , 0 },{ 381 , 0 },{ 382 , 0 },{ 383 , 0 },{ 384 , 0 },{ 385 , 0 },{ 386 , 0 },{ 387 , 0 },{ 388 , 0 },{ 389 , 0 },{ 390 , 0 },{ 391 , 0 },{ 392 , 0 },{ 393 , 0 },{ 394 , 0 },{ 395 , 0 },{ 396 , 0 },{ 397 , 0 },{ 398 , 0 },{ 399 , 0 },{ 400 , 0 },{ 401 , 0 },{ 402 , 0 },{ 403 , 0 },{ 404 , 0 },{ 405 , 0 },{ 406 , 0 },{ 407 , 0 },{ 408 , 0 },{ 409 , 0 },{ 410 , 0 },{ 411 , 0 },{ 412 , 0 },{ 413 , 0 },{ 414 , 0 },{ 415 , 0 },{ 416 , 0 },{ 417 , 0 },{ 418 , 0 },{ 419 , 0 },{ 420 , 0 },{ 421 , 0 },{ 422 , 0 },{ 423 , 0 },{ 424 , 0 },{ 425 , 0 },{ 426 , 0 },{ 427 , 0 },{ 428 , 0 },{ 429 , 0 },{ 430 , 0 },{ 431 , 0 },{ 432 , 0 },{ 433 , 0 },{ 434 , 0 },{ 435 , 0 },{ 436 , 0 },{ 437 , 0 },{ 438 , 0 },{ 439 , 0 },{ 440 , 0 },{ 441 , 0 },{ 442 , 0 },{ 443 , 0 },{ 444 , 0 },{ 445 , 0 },{ 446 , 0 },{ 447 , 0 },{ 448 , 0 },{ 449 , 0 },{ 450 , 0 },{ 451 , 0 },{ 452 , 0 },{ 453 , 0 },{ 454 , 0 },{ 455 , 0 },{ 456 , 0 },{ 457 , 0 },{ 458 , 0 },{ 459 , 0 },{ 460 , 0 },{ 461 , 0 },{ 462 , 0 },{ 463 , 0 },{ 464 , 0 },{ 465 , 0 },{ 466 , 0 },{ 467 , 0 },{ 468 , 0 },{ 469 , 0 },{ 470 , 0 },{ 471 , 0 },{ 472 , 0 },{ 473 , 0 },{ 474 , 0 },{ 475 , 0 },{ 476 , 0 },{ 477 , 0 },{ 478 , 0 },{ 479 , 0 },{ 480 , 0 },{ 481 , 0 },{ 482 , 0 },{ 483 , 0 },{ 484 , 0 },{ 485 , 0 },{ 486 , 0 },{ 487 , 0 },{ 488 , 0 },{ 489 , 0 },{ 490 , 0 },{ 491 , 0 },{ 492 , 0 },{ 493 , 0 },{ 494 , 0 },{ 495 , 0 },{ 496 , 0 },{ 497 , 0 },{ 498 , 0 },{ 499 , 0 },{ 500 , 0 },{ 501 , 0 },{ 502 , 0 },{ 503 , 0 },{ 504 , 0 },{ 505 , 0 },{ 506 , 0 },{ 507 , 0 },{ 508 , 0 },{ 509 , 0 },{ 510 , 0 },{ 511 , 0 },{ 512 , 0 },{ 513 , 0 },{ 514 , 0 },{ 515 , 0 },{ 516 , 0 },{ 517 , 0 },{ 518 , 0 },{ 519 , 0 },{ 520 , 0 },{ 521 , 0 },{ 522 , 0 },{ 523 , 0 },{ 524 , 0 },{ 525 , 0 },{ 526 , 0 },{ 527 , 0 },{ 528 , 0 },{ 529 , 0 },{ 530 , 0 },{ 531 , 0 },{ 532 , 0 },{ 533 , 0 },{ 534 , 0 },{ 535 , 0 },{ 536 , 0 },{ 537 , 0 },{ 538 , 0 },{ 539 , 0 },{ 540 , 0 },{ 541 , 0 },{ 542 , 0 },{ 543 , 0 },{ 544 , 0 },{ 545 , 0 },{ 546 , 0 },{ 547 , 0 },{ 548 , 0 },{ 549 , 0 },{ 550 , 0 },{ 551 , 0 },{ 552 , 0 },{ 553 , 0 },{ 554 , 0 },{ 555 , 0 },{ 556 , 0 },{ 557 , 0 },{ 558 , 0 },{ 559 , 0 },{ 560 , 0 },{ 561 , 0 },{ 562 , 0 },{ 563 , 0 },{ 564 , 0 },{ 565 , 0 },{ 566 , 0 },{ 567 , 0 },{ 568 , 0 },{ 569 , 0 },{ 570 , 0 },{ 571 , 0 },{ 572 , 0 },{ 573 , 0 },{ 574 , 0 },{ 575 , 0 },{ 576 , 0 },{ 577 , 0 },{ 578 , 0 },{ 579 , 0 },{ 580 , 0 },{ 581 , 0 },{ 582 , 0 },{ 583 , 0 },{ 584 , 0 },{ 585 , 0 },{ 586 , 0 },{ 587 , 0 },{ 588 , 0 },{ 589 , 0 },{ 590 , 0 },{ 591 , 0 },{ 592 , 0 },{ 593 , 0 },{ 594 , 0 },{ 595 , 0 },{ 596 , 0 },{ 597 , 0 },{ 598 , 0 },{ 599 , 0 },{ 600 , 0 },{ 601 , 0 },{ 602 , 0 },{ 603 , 0 },{ 604 , 0 },{ 605 , 0 },{ 606 , 0 },{ 607 , 0 },{ 608 , 0 },{ 609 , 0 },{ 610 , 0 },{ 611 , 0 },{ 612 , 0 },{ 613 , 0 },{ 614 , 0 },{ 615 , 0 },{ 616 , 0 },{ 617 , 0 },{ 618 , 0 },{ 619 , 0 },{ 620 , 0 },{ 621 , 0 },{ 622 , 0 },{ 623 , 0 },{ 624 , 0 },{ 625 , 0 },{ 626 , 0 },{ 627 , 0 },{ 628 , 0 },{ 629 , 0 },{ 630 , 0 },{ 631 , 0 },{ 632 , 0 },{ 633 , 0 },{ 634 , 0 },{ 635 , 0 },{ 636 , 0 },{ 637 , 0 },{ 638 , 0 },{ 639 , 0 },{ 640 , 0 },{ 641 , 0 },{ 642 , 0 },{ 643 , 0 },{ 644 , 0 },{ 645 , 0 },{ 646 , 0 },{ 647 , 0 }};

// Mapping of string instruction name and its integer count
std::map<std::string, int> final_count = {};

// Integer variable with count of cycles for the instructions in the program
int cycle_counter = 0;

// Mapping of integer opcode representation and its string name
// It will be used in creating string to integer map final_count
std::map<int, std::string> op_to_inst = {
    { Y_ADD_OP , " add " } ,
    { Y_ADDI_OP , " addi " } ,
    { Y_ADDIU_OP , " addiu " } ,
    { Y_ADDU_OP , " addu " } ,
    { Y_AND_OP , " and " } ,
    { Y_ANDI_OP , " andi " } ,
    { Y_BAL_POP , " bal " } ,
    { Y_BC1F_OP , " bc1f " } ,
    { Y_BC1FL_OP , " bc1fl " } ,
    { Y_BC1T_OP , " bc1t " } ,
    { Y_BC1TL_OP , " bc1tl " } ,
    { Y_BC2F_OP , " bc2f " } ,
    { Y_BC2FL_OP , " bc2fl " } ,
    { Y_BC2T_OP , " bc2t " } ,
    { Y_BC2TL_OP , " bc2tl " } ,
    { Y_BEQ_OP , " beq " } ,
    { Y_BEQL_OP , " beql " } ,
    { Y_BEQZ_POP , " beqz " } ,
    { Y_BGE_POP , " bge " } ,
    { Y_BGEU_POP , " bgeu " } ,
    { Y_BGEZ_OP , " bgez " } ,
    { Y_BGEZAL_OP , " bgezal " } ,
    { Y_BGEZALL_OP , " bgezall " } ,
    { Y_BGEZL_OP , " bgezl " } ,
    { Y_BGT_POP , " bgt " } ,
    { Y_BGTU_POP , " bgtu " } ,
    { Y_BGTZ_OP , " bgtz " } ,
    { Y_BGTZL_OP , " bgtzl " } ,
    { Y_BLE_POP , " ble " } ,
    { Y_BLEU_POP , " bleu " } ,
    { Y_BLEZ_OP , " blez " } ,
    { Y_BLEZL_OP , " blezl " } ,
    { Y_BLT_POP , " blt " } ,
    { Y_BLTU_POP , " bltu " } ,
    { Y_BLTZ_OP , " bltz " } ,
    { Y_BLTZAL_OP , " bltzal " } ,
    { Y_BLTZALL_OP , " bltzall " } ,
    { Y_BLTZL_OP , " bltzl " } ,
    { Y_BNE_OP , " bne " } ,
    { Y_BNEL_OP , " bnel " } ,
    { Y_BNEZ_POP , " bnez " } ,
    { Y_C_EQ_PS_OP , " c.eq.ps " } ,
    { Y_C_F_PS_OP , " c.f.ps " } ,
    { Y_C_LE_PS_OP , " c.le.ps " } ,
    { Y_C_LT_PS_OP , " c.lt.ps " } ,
    { Y_C_NGE_PS_OP , " c.nge.ps " } ,
    { Y_C_NGL_PS_OP , " c.ngl.ps " } ,
    { Y_C_NGLE_PS_OP , " c.ngle.ps " } ,
    { Y_C_NGT_PS_OP , " c.ngt.ps " } ,
    { Y_C_OLE_PS_OP , " c.ole.ps " } ,
    { Y_C_OLT_PS_OP , " c.olt.ps " } ,
    { Y_C_SEQ_PS_OP , " c.seq.ps " } ,
    { Y_C_SF_PS_OP , " c.sf.ps " } ,
    { Y_C_UEQ_PS_OP , " c.ueq.ps " } ,
    { Y_C_ULE_PS_OP , " c.ule.ps " } ,
    { Y_C_ULT_PS_OP , " c.ult.ps " } ,
    { Y_C_UN_PS_OP , " c.un.ps " } ,
    { Y_CACHE_OP , " cache " } ,
    { Y_CEIL_L_D_OP , " ceil.l.d " } ,
    { Y_CEIL_L_S_OP , " ceil.l.s " } ,
    { Y_CEIL_W_D_OP , " ceil.w.d " } ,
    { Y_CEIL_W_S_OP , " ceil.w.s " } ,
    { Y_CLO_OP , " clo " } ,
    { Y_CLZ_OP , " clz " } ,
    { Y_COP2_OP , " cop2 " } ,
    { Y_CVT_D_L_OP , " cvt.d.l " } ,
    { Y_CVT_L_D_OP , " cvt.l.d " } ,
    { Y_CVT_L_S_OP , " cvt.l.s " } ,
    { Y_CVT_PS_S_OP , " cvt.ps.s " } ,
    { Y_CVT_S_L_OP , " cvt.s.l " } ,
    { Y_CVT_S_PL_OP , " cvt.s.pl " } ,
    { Y_CVT_S_PU_OP , " cvt.s.pu " } ,
    { Y_DERET_OP , " deret " } ,
    { Y_DI_OP , " di " } ,
    { Y_DIV_OP , " div " } ,
    { Y_DIVU_OP , " divu " } ,
    { Y_EHB_OP , " ehb " } ,
    { Y_EI_OP , " ei " } ,
    { Y_ERET_OP , " eret " } ,
    { Y_EXT_OP , " ext " } ,
    { Y_FLOOR_L_D_OP , " floor.l.d " } ,
    { Y_FLOOR_L_S_OP , " floor.l.s " } ,
    { Y_FLOOR_W_D_OP , " floor.w.d " } ,
    { Y_FLOOR_W_S_OP , " floor.w.s " } ,
    { Y_INS_OP , " ins " } ,
    { Y_JAL_OP , " jal " } ,
    { Y_JALR_OP , " jalr " } ,
    { Y_JALR_HB_OP , " jalr.hb " } ,
    { Y_JR_OP , " jr " } ,
    { Y_JR_HB_OP , " jr.hb " } ,
    { Y_L_D_POP , " l.d " } ,
    { Y_L_S_POP , " l.s " } ,
    { Y_LA_POP , " la " } ,
    { Y_LB_OP , " lb " } ,
    { Y_LBU_OP , " lbu " } ,
    { Y_LD_POP , " ld " } ,
    { Y_LDC1_OP , " ldc1 " } ,
    { Y_LDC2_OP , " ldc2 " } ,
    { Y_LDXC1_OP , " ldxc1 " } ,
    { Y_LH_OP , " lh " } ,
    { Y_LHU_OP , " lhu " } ,
    { Y_LI_POP , " li " } ,
    { Y_LI_D_POP , " li.d " } ,
    { Y_LI_S_POP , " li.s " } ,
    { Y_LL_OP , " ll " } ,
    { Y_LUI_OP , " lui " } ,
    { Y_LUXC1_OP , " luxc1 " } ,
    { Y_LW_OP , " lw " } ,
    { Y_LWC2_OP , " lwc2 " } ,
    { Y_LWL_OP , " lwl " } ,
    { Y_LWR_OP , " lwr " } ,
    { Y_LWXC1_OP , " lwxc1 " } ,
    { Y_MADD_OP , " madd " } ,
    { Y_MADD_D_OP , " madd.d " } ,
    { Y_MADD_PS_OP , " madd.ps " } ,
    { Y_MADD_S_OP , " madd.s " } ,
    { Y_MADDU_OP , " maddu " } ,
    { Y_MFC0_OP , " mfc0 " } ,
    { Y_MFC1_D_POP , " mfc1.d " } ,
    { Y_MFC2_OP , " mfc2 " } ,
    { Y_MFHC1_OP , " mfhc1 " } ,
    { Y_MFHC2_OP , " mfhc2 " } ,
    { Y_MFHI_OP , " mfhi " } ,
    { Y_MFLO_OP , " mflo " } ,
    { Y_MOV_PS_OP , " mov.ps " } ,
    { Y_MOVE_POP , " move " } ,
    { Y_MOVF_OP , " movf " } ,
    { Y_MOVF_D_OP , " movf.d " } ,
    { Y_MOVF_PS_OP , " movf.ps " } ,
    { Y_MOVF_S_OP , " movf.s " } ,
    { Y_MOVN_OP , " movn " } ,
    { Y_MOVN_D_OP , " movn.d " } ,
    { Y_MOVN_PS_OP , " movn.ps " } ,
    { Y_MOVN_S_OP , " movn.s " } ,
    { Y_MOVT_OP , " movt " } ,
    { Y_MOVT_D_OP , " movt.d " } ,
    { Y_MOVT_PS_OP , " movt.ps " } ,
    { Y_MOVT_S_OP , " movt.s " } ,
    { Y_MOVZ_OP , " movz " } ,
    { Y_MOVZ_D_OP , " movz.d " } ,
    { Y_MOVZ_PS_OP , " movz.ps " } ,
    { Y_MOVZ_S_OP , " movz.s " } ,
    { Y_MSUB_OP , " msub " } ,
    { Y_MSUB_D_OP , " msub.d " } ,
    { Y_MSUB_PS_OP , " msub.ps " } ,
    { Y_MSUB_S_OP , " msub.s " } ,
    { Y_MSUBU_OP , " msubu " } ,
    { Y_MTC0_OP , " mtc0 " } ,
    { Y_MTC1_D_POP , " mtc1.d " } ,
    { Y_MTC2_OP , " mtc2 " } ,
    { Y_MTHC1_OP , " mthc1 " } ,
    { Y_MTHC2_OP , " mthc2 " } ,
    { Y_MTHI_OP , " mthi " } ,
    { Y_MTLO_OP , " mtlo " } ,
    { Y_MUL_OP , " mul " } ,
    { Y_MUL_PS_OP , " mul.ps " } ,
    { Y_MULO_POP , " mulo " } ,
    { Y_MULOU_POP , " mulou " } ,
    { Y_MULT_OP , " mult " } ,
    { Y_MULTU_OP , " multu " } ,
    { Y_NEG_POP , " neg " } ,
    { Y_NEG_PS_OP , " neg.ps " } ,
    { Y_NEGU_POP , " negu " } ,
    { Y_NMADD_D_OP , " nmadd.d " } ,
    { Y_NMADD_PS_OP , " nmadd.ps " } ,
    { Y_NMADD_S_OP , " nmadd.s " } ,
    { Y_NMSUB_D_OP , " nmsub.d " } ,
    { Y_NMSUB_PS_OP , " nmsub.ps " } ,
    { Y_NMSUB_S_OP , " nmsub.s " } ,
    { Y_NOP_POP , " nop " } ,
    { Y_NOR_OP , " nor " } ,
    { Y_NOT_POP , " not " } ,
    { Y_OR_OP , " or " } ,
    { Y_ORI_OP , " ori " } ,
    { Y_PLL_PS_OP , " pll.ps " } ,
    { Y_PLU_PS_OP , " plu.ps " } ,
    { Y_PREF_OP , " pref " } ,
    { Y_PREFX_OP , " prefx " } ,
    { Y_PUL_PS_OP , " pul.ps " } ,
    { Y_PUU_PS_OP , " puu.ps " } ,
    { Y_RDHWR_OP , " rdhwr " } ,
    { Y_RDPGPR_OP , " rdpgpr " } ,
    { Y_RECIP_D_OP , " recip.d " } ,
    { Y_RECIP_S_OP , " recip.s " } ,
    { Y_REM_POP , " rem " } ,
    { Y_REMU_POP , " remu " } ,
    { Y_ROL_POP , " rol " } ,
    { Y_ROR_POP , " ror " } ,
    { Y_ROTR_OP , " rotr " } ,
    { Y_ROTRV_OP , " rotrv " } ,
    { Y_ROUND_L_D_OP , " round.l.d " } ,
    { Y_ROUND_L_S_OP , " round.l.s " } ,
    { Y_ROUND_W_D_OP , " round.w.d " } ,
    { Y_ROUND_W_S_OP , " round.w.s " } ,
    { Y_RSQRT_D_OP , " rsqrt.d " } ,
    { Y_RSQRT_S_OP , " rsqrt.s " } ,
    { Y_S_D_POP , " s.d " } ,
    { Y_S_S_POP , " s.s " } ,
    { Y_SB_OP , " sb " } ,
    { Y_SC_OP , " sc " } ,
    { Y_SD_POP , " sd " } ,
    { Y_SDBBP_OP , " sdbbp " } ,
    { Y_SDC1_OP , " sdc1 " } ,
    { Y_SDC2_OP , " sdc2 " } ,
    { Y_SDXC1_OP , " sdxc1 " } ,
    { Y_SEB_OP , " seb " } ,
    { Y_SEH_OP , " seh " } ,
    { Y_SEQ_POP , " seq " } ,
    { Y_SGE_POP , " sge " } ,
    { Y_SGEU_POP , " sgeu " } ,
    { Y_SGT_POP , " sgt " } ,
    { Y_SGTU_POP , " sgtu " } ,
    { Y_SH_OP , " sh " } ,
    { Y_SLE_POP , " sle " } ,
    { Y_SLEU_POP , " sleu " } ,
    { Y_SLL_OP , " sll " } ,
    { Y_SLLV_OP , " sllv " } ,
    { Y_SLT_OP , " slt " } ,
    { Y_SLTI_OP , " slti " } ,
    { Y_SLTIU_OP , " sltiu " } ,
    { Y_SLTU_OP , " sltu " } ,
    { Y_SNE_POP , " sne " } ,
    { Y_SQRT_D_OP , " sqrt.d " } ,
    { Y_SQRT_S_OP , " sqrt.s " } ,
    { Y_SRA_OP , " sra " } ,
    { Y_SRAV_OP , " srav " } ,
    { Y_SRL_OP , " srl " } ,
    { Y_SRLV_OP , " srlv " } ,
    { Y_SSNOP_OP , " ssnop " } ,
    { Y_SUB_OP , " sub " } ,
    { Y_SUB_PS_OP , " sub.ps " } ,
    { Y_SUBU_OP , " subu " } ,
    { Y_SUXC1_OP , " suxc1 " } ,
    { Y_SW_OP , " sw " } ,
    { Y_SWC2_OP , " swc2 " } ,
    { Y_SWL_OP , " swl " } ,
    { Y_SWR_OP , " swr " } ,
    { Y_SWXC1_OP , " swxc1 " } ,
    { Y_SYNC_OP , " sync " } ,
    { Y_SYNCI_OP , " synci " } ,
    { Y_TEQ_OP , " teq " } ,
    { Y_TEQI_OP , " teqi " } ,
    { Y_TGE_OP , " tge " } ,
    { Y_TGEI_OP , " tgei " } ,
    { Y_TGEIU_OP , " tgeiu " } ,
    { Y_TGEU_OP , " tgeu " } ,
    { Y_TLT_OP , " tlt " } ,
    { Y_TLTI_OP , " tlti " } ,
    { Y_TLTIU_OP , " tltiu " } ,
    { Y_TLTU_OP , " tltu " } ,
    { Y_TNE_OP , " tne " } ,
    { Y_TNEI_OP , " tnei " } ,
    { Y_TRUNC_L_D_OP , " trunc.l.d " } ,
    { Y_TRUNC_L_S_OP , " trunc.l.s " } ,
    { Y_TRUNC_W_D_OP , " trunc.w.d " } ,
    { Y_TRUNC_W_S_OP , " trunc.w.s " } ,
    { Y_ULH_POP , " ulh " } ,
    { Y_ULHU_POP , " ulhu " } ,
    { Y_ULW_POP , " ulw " } ,
    { Y_USH_POP , " ush " } ,
    { Y_USW_POP , " usw " } ,
    { Y_WRPGPR_OP , " wrpgpr " } ,
    { Y_WSBH_OP , " wsbh " } ,
    { Y_XOR_OP , " xor " } ,
    { Y_XORI_OP , " xori " } ,
    { Y_ALIAS_DIR , " .alias " } ,
    { Y_ALIGN_DIR , " .align " } ,
    { Y_ASCII_DIR , " .ascii " } ,
    { Y_ASCIIZ_DIR , " .asciiz " } ,
    { Y_ASM0_DIR , " .asm0 " } ,
    { Y_BGNB_DIR , " .bgnb " } ,
    { Y_BYTE_DIR , " .byte " } ,
    { Y_COMM_DIR , " .comm " } ,
    { Y_DATA_DIR , " .data " } ,
    { Y_DOUBLE_DIR , " .double " } ,
    { Y_END_DIR , " .end " } ,
    { Y_ENDB_DIR , " .endb " } ,
    { Y_ENDR_DIR , " .endr " } ,
    { Y_ENT_DIR , " .ent " } ,
    { Y_ERR_DIR , " .err " } ,
    { Y_EXTERN_DIR , " .extern " } ,
    { Y_FILE_DIR , " .file " } ,
    { Y_FLOAT_DIR , " .float " } ,
    { Y_FMASK_DIR , " .fmask " } ,
    { Y_FRAME_DIR , " .frame " } ,
    { Y_GLOBAL_DIR , " .globl " } ,
    { Y_HALF_DIR , " .half " } ,
    { Y_K_DATA_DIR , " .kdata " } ,
    { Y_K_TEXT_DIR , " .ktext " } ,
    { Y_LABEL_DIR , " .lab " } ,
    { Y_LCOMM_DIR , " .lcomm " } ,
    { Y_LIVEREG_DIR , " .livereg " } ,
    { Y_LOC_DIR , " .loc " } ,
    { Y_MASK_DIR , " .mask " } ,
    { Y_NOALIAS_DIR , " .noalias " } ,
    { Y_OPTIONS_DIR , " .option " } ,
    { Y_RDATA_DIR , " .rdata " } ,
    { Y_REPEAT_DIR , " .repeat " } ,
    { Y_SDATA_DIR , " .sdata " } ,
    { Y_SET_DIR , " .set " } ,
    { Y_SPACE_DIR , " .space " } ,
    { Y_STRUCT_DIR , " .struct " } ,
    { Y_TEXT_DIR , " .text " } ,
    { Y_VREG_DIR , " .vreg " } ,
    { Y_WORD_DIR , " .word " } ,
    { Y_ABS_POP , " abs " } ,
    { Y_ABS_PS_OP , " abs.ps " } ,
    { Y_ADD_PS_OP , " add.ps " } ,
    { Y_ALNV_PS_OP , " alnv.ps " } ,
    { Y_EOF , " unknown " } ,
    { Y_NL , " unknown " } ,
    { Y_INT , " unknown " } ,
    { Y_ID , " unknown " } ,
    { Y_REG , " unknown " } ,
    { Y_FP_REG , " unknown " } ,
    { Y_STR , " unknown " } ,
    { Y_FP , " unknown " } ,
    { Y_ABS_D_OP , " unknown " } ,
    { Y_ABS_S_OP , " unknown " } ,
    { Y_ADD_D_OP , " unknown " } ,
    { Y_ADD_S_OP , " unknown " } ,
    { Y_BREAK_OP , " unknown " } ,
    { Y_C_EQ_D_OP , " unknown " } ,
    { Y_C_EQ_S_OP , " unknown " } ,
    { Y_C_F_D_OP , " unknown " } ,
    { Y_C_F_S_OP , " unknown " } ,
    { Y_C_LE_D_OP , " unknown " } ,
    { Y_C_LE_S_OP , " unknown " } ,
    { Y_C_LT_D_OP , " unknown " } ,
    { Y_C_LT_S_OP , " unknown " } ,
    { Y_C_NGE_D_OP , " unknown " } ,
    { Y_C_NGE_S_OP , " unknown " } ,
    { Y_C_NGL_D_OP , " unknown " } ,
    { Y_C_NGL_S_OP , " unknown " } ,
    { Y_C_NGLE_D_OP , " unknown " } ,
    { Y_C_NGLE_S_OP , " unknown " } ,
    { Y_C_NGT_D_OP , " unknown " } ,
    { Y_C_NGT_S_OP , " unknown " } ,
    { Y_C_OLE_D_OP , " unknown " } ,
    { Y_C_OLE_S_OP , " unknown " } ,
    { Y_C_OLT_D_OP , " unknown " } ,
    { Y_C_OLT_S_OP , " unknown " } ,
    { Y_C_SEQ_D_OP , " unknown " } ,
    { Y_C_SEQ_S_OP , " unknown " } ,
    { Y_C_SF_D_OP , " unknown " } ,
    { Y_C_SF_S_OP , " unknown " } ,
    { Y_C_UEQ_D_OP , " unknown " } ,
    { Y_C_UEQ_S_OP , " unknown " } ,
    { Y_C_ULE_D_OP , " unknown " } ,
    { Y_C_ULE_S_OP , " unknown " } ,
    { Y_C_ULT_D_OP , " unknown " } ,
    { Y_C_ULT_S_OP , " unknown " } ,
    { Y_C_UN_D_OP , " unknown " } ,
    { Y_C_UN_S_OP , " unknown " } ,
    { Y_CFC0_OP , " unknown " } ,
    { Y_CFC1_OP , " unknown " } ,
    { Y_CFC2_OP , " unknown " } ,
    { Y_CTC0_OP , " unknown " } ,
    { Y_CTC1_OP , " unknown " } ,
    { Y_CTC2_OP , " unknown " } ,
    { Y_CVT_D_S_OP , " unknown " } ,
    { Y_CVT_D_W_OP , " unknown " } ,
    { Y_CVT_S_D_OP , " unknown " } ,
    { Y_CVT_S_W_OP , " unknown " } ,
    { Y_CVT_W_D_OP , " unknown " } ,
    { Y_CVT_W_S_OP , " unknown " } ,
    { Y_DIV_D_OP , " unknown " } ,
    { Y_DIV_S_OP , " unknown " } ,
    { Y_J_OP , " unknown " } ,
    { Y_LWC1_OP , " unknown " } ,
    { Y_MFC1_OP , " unknown " } ,
    { Y_MOV_D_OP , " unknown " } ,
    { Y_MOV_S_OP , " unknown " } ,
    { Y_MTC1_OP , " unknown " } ,
    { Y_MUL_D_OP , " unknown " } ,
    { Y_MUL_S_OP , " unknown " } ,
    { Y_NEG_D_OP , " unknown " } ,
    { Y_NEG_S_OP , " unknown " } ,
    { Y_PFW_OP , " unknown " } ,
    { Y_RFE_OP , " unknown " } ,
    { Y_SUB_D_OP , " unknown " } ,
    { Y_SUB_S_OP , " unknown " } ,
    { Y_SWC1_OP , " unknown " } ,
    { Y_SYSCALL_OP , " unknown " } ,
    { Y_TLBP_OP , " unknown " } ,
    { Y_TLBR_OP , " unknown " } ,
    { Y_TLBWI_OP , " unknown " } ,
    { Y_TLBWR_OP , " unknown " } ,
    { Y_B_POP , " unknown " } ,
    { Y_VERSTAMP_DIR , " unknown " }
};

// Function to return string instruction name to integer count
// It will get the string from op_to_inst map and integer from instruction_count
std::map<std::string, int> ReturnFinalCount()
{
    for (int i = 258; i<= 647;i++)
    {
          if(instruction_count.at(i) != 0)
          {
           final_count.insert(std::make_pair(op_to_inst.at(i),instruction_count.at(i)));
           }
       }
    return final_count;
}

// Function to reset the initial states of data variables when ReinitializeSimulator button is clicked
void ClearOnReinitialize() {
    std::map<int, int>::iterator clear_iter = instruction_count.begin();
    for (int i = 258; i <= 647; i++) {
        instruction_count.at(i) = 0;
    }
    final_count = {};
    cycle_counter = 0;
}
