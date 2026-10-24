#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Em0d_kui_move
// Address: 0x23fe30 - 0x24112c
void Em0d_kui_move_0x23fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_kui_move_0x23fe30");
#endif

    switch (ctx->pc) {
        case 0x23ff74u: goto label_23ff74;
        case 0x23ff98u: goto label_23ff98;
        case 0x23fff4u: goto label_23fff4;
        case 0x240028u: goto label_240028;
        case 0x240084u: goto label_240084;
        case 0x2400b8u: goto label_2400b8;
        case 0x240124u: goto label_240124;
        case 0x240160u: goto label_240160;
        case 0x240188u: goto label_240188;
        case 0x2401a8u: goto label_2401a8;
        case 0x240204u: goto label_240204;
        case 0x240238u: goto label_240238;
        case 0x240294u: goto label_240294;
        case 0x2402b8u: goto label_2402b8;
        case 0x240324u: goto label_240324;
        case 0x240360u: goto label_240360;
        case 0x240380u: goto label_240380;
        case 0x2403a0u: goto label_2403a0;
        case 0x2403fcu: goto label_2403fc;
        case 0x240430u: goto label_240430;
        case 0x24048cu: goto label_24048c;
        case 0x2404b0u: goto label_2404b0;
        case 0x24051cu: goto label_24051c;
        case 0x240540u: goto label_240540;
        case 0x240560u: goto label_240560;
        case 0x240588u: goto label_240588;
        case 0x2405ecu: goto label_2405ec;
        case 0x240628u: goto label_240628;
        case 0x24068cu: goto label_24068c;
        case 0x2406bcu: goto label_2406bc;
        case 0x240720u: goto label_240720;
        case 0x240754u: goto label_240754;
        case 0x240780u: goto label_240780;
        case 0x2407a8u: goto label_2407a8;
        case 0x24080cu: goto label_24080c;
        case 0x240848u: goto label_240848;
        case 0x2408b0u: goto label_2408b0;
        case 0x2408e4u: goto label_2408e4;
        case 0x240948u: goto label_240948;
        case 0x24097cu: goto label_24097c;
        case 0x2409a8u: goto label_2409a8;
        case 0x2409d4u: goto label_2409d4;
        case 0x240a2cu: goto label_240a2c;
        case 0x240a58u: goto label_240a58;
        case 0x240ab4u: goto label_240ab4;
        case 0x240ae8u: goto label_240ae8;
        case 0x240b4cu: goto label_240b4c;
        case 0x240b80u: goto label_240b80;
        case 0x240bacu: goto label_240bac;
        case 0x240bd8u: goto label_240bd8;
        case 0x240c30u: goto label_240c30;
        case 0x240c58u: goto label_240c58;
        case 0x240cb8u: goto label_240cb8;
        case 0x240ce4u: goto label_240ce4;
        case 0x240d40u: goto label_240d40;
        case 0x240d70u: goto label_240d70;
        case 0x240d98u: goto label_240d98;
        case 0x240dc4u: goto label_240dc4;
        case 0x240e28u: goto label_240e28;
        case 0x240e5cu: goto label_240e5c;
        case 0x240ec4u: goto label_240ec4;
        case 0x240ef8u: goto label_240ef8;
        case 0x240f5cu: goto label_240f5c;
        case 0x240f90u: goto label_240f90;
        case 0x24103cu: goto label_24103c;
        case 0x2410fcu: goto label_2410fc;
        case 0x241110u: goto label_241110;
        default: break;
    }

    ctx->pc = 0x23fe30u;

    // 0x23fe30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23fe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23fe34: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x23fe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x23fe38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23fe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23fe3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23fe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23fe40: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x23fe40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x23fe44: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x23fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23fe48: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x23fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x23fe4c: 0x24a63b60  addiu       $a2, $a1, 0x3B60
    ctx->pc = 0x23fe4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 15200));
    // 0x23fe50: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x23fe50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x23fe54: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x23fe54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23fe58: 0x8ce80130  lw          $t0, 0x130($a3)
    ctx->pc = 0x23fe58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x23fe5c: 0x25090980  addiu       $t1, $t0, 0x980
    ctx->pc = 0x23fe5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 2432));
    // 0x23fe60: 0x71208e28  paddub      $s1, $t1, $zero
    ctx->pc = 0x23fe60u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x23fe64: 0x260a0150  addiu       $t2, $s0, 0x150
    ctx->pc = 0x23fe64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fe68: 0x95430006  lhu         $v1, 0x6($t2)
    ctx->pc = 0x23fe68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x23fe6c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x23fe6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x23fe70: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x23fe70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23fe74: 0x108004a7  beqz        $a0, . + 4 + (0x4A7 << 2)
    ctx->pc = 0x23FE74u;
    {
        const bool branch_taken_0x23fe74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe74) {
            ctx->pc = 0x241114u;
            goto label_241114;
        }
    }
    ctx->pc = 0x23FE7Cu;
    // 0x23fe7c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x23fe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fe80: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x23fe80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x23fe84: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x23fe84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x23fe88: 0x30c70002  andi        $a3, $a2, 0x2
    ctx->pc = 0x23fe88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x23fe8c: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FE8Cu;
    {
        const bool branch_taken_0x23fe8c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe8c) {
            ctx->pc = 0x23FEACu;
            goto label_23feac;
        }
    }
    ctx->pc = 0x23FE94u;
    // 0x23fe94: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x23fe94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fe98: 0x95090006  lhu         $t1, 0x6($t0)
    ctx->pc = 0x23fe98u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x23fe9c: 0x312afffd  andi        $t2, $t1, 0xFFFD
    ctx->pc = 0x23fe9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65533);
    // 0x23fea0: 0xa50a0006  sh          $t2, 0x6($t0)
    ctx->pc = 0x23fea0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 10));
    // 0x23fea4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fea8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x23fea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_23feac:
    // 0x23feac: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x23feacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23feb0: 0x94c50006  lhu         $a1, 0x6($a2)
    ctx->pc = 0x23feb0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x23feb4: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x23feb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x23feb8: 0x30c70004  andi        $a3, $a2, 0x4
    ctx->pc = 0x23feb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x23febc: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x23FEBCu;
    {
        const bool branch_taken_0x23febc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x23febc) {
            ctx->pc = 0x23FEE0u;
            goto label_23fee0;
        }
    }
    ctx->pc = 0x23FEC4u;
    // 0x23fec4: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x23fec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fec8: 0x95090006  lhu         $t1, 0x6($t0)
    ctx->pc = 0x23fec8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x23fecc: 0x312afffb  andi        $t2, $t1, 0xFFFB
    ctx->pc = 0x23feccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65531);
    // 0x23fed0: 0xa50a0006  sh          $t2, 0x6($t0)
    ctx->pc = 0x23fed0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 10));
    // 0x23fed4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23fed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23fed8: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x23fed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fedc: 0xa1070001  sb          $a3, 0x1($t0)
    ctx->pc = 0x23fedcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 7));
label_23fee0:
    // 0x23fee0: 0x26090150  addiu       $t1, $s0, 0x150
    ctx->pc = 0x23fee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fee4: 0x912a0001  lbu         $t2, 0x1($t1)
    ctx->pc = 0x23fee4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x23fee8: 0x314500ff  andi        $a1, $t2, 0xFF
    ctx->pc = 0x23fee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x23feec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x23feecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23fef0: 0x10a6045b  beq         $a1, $a2, . + 4 + (0x45B << 2)
    ctx->pc = 0x23FEF0u;
    {
        const bool branch_taken_0x23fef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x23fef0) {
            ctx->pc = 0x241060u;
            goto label_241060;
        }
    }
    ctx->pc = 0x23FEF8u;
    // 0x23fef8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23fef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23fefc: 0x10a70452  beq         $a1, $a3, . + 4 + (0x452 << 2)
    ctx->pc = 0x23FEFCu;
    {
        const bool branch_taken_0x23fefc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x23fefc) {
            ctx->pc = 0x241048u;
            goto label_241048;
        }
    }
    ctx->pc = 0x23FF04u;
    // 0x23ff04: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x23ff04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ff08: 0x10a80482  beq         $a1, $t0, . + 4 + (0x482 << 2)
    ctx->pc = 0x23FF08u;
    {
        const bool branch_taken_0x23ff08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x23ff08) {
            ctx->pc = 0x241114u;
            goto label_241114;
        }
    }
    ctx->pc = 0x23FF10u;
    // 0x23ff10: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x23ff10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ff14: 0x10a9041f  beq         $a1, $t1, . + 4 + (0x41F << 2)
    ctx->pc = 0x23FF14u;
    {
        const bool branch_taken_0x23ff14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x23ff14) {
            ctx->pc = 0x240F94u;
            goto label_240f94;
        }
    }
    ctx->pc = 0x23FF1Cu;
    // 0x23ff1c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FF1Cu;
    {
        const bool branch_taken_0x23ff1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ff1c) {
            ctx->pc = 0x23FF2Cu;
            goto label_23ff2c;
        }
    }
    ctx->pc = 0x23FF24u;
    // 0x23ff24: 0x1000047b  b           . + 4 + (0x47B << 2)
    ctx->pc = 0x23FF24u;
    {
        const bool branch_taken_0x23ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ff24) {
            ctx->pc = 0x241114u;
            goto label_241114;
        }
    }
    ctx->pc = 0x23FF2Cu;
label_23ff2c:
    // 0x23ff2c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x23ff2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ff30: 0x26090150  addiu       $t1, $s0, 0x150
    ctx->pc = 0x23ff30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23ff34: 0xa12a0001  sb          $t2, 0x1($t1)
    ctx->pc = 0x23ff34u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 10));
    // 0x23ff38: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x23ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x23ff3c: 0x344ad70a  ori         $t2, $v0, 0xD70A
    ctx->pc = 0x23ff3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x23ff40: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x23ff40u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ff44: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x23ff44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23ff48: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x23ff48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x23ff4c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x23ff4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23ff50: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x23ff50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23ff54: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x23ff54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x23ff58: 0x24e90120  addiu       $t1, $a3, 0x120
    ctx->pc = 0x23ff58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x23ff5c: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x23ff5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x23ff60: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x23ff60u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
    // 0x23ff64: 0x2547d940  addiu       $a3, $t2, -0x26C0
    ctx->pc = 0x23ff64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957376));
    // 0x23ff68: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x23ff68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x23ff6c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x23FF6Cu;
    SET_GPR_U32(ctx, 31, 0x23FF74u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x23FF6Cu, 0x23FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF74u;
label_23ff74:
    // 0x23ff74: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x23ff74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23ff78: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x23ff78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23ff7c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x23ff7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x23ff80: 0x25220120  addiu       $v0, $t1, 0x120
    ctx->pc = 0x23ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 288));
    // 0x23ff84: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x23ff84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23ff88: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x23ff88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x23ff8c: 0x24c6d950  addiu       $a2, $a2, -0x26B0
    ctx->pc = 0x23ff8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957392));
    // 0x23ff90: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x23FF90u;
    SET_GPR_U32(ctx, 31, 0x23FF98u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x23FF90u, 0x23FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF98u;
label_23ff98:
    // 0x23ff98: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x23ff98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ff9c: 0x3c0743fa  lui         $a3, 0x43FA
    ctx->pc = 0x23ff9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17402 << 16));
    // 0x23ffa0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x23ffa0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ffa4: 0x0  nop
    ctx->pc = 0x23ffa4u;
    // NOP
    // 0x23ffa8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23ffa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23ffac: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x23ffacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x23ffb0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x23ffb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ffb4: 0x3c0843fa  lui         $t0, 0x43FA
    ctx->pc = 0x23ffb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17402 << 16));
    // 0x23ffb8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x23ffb8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ffbc: 0x0  nop
    ctx->pc = 0x23ffbcu;
    // NOP
    // 0x23ffc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23ffc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23ffc4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x23ffc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x23ffc8: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x23ffc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23ffcc: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x23ffccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x23ffd0: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x23ffd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x23ffd4: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x23ffd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x23ffd8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x23ffd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23ffdc: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x23ffdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23ffe0: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x23ffe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x23ffe4: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x23ffe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23ffe8: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x23ffe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23ffec: 0xc086908  jal         func_21A420
    ctx->pc = 0x23FFECu;
    SET_GPR_U32(ctx, 31, 0x23FFF4u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x23FFECu, 0x23FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FFF4u;
label_23fff4:
    // 0x23fff4: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x23fff4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23fff8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x23fff8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x23fffc: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x23fffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240000: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x240000u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x240004: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x240004u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240008: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x240008u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24000c: 0x8faa0058  lw          $t2, 0x58($sp)
    ctx->pc = 0x24000cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240010: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x240010u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240014: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240018: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240018u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24001c: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x24001cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240020: 0xc086908  jal         func_21A420
    ctx->pc = 0x240020u;
    SET_GPR_U32(ctx, 31, 0x240028u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240020u, 0x240028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240028u;
label_240028:
    // 0x240028: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x240028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24002c: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x24002cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
    // 0x240030: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x240030u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240034: 0x0  nop
    ctx->pc = 0x240034u;
    // NOP
    // 0x240038: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24003c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24003cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x240040: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240044: 0x3c08447a  lui         $t0, 0x447A
    ctx->pc = 0x240044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17530 << 16));
    // 0x240048: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x240048u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24004c: 0x0  nop
    ctx->pc = 0x24004cu;
    // NOP
    // 0x240050: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240054: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x240054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240058: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x240058u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24005c: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x24005cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240060: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x240060u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240064: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240064u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240068: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x240068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24006c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x24006cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240070: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240074: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240074u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240078: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240078u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x24007c: 0xc086908  jal         func_21A420
    ctx->pc = 0x24007Cu;
    SET_GPR_U32(ctx, 31, 0x240084u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x24007Cu, 0x240084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240084u;
label_240084:
    // 0x240084: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x240084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240088: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x240088u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24008c: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x24008cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240090: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x240090u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x240094: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x240094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240098: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x240098u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24009c: 0x8faa0058  lw          $t2, 0x58($sp)
    ctx->pc = 0x24009cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2400a0: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x2400a0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2400a4: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x2400a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2400a8: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2400a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2400ac: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x2400acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2400b0: 0xc086908  jal         func_21A420
    ctx->pc = 0x2400B0u;
    SET_GPR_U32(ctx, 31, 0x2400B8u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x2400B0u, 0x2400B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2400B8u;
label_2400b8:
    // 0x2400b8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2400b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2400bc: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x2400bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
    // 0x2400c0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2400c0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2400c4: 0x0  nop
    ctx->pc = 0x2400c4u;
    // NOP
    // 0x2400c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2400c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2400cc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2400ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2400d0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2400d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2400d4: 0x3c08447a  lui         $t0, 0x447A
    ctx->pc = 0x2400d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17530 << 16));
    // 0x2400d8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2400d8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2400dc: 0x0  nop
    ctx->pc = 0x2400dcu;
    // NOP
    // 0x2400e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2400e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2400e4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2400e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2400e8: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x2400e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2400ec: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2400ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2400f0: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x2400f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2400f4: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x2400f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2400f8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2400f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2400fc: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2400fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x240100: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x240100u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240104: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x240104u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x240108: 0x24090026  addiu       $t1, $zero, 0x26
    ctx->pc = 0x240108u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x24010c: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x24010cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240110: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x240110u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240114: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x240114u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240118: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240118u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x24011c: 0xc086908  jal         func_21A420
    ctx->pc = 0x24011Cu;
    SET_GPR_U32(ctx, 31, 0x240124u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x24011Cu, 0x240124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240124u;
label_240124:
    // 0x240124: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240128: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x240128u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x24012c: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x24012cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240130: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x240130u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x240134: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x240134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240138: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x240138u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24013c: 0x8faa0058  lw          $t2, 0x58($sp)
    ctx->pc = 0x24013cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240140: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x240140u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240144: 0x24090026  addiu       $t1, $zero, 0x26
    ctx->pc = 0x240144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240148: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x240148u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24014c: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x24014cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240150: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x240150u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240154: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240154u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240158: 0xc086908  jal         func_21A420
    ctx->pc = 0x240158u;
    SET_GPR_U32(ctx, 31, 0x240160u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240158u, 0x240160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240160u;
label_240160:
    // 0x240160: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240160u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240164: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x240164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240168: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x240168u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x24016c: 0x24e90120  addiu       $t1, $a3, 0x120
    ctx->pc = 0x24016cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x240170: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x240170u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240174: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x240174u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
    // 0x240178: 0x2547d950  addiu       $a3, $t2, -0x26B0
    ctx->pc = 0x240178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957392));
    // 0x24017c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x24017cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x240180: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x240180u;
    SET_GPR_U32(ctx, 31, 0x240188u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x240180u, 0x240188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240188u;
label_240188:
    // 0x240188: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x240188u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24018c: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x24018cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240190: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x240190u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240194: 0x25250120  addiu       $a1, $t1, 0x120
    ctx->pc = 0x240194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 288));
    // 0x240198: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x240198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x24019c: 0x2446d960  addiu       $a2, $v0, -0x26A0
    ctx->pc = 0x24019cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957408));
    // 0x2401a0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2401A0u;
    SET_GPR_U32(ctx, 31, 0x2401A8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2401A0u, 0x2401A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2401A8u;
label_2401a8:
    // 0x2401a8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2401a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2401ac: 0x3c0743fa  lui         $a3, 0x43FA
    ctx->pc = 0x2401acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17402 << 16));
    // 0x2401b0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2401b0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2401b4: 0x0  nop
    ctx->pc = 0x2401b4u;
    // NOP
    // 0x2401b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2401b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2401bc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2401bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2401c0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2401c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2401c4: 0x3c0843fa  lui         $t0, 0x43FA
    ctx->pc = 0x2401c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17402 << 16));
    // 0x2401c8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2401c8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2401cc: 0x0  nop
    ctx->pc = 0x2401ccu;
    // NOP
    // 0x2401d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2401d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2401d4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2401d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2401d8: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x2401d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2401dc: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2401dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2401e0: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x2401e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2401e4: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x2401e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2401e8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2401e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2401ec: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x2401ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2401f0: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x2401f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2401f4: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2401f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2401f8: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x2401f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2401fc: 0xc086908  jal         func_21A420
    ctx->pc = 0x2401FCu;
    SET_GPR_U32(ctx, 31, 0x240204u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x2401FCu, 0x240204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240204u;
label_240204:
    // 0x240204: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240204u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240208: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x240208u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x24020c: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x24020cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240210: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x240210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x240214: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x240214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240218: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x240218u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24021c: 0x8faa0058  lw          $t2, 0x58($sp)
    ctx->pc = 0x24021cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240220: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x240220u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240224: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240228: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24022c: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x24022cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240230: 0xc086908  jal         func_21A420
    ctx->pc = 0x240230u;
    SET_GPR_U32(ctx, 31, 0x240238u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240230u, 0x240238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240238u;
label_240238:
    // 0x240238: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x240238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24023c: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x24023cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
    // 0x240240: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x240240u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240244: 0x0  nop
    ctx->pc = 0x240244u;
    // NOP
    // 0x240248: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24024c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24024cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x240250: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240254: 0x3c08447a  lui         $t0, 0x447A
    ctx->pc = 0x240254u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17530 << 16));
    // 0x240258: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x240258u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24025c: 0x0  nop
    ctx->pc = 0x24025cu;
    // NOP
    // 0x240260: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240264: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x240264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240268: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x240268u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24026c: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x24026cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240270: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x240270u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240274: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240274u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240278: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x240278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24027c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x24027cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240280: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240284: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240288: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240288u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x24028c: 0xc086908  jal         func_21A420
    ctx->pc = 0x24028Cu;
    SET_GPR_U32(ctx, 31, 0x240294u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x24028Cu, 0x240294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240294u;
label_240294:
    // 0x240294: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x240294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240298: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x240298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x24029c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x24029cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2402a0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x2402a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2402a4: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x2402a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2402a8: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2402a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2402ac: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x2402acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2402b0: 0xc086908  jal         func_21A420
    ctx->pc = 0x2402B0u;
    SET_GPR_U32(ctx, 31, 0x2402B8u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x2402B0u, 0x2402B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402B8u;
label_2402b8:
    // 0x2402b8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2402b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2402bc: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2402bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2402c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2402c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2402c4: 0x0  nop
    ctx->pc = 0x2402c4u;
    // NOP
    // 0x2402c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2402c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2402cc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2402ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2402d0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2402d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2402d4: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x2402d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
    // 0x2402d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2402d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2402dc: 0x0  nop
    ctx->pc = 0x2402dcu;
    // NOP
    // 0x2402e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2402e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2402e4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2402e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2402e8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2402e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2402ec: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2402ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2402f0: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x2402f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2402f4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2402f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2402f8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2402f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2402fc: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2402fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x240300: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x240300u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240304: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x240304u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x240308: 0x24090026  addiu       $t1, $zero, 0x26
    ctx->pc = 0x240308u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x24030c: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x24030cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240310: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x240310u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240314: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x240314u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240318: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240318u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x24031c: 0xc086908  jal         func_21A420
    ctx->pc = 0x24031Cu;
    SET_GPR_U32(ctx, 31, 0x240324u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x24031Cu, 0x240324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240324u;
label_240324:
    // 0x240324: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x240324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240328: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x240328u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x24032c: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x24032cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240330: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x240330u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x240334: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x240334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240338: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x240338u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x24033c: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x24033cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240340: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x240340u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x240344: 0x24090026  addiu       $t1, $zero, 0x26
    ctx->pc = 0x240344u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240348: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x240348u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24034c: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x24034cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240350: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x240350u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240354: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240354u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240358: 0xc086908  jal         func_21A420
    ctx->pc = 0x240358u;
    SET_GPR_U32(ctx, 31, 0x240360u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240358u, 0x240360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240360u;
label_240360:
    // 0x240360: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x240360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240364: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x240364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240368: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x240368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x24036c: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x24036cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x240370: 0x24c7d960  addiu       $a3, $a2, -0x26A0
    ctx->pc = 0x240370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957408));
    // 0x240374: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x240374u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x240378: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x240378u;
    SET_GPR_U32(ctx, 31, 0x240380u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x240378u, 0x240380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240380u;
label_240380:
    // 0x240380: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x240380u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240384: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x240384u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240388: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x240388u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x24038c: 0x25250120  addiu       $a1, $t1, 0x120
    ctx->pc = 0x24038cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 288));
    // 0x240390: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x240390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x240394: 0x2446d970  addiu       $a2, $v0, -0x2690
    ctx->pc = 0x240394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957424));
    // 0x240398: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x240398u;
    SET_GPR_U32(ctx, 31, 0x2403A0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x240398u, 0x2403A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2403A0u;
label_2403a0:
    // 0x2403a0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2403a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2403a4: 0x3c0743fa  lui         $a3, 0x43FA
    ctx->pc = 0x2403a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17402 << 16));
    // 0x2403a8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2403a8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2403ac: 0x0  nop
    ctx->pc = 0x2403acu;
    // NOP
    // 0x2403b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2403b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2403b4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2403b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2403b8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2403b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2403bc: 0x3c0843fa  lui         $t0, 0x43FA
    ctx->pc = 0x2403bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17402 << 16));
    // 0x2403c0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2403c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2403c4: 0x0  nop
    ctx->pc = 0x2403c4u;
    // NOP
    // 0x2403c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2403c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2403cc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2403ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2403d0: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x2403d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2403d4: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2403d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2403d8: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x2403d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2403dc: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x2403dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2403e0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2403e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2403e4: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x2403e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2403e8: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x2403e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2403ec: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2403ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2403f0: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x2403f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2403f4: 0xc086908  jal         func_21A420
    ctx->pc = 0x2403F4u;
    SET_GPR_U32(ctx, 31, 0x2403FCu);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x2403F4u, 0x2403FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2403FCu;
label_2403fc:
    // 0x2403fc: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x2403fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240400: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x240400u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x240404: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240408: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x240408u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x24040c: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x24040cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240410: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x240410u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240414: 0x8faa0058  lw          $t2, 0x58($sp)
    ctx->pc = 0x240414u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240418: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x240418u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x24041c: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x24041cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240420: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240424: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240424u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240428: 0xc086908  jal         func_21A420
    ctx->pc = 0x240428u;
    SET_GPR_U32(ctx, 31, 0x240430u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240428u, 0x240430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240430u;
label_240430:
    // 0x240430: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x240430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240434: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x240434u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
    // 0x240438: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x240438u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24043c: 0x0  nop
    ctx->pc = 0x24043cu;
    // NOP
    // 0x240440: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240444: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x240444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x240448: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24044c: 0x3c08447a  lui         $t0, 0x447A
    ctx->pc = 0x24044cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17530 << 16));
    // 0x240450: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x240450u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240454: 0x0  nop
    ctx->pc = 0x240454u;
    // NOP
    // 0x240458: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24045c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24045cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240460: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x240460u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240464: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x240464u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240468: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x240468u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x24046c: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x24046cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240470: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x240470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240474: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240478: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x24047c: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x24047cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240480: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240484: 0xc086908  jal         func_21A420
    ctx->pc = 0x240484u;
    SET_GPR_U32(ctx, 31, 0x24048Cu);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240484u, 0x24048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24048Cu;
label_24048c:
    // 0x24048c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24048cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240490: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x240490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240494: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x240494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240498: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240498u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24049c: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x24049cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2404a0: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2404a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2404a4: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x2404a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2404a8: 0xc086908  jal         func_21A420
    ctx->pc = 0x2404A8u;
    SET_GPR_U32(ctx, 31, 0x2404B0u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x2404A8u, 0x2404B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404B0u;
label_2404b0:
    // 0x2404b0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2404b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2404b4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2404b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2404b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2404b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2404bc: 0x0  nop
    ctx->pc = 0x2404bcu;
    // NOP
    // 0x2404c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2404c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2404c4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2404c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2404c8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2404c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2404cc: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x2404ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
    // 0x2404d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2404d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2404d4: 0x0  nop
    ctx->pc = 0x2404d4u;
    // NOP
    // 0x2404d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2404d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2404dc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2404dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2404e0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2404e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2404e4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2404e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2404e8: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x2404e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2404ec: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2404ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2404f0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2404f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2404f4: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2404f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2404f8: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x2404f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2404fc: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2404fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x240500: 0x24090026  addiu       $t1, $zero, 0x26
    ctx->pc = 0x240500u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240504: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x240504u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240508: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x240508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24050c: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x24050cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240510: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240510u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240514: 0xc086908  jal         func_21A420
    ctx->pc = 0x240514u;
    SET_GPR_U32(ctx, 31, 0x24051Cu);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240514u, 0x24051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24051Cu;
label_24051c:
    // 0x24051c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x24051cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240520: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x240520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240524: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x240524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240528: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24052c: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x24052cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240530: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240530u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240534: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240534u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240538: 0xc086908  jal         func_21A420
    ctx->pc = 0x240538u;
    SET_GPR_U32(ctx, 31, 0x240540u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240538u, 0x240540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240540u;
label_240540:
    // 0x240540: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x240540u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240544: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x240544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240548: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x240548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24054c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x24054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x240550: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x240550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x240554: 0x2466d970  addiu       $a2, $v1, -0x2690
    ctx->pc = 0x240554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957424));
    // 0x240558: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x240558u;
    SET_GPR_U32(ctx, 31, 0x240560u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x240558u, 0x240560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240560u;
label_240560:
    // 0x240560: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x240560u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240564: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x240564u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240568: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24056c: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x24056cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240570: 0x250a0120  addiu       $t2, $t0, 0x120
    ctx->pc = 0x240570u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 288));
    // 0x240574: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240574u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240578: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x240578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x24057c: 0x2466d980  addiu       $a2, $v1, -0x2680
    ctx->pc = 0x24057cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957440));
    // 0x240580: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x240580u;
    SET_GPR_U32(ctx, 31, 0x240588u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x240580u, 0x240588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240588u;
label_240588:
    // 0x240588: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x240588u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24058c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x24058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240590: 0x3c0643fa  lui         $a2, 0x43FA
    ctx->pc = 0x240590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17402 << 16));
    // 0x240594: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x240594u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240598: 0x0  nop
    ctx->pc = 0x240598u;
    // NOP
    // 0x24059c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24059cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2405a0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2405a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2405a4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2405a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2405a8: 0x3c0743fa  lui         $a3, 0x43FA
    ctx->pc = 0x2405a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17402 << 16));
    // 0x2405ac: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2405acu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2405b0: 0x0  nop
    ctx->pc = 0x2405b0u;
    // NOP
    // 0x2405b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2405b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2405b8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2405b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2405bc: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x2405bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2405c0: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2405c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2405c4: 0x24090026  addiu       $t1, $zero, 0x26
    ctx->pc = 0x2405c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2405c8: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2405c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2405cc: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x2405ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2405d0: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x2405d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2405d4: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x2405d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2405d8: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x2405d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2405dc: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2405dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2405e0: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x2405e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2405e4: 0xc086908  jal         func_21A420
    ctx->pc = 0x2405E4u;
    SET_GPR_U32(ctx, 31, 0x2405ECu);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x2405E4u, 0x2405ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405ECu;
label_2405ec:
    // 0x2405ec: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2405ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2405f0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x2405f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2405f4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2405f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2405f8: 0x24070026  addiu       $a3, $zero, 0x26
    ctx->pc = 0x2405f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2405fc: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2405fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x240600: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x240600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240604: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x240604u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x240608: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x240608u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24060c: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x24060cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240610: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x240610u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240614: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x240614u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240618: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24061c: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x24061cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240620: 0xc086908  jal         func_21A420
    ctx->pc = 0x240620u;
    SET_GPR_U32(ctx, 31, 0x240628u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240620u, 0x240628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240628u;
label_240628:
    // 0x240628: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x240628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24062c: 0x3c06447a  lui         $a2, 0x447A
    ctx->pc = 0x24062cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17530 << 16));
    // 0x240630: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x240630u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240634: 0x0  nop
    ctx->pc = 0x240634u;
    // NOP
    // 0x240638: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24063c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24063cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x240640: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240644: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x240644u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
    // 0x240648: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x240648u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24064c: 0x0  nop
    ctx->pc = 0x24064cu;
    // NOP
    // 0x240650: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240654: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x240654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240658: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x240658u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24065c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x24065cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x240660: 0x24090026  addiu       $t1, $zero, 0x26
    ctx->pc = 0x240660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240664: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x240664u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240668: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x240668u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24066c: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x24066cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240670: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240674: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x240674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240678: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x240678u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24067c: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x24067cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240680: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240680u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240684: 0xc086908  jal         func_21A420
    ctx->pc = 0x240684u;
    SET_GPR_U32(ctx, 31, 0x24068Cu);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240684u, 0x24068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24068Cu;
label_24068c:
    // 0x24068c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x24068cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240690: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x240690u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x240694: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x240694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240698: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x240698u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x24069c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2406a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2406a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2406a4: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x2406a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2406a8: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x2406a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2406ac: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2406acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2406b0: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x2406b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2406b4: 0xc086908  jal         func_21A420
    ctx->pc = 0x2406B4u;
    SET_GPR_U32(ctx, 31, 0x2406BCu);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x2406B4u, 0x2406BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2406BCu;
label_2406bc:
    // 0x2406bc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2406bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2406c0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2406c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2406c4: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x2406c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
    // 0x2406c8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2406c8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2406cc: 0x0  nop
    ctx->pc = 0x2406ccu;
    // NOP
    // 0x2406d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2406d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2406d4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2406d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2406d8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2406d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2406dc: 0x3c08447a  lui         $t0, 0x447A
    ctx->pc = 0x2406dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17530 << 16));
    // 0x2406e0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2406e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2406e4: 0x0  nop
    ctx->pc = 0x2406e4u;
    // NOP
    // 0x2406e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2406e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2406ec: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2406ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2406f0: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x2406f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2406f4: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2406f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2406f8: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x2406f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2406fc: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x2406fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240700: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x240700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240704: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240704u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240708: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24070c: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x24070cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240710: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240710u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240714: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240714u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240718: 0xc086908  jal         func_21A420
    ctx->pc = 0x240718u;
    SET_GPR_U32(ctx, 31, 0x240720u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240718u, 0x240720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240720u;
label_240720:
    // 0x240720: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x240720u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240724: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x240724u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240728: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x240728u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24072c: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x24072cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240730: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240730u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240734: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x240734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240738: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240738u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24073c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x24073cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240740: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240744: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240748: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x24074c: 0xc086908  jal         func_21A420
    ctx->pc = 0x24074Cu;
    SET_GPR_U32(ctx, 31, 0x240754u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x24074Cu, 0x240754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240754u;
label_240754:
    // 0x240754: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240754u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240758: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24075c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x24075cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240760: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x240760u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x240764: 0x24e90120  addiu       $t1, $a3, 0x120
    ctx->pc = 0x240764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x240768: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x240768u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24076c: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x24076cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
    // 0x240770: 0x2542d980  addiu       $v0, $t2, -0x2680
    ctx->pc = 0x240770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957440));
    // 0x240774: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240774u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240778: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x240778u;
    SET_GPR_U32(ctx, 31, 0x240780u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x240778u, 0x240780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240780u;
label_240780:
    // 0x240780: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x240780u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240784: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240788: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x240788u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24078c: 0x250a0120  addiu       $t2, $t0, 0x120
    ctx->pc = 0x24078cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 288));
    // 0x240790: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240794: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x240794u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x240798: 0x2509d990  addiu       $t1, $t0, -0x2670
    ctx->pc = 0x240798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957456));
    // 0x24079c: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x24079cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2407a0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2407A0u;
    SET_GPR_U32(ctx, 31, 0x2407A8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2407A0u, 0x2407A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407A8u;
label_2407a8:
    // 0x2407a8: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2407a8u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2407ac: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2407acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2407b0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2407b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2407b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2407b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2407b8: 0x0  nop
    ctx->pc = 0x2407b8u;
    // NOP
    // 0x2407bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2407bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2407c0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2407c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2407c4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2407c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2407c8: 0x3c0743fa  lui         $a3, 0x43FA
    ctx->pc = 0x2407c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17402 << 16));
    // 0x2407cc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2407ccu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2407d0: 0x0  nop
    ctx->pc = 0x2407d0u;
    // NOP
    // 0x2407d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2407d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2407d8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2407d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2407dc: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x2407dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2407e0: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2407e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2407e4: 0x24090026  addiu       $t1, $zero, 0x26
    ctx->pc = 0x2407e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2407e8: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2407e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2407ec: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x2407ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2407f0: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x2407f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2407f4: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x2407f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2407f8: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x2407f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2407fc: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2407fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240800: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240800u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240804: 0xc086908  jal         func_21A420
    ctx->pc = 0x240804u;
    SET_GPR_U32(ctx, 31, 0x24080Cu);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240804u, 0x24080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24080Cu;
label_24080c:
    // 0x24080c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x24080cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240810: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x240810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240814: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x240814u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240818: 0x24070026  addiu       $a3, $zero, 0x26
    ctx->pc = 0x240818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x24081c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x24081cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x240820: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x240820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240824: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x240824u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x240828: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x240828u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24082c: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x24082cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240830: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x240830u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240834: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x240834u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240838: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24083c: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x24083cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240840: 0xc086908  jal         func_21A420
    ctx->pc = 0x240840u;
    SET_GPR_U32(ctx, 31, 0x240848u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240840u, 0x240848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240848u;
label_240848:
    // 0x240848: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x240848u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24084c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x24084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240850: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x240850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x240854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x240854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240858: 0x0  nop
    ctx->pc = 0x240858u;
    // NOP
    // 0x24085c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24085cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240860: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x240860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x240864: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240868: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x240868u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
    // 0x24086c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x24086cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240870: 0x0  nop
    ctx->pc = 0x240870u;
    // NOP
    // 0x240874: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240878: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x240878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24087c: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x24087cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240880: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x240880u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x240884: 0x24090026  addiu       $t1, $zero, 0x26
    ctx->pc = 0x240884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240888: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x240888u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x24088c: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x24088cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240890: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x240890u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240894: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240898: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x240898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x24089c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x24089cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2408a0: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2408a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2408a4: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x2408a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2408a8: 0xc086908  jal         func_21A420
    ctx->pc = 0x2408A8u;
    SET_GPR_U32(ctx, 31, 0x2408B0u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x2408A8u, 0x2408B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2408B0u;
label_2408b0:
    // 0x2408b0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2408b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2408b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2408b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2408b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2408b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2408bc: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x2408bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2408c0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2408c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2408c4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2408c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2408c8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2408c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2408cc: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x2408ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2408d0: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x2408d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2408d4: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2408d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2408d8: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x2408d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2408dc: 0xc086908  jal         func_21A420
    ctx->pc = 0x2408DCu;
    SET_GPR_U32(ctx, 31, 0x2408E4u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x2408DCu, 0x2408E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2408E4u;
label_2408e4:
    // 0x2408e4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2408e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2408e8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2408e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2408ec: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x2408ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
    // 0x2408f0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2408f0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2408f4: 0x0  nop
    ctx->pc = 0x2408f4u;
    // NOP
    // 0x2408f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2408f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2408fc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2408fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x240900: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240904: 0x3c08447a  lui         $t0, 0x447A
    ctx->pc = 0x240904u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17530 << 16));
    // 0x240908: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x240908u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24090c: 0x0  nop
    ctx->pc = 0x24090cu;
    // NOP
    // 0x240910: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240914: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x240914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240918: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x240918u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24091c: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x24091cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240920: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x240920u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240924: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240924u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240928: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x240928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24092c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24092cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240930: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240934: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240938: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240938u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24093c: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x24093cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240940: 0xc086908  jal         func_21A420
    ctx->pc = 0x240940u;
    SET_GPR_U32(ctx, 31, 0x240948u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240940u, 0x240948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240948u;
label_240948:
    // 0x240948: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x240948u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24094c: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x24094cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240950: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x240950u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240954: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x240954u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240958: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240958u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x24095c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24095cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240960: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240960u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240964: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240964u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240968: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x24096c: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x24096cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240970: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240970u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240974: 0xc086908  jal         func_21A420
    ctx->pc = 0x240974u;
    SET_GPR_U32(ctx, 31, 0x24097Cu);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240974u, 0x24097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24097Cu;
label_24097c:
    // 0x24097c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24097cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240980: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240980u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240984: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x240984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240988: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x240988u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x24098c: 0x24e90120  addiu       $t1, $a3, 0x120
    ctx->pc = 0x24098cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x240990: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x240990u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240994: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x240994u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
    // 0x240998: 0x2542d990  addiu       $v0, $t2, -0x2670
    ctx->pc = 0x240998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957456));
    // 0x24099c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24099cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2409a0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2409A0u;
    SET_GPR_U32(ctx, 31, 0x2409A8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2409A0u, 0x2409A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409A8u;
label_2409a8:
    // 0x2409a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2409a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2409ac: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2409acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2409b0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2409b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2409b4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2409b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2409b8: 0x24a70120  addiu       $a3, $a1, 0x120
    ctx->pc = 0x2409b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2409bc: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2409bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2409c0: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x2409c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x2409c4: 0x2509d9a0  addiu       $t1, $t0, -0x2660
    ctx->pc = 0x2409c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957472));
    // 0x2409c8: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2409c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2409cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2409CCu;
    SET_GPR_U32(ctx, 31, 0x2409D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2409CCu, 0x2409D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409D4u;
label_2409d4:
    // 0x2409d4: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2409d4u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2409d8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2409d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2409dc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2409dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2409e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2409e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2409e4: 0x0  nop
    ctx->pc = 0x2409e4u;
    // NOP
    // 0x2409e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2409e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2409ec: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2409ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2409f0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2409f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2409f4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2409f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2409f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2409f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2409fc: 0x0  nop
    ctx->pc = 0x2409fcu;
    // NOP
    // 0x240a00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x240a00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x240a04: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x240a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240a08: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x240a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240a0c: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x240a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240a10: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x240a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240a14: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240a14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240a18: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240a18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240a1c: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240a1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240a20: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240a20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240a24: 0xc086908  jal         func_21A420
    ctx->pc = 0x240A24u;
    SET_GPR_U32(ctx, 31, 0x240A2Cu);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240A24u, 0x240A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A2Cu;
label_240a2c:
    // 0x240a2c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x240a2cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240a30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x240a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240a34: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x240a34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240a38: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x240a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240a3c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x240a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240a40: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240a40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240a44: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240a48: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240a48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240a4c: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240a4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240a50: 0xc086908  jal         func_21A420
    ctx->pc = 0x240A50u;
    SET_GPR_U32(ctx, 31, 0x240A58u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240A50u, 0x240A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A58u;
label_240a58:
    // 0x240a58: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x240a58u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240a5c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x240a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240a60: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x240a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x240a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x240a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240a68: 0x0  nop
    ctx->pc = 0x240a68u;
    // NOP
    // 0x240a6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240a6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240a70: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x240a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x240a74: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240a78: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x240a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x240a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x240a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240a80: 0x0  nop
    ctx->pc = 0x240a80u;
    // NOP
    // 0x240a84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240a88: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x240a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240a8c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x240a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240a90: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x240a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240a94: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x240a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240a98: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240a98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240a9c: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x240a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240aa0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x240aa0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240aa4: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240aa8: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240aac: 0xc086908  jal         func_21A420
    ctx->pc = 0x240AACu;
    SET_GPR_U32(ctx, 31, 0x240AB4u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240AACu, 0x240AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240AB4u;
label_240ab4:
    // 0x240ab4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x240ab4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240ab8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x240ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240abc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x240abcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240ac0: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x240ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240ac4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x240ac4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x240ac8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x240ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240acc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240accu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240ad0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240ad4: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240ad8: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240adc: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240adcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240ae0: 0xc086908  jal         func_21A420
    ctx->pc = 0x240AE0u;
    SET_GPR_U32(ctx, 31, 0x240AE8u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240AE0u, 0x240AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240AE8u;
label_240ae8:
    // 0x240ae8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240ae8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240aec: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x240aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240af0: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x240af0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
    // 0x240af4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x240af4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240af8: 0x0  nop
    ctx->pc = 0x240af8u;
    // NOP
    // 0x240afc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240afcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240b00: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x240b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x240b04: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240b08: 0x3c08447a  lui         $t0, 0x447A
    ctx->pc = 0x240b08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17530 << 16));
    // 0x240b0c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x240b0cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240b10: 0x0  nop
    ctx->pc = 0x240b10u;
    // NOP
    // 0x240b14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240b14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240b18: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x240b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240b1c: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x240b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240b20: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x240b20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240b24: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x240b24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240b28: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240b28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240b2c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x240b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240b30: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240b30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240b34: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240b34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240b38: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240b38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240b3c: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240b40: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240b40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240b44: 0xc086908  jal         func_21A420
    ctx->pc = 0x240B44u;
    SET_GPR_U32(ctx, 31, 0x240B4Cu);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240B44u, 0x240B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B4Cu;
label_240b4c:
    // 0x240b4c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x240b4cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240b50: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x240b50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240b54: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x240b54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240b58: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x240b58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240b5c: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240b5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240b60: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x240b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240b64: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240b64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240b68: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240b68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240b6c: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240b6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240b70: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240b70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240b74: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240b74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240b78: 0xc086908  jal         func_21A420
    ctx->pc = 0x240B78u;
    SET_GPR_U32(ctx, 31, 0x240B80u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240B78u, 0x240B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B80u;
label_240b80:
    // 0x240b80: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240b80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240b84: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240b84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240b88: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x240b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240b8c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x240b8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x240b90: 0x24e90120  addiu       $t1, $a3, 0x120
    ctx->pc = 0x240b90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x240b94: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x240b94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240b98: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x240b98u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
    // 0x240b9c: 0x2542d9a0  addiu       $v0, $t2, -0x2660
    ctx->pc = 0x240b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957472));
    // 0x240ba0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240ba0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240ba4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x240BA4u;
    SET_GPR_U32(ctx, 31, 0x240BACu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x240BA4u, 0x240BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240BACu;
label_240bac:
    // 0x240bac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x240bacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240bb0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x240bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240bb4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x240bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240bb8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x240bb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x240bbc: 0x24a70120  addiu       $a3, $a1, 0x120
    ctx->pc = 0x240bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x240bc0: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x240bc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x240bc4: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x240bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x240bc8: 0x2509d9b0  addiu       $t1, $t0, -0x2650
    ctx->pc = 0x240bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957488));
    // 0x240bcc: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x240bccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240bd0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x240BD0u;
    SET_GPR_U32(ctx, 31, 0x240BD8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x240BD0u, 0x240BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240BD8u;
label_240bd8:
    // 0x240bd8: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x240bd8u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240bdc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x240bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240be0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x240be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x240be4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x240be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240be8: 0x0  nop
    ctx->pc = 0x240be8u;
    // NOP
    // 0x240bec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x240becu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x240bf0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x240bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x240bf4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240bf8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x240bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x240bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x240bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240c00: 0x0  nop
    ctx->pc = 0x240c00u;
    // NOP
    // 0x240c04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x240c04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x240c08: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x240c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240c0c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x240c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240c10: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x240c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240c14: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x240c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240c18: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240c1c: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240c20: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240c20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240c24: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240c24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240c28: 0xc086908  jal         func_21A420
    ctx->pc = 0x240C28u;
    SET_GPR_U32(ctx, 31, 0x240C30u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240C28u, 0x240C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C30u;
label_240c30:
    // 0x240c30: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x240c30u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240c34: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x240c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240c38: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x240c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240c3c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x240c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240c40: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240c40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240c44: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240c48: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240c48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240c4c: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240c4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240c50: 0xc086908  jal         func_21A420
    ctx->pc = 0x240C50u;
    SET_GPR_U32(ctx, 31, 0x240C58u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240C50u, 0x240C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C58u;
label_240c58:
    // 0x240c58: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x240c58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240c5c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x240c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240c60: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x240c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x240c64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x240c64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240c68: 0x0  nop
    ctx->pc = 0x240c68u;
    // NOP
    // 0x240c6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240c70: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x240c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x240c74: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240c78: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x240c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
    // 0x240c7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x240c7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240c80: 0x0  nop
    ctx->pc = 0x240c80u;
    // NOP
    // 0x240c84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240c84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240c88: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x240c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240c8c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x240c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240c90: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x240c90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x240c94: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x240c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240c98: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x240c98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x240c9c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x240c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240ca0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240ca4: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240ca8: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240cac: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240cacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240cb0: 0xc086908  jal         func_21A420
    ctx->pc = 0x240CB0u;
    SET_GPR_U32(ctx, 31, 0x240CB8u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240CB0u, 0x240CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240CB8u;
label_240cb8:
    // 0x240cb8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x240cb8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240cbc: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x240cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240cc0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x240cc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x240cc4: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x240cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240cc8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x240cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240ccc: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240cccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240cd0: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240cd4: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240cd8: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240cd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240cdc: 0xc086908  jal         func_21A420
    ctx->pc = 0x240CDCu;
    SET_GPR_U32(ctx, 31, 0x240CE4u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240CDCu, 0x240CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240CE4u;
label_240ce4:
    // 0x240ce4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x240ce4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240ce8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x240ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240cec: 0x3c08447a  lui         $t0, 0x447A
    ctx->pc = 0x240cecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17530 << 16));
    // 0x240cf0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x240cf0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240cf4: 0x0  nop
    ctx->pc = 0x240cf4u;
    // NOP
    // 0x240cf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240cfc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x240cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x240d00: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240d04: 0x3c09447a  lui         $t1, 0x447A
    ctx->pc = 0x240d04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17530 << 16));
    // 0x240d08: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x240d08u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240d0c: 0x0  nop
    ctx->pc = 0x240d0cu;
    // NOP
    // 0x240d10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240d10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240d14: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x240d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240d18: 0x8faa0058  lw          $t2, 0x58($sp)
    ctx->pc = 0x240d18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240d1c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x240d1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240d20: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x240d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240d24: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x240d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240d28: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240d28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240d2c: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240d30: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240d30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240d34: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240d34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240d38: 0xc086908  jal         func_21A420
    ctx->pc = 0x240D38u;
    SET_GPR_U32(ctx, 31, 0x240D40u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240D38u, 0x240D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D40u;
label_240d40:
    // 0x240d40: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x240d40u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240d44: 0x8faa0058  lw          $t2, 0x58($sp)
    ctx->pc = 0x240d44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240d48: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x240d48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240d4c: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x240d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240d50: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x240d50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240d54: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x240d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240d58: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240d5c: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240d60: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240d60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240d64: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240d64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240d68: 0xc086908  jal         func_21A420
    ctx->pc = 0x240D68u;
    SET_GPR_U32(ctx, 31, 0x240D70u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240D68u, 0x240D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D70u;
label_240d70:
    // 0x240d70: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x240d70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240d74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x240d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240d78: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x240d78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240d7c: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x240d7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240d80: 0x244a0120  addiu       $t2, $v0, 0x120
    ctx->pc = 0x240d80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x240d84: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240d84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240d88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x240d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x240d8c: 0x2446d9b0  addiu       $a2, $v0, -0x2650
    ctx->pc = 0x240d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957488));
    // 0x240d90: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x240D90u;
    SET_GPR_U32(ctx, 31, 0x240D98u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x240D90u, 0x240D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D98u;
label_240d98:
    // 0x240d98: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240d98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240d9c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x240d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240da0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x240da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240da4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x240da4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x240da8: 0x24480120  addiu       $t0, $v0, 0x120
    ctx->pc = 0x240da8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x240dac: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x240dacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x240db0: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x240db0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x240db4: 0x252ad940  addiu       $t2, $t1, -0x26C0
    ctx->pc = 0x240db4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957376));
    // 0x240db8: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x240db8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240dbc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x240DBCu;
    SET_GPR_U32(ctx, 31, 0x240DC4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x240DBCu, 0x240DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240DC4u;
label_240dc4:
    // 0x240dc4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240dc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240dc8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x240dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240dcc: 0x3c0743fa  lui         $a3, 0x43FA
    ctx->pc = 0x240dccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17402 << 16));
    // 0x240dd0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x240dd0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240dd4: 0x0  nop
    ctx->pc = 0x240dd4u;
    // NOP
    // 0x240dd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x240dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x240ddc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x240ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x240de0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240de4: 0x3c0843fa  lui         $t0, 0x43FA
    ctx->pc = 0x240de4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17402 << 16));
    // 0x240de8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x240de8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240dec: 0x0  nop
    ctx->pc = 0x240decu;
    // NOP
    // 0x240df0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x240df0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x240df4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x240df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240df8: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x240df8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240dfc: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x240dfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240e00: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x240e00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240e04: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240e04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240e08: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x240e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240e0c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240e0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240e10: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240e10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240e14: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240e18: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240e18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240e1c: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240e1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240e20: 0xc086908  jal         func_21A420
    ctx->pc = 0x240E20u;
    SET_GPR_U32(ctx, 31, 0x240E28u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240E20u, 0x240E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E28u;
label_240e28:
    // 0x240e28: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x240e28u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240e2c: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x240e2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240e30: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x240e30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240e34: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x240e34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240e38: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240e38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240e3c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x240e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240e40: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240e40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240e44: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240e44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240e48: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240e4c: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240e4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240e50: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240e50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240e54: 0xc086908  jal         func_21A420
    ctx->pc = 0x240E54u;
    SET_GPR_U32(ctx, 31, 0x240E5Cu);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240E54u, 0x240E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E5Cu;
label_240e5c:
    // 0x240e5c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240e5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240e60: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x240e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240e64: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x240e64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
    // 0x240e68: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x240e68u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240e6c: 0x0  nop
    ctx->pc = 0x240e6cu;
    // NOP
    // 0x240e70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240e70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240e74: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x240e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x240e78: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240e7c: 0x3c08447a  lui         $t0, 0x447A
    ctx->pc = 0x240e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17530 << 16));
    // 0x240e80: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x240e80u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240e84: 0x0  nop
    ctx->pc = 0x240e84u;
    // NOP
    // 0x240e88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240e88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240e8c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x240e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240e90: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x240e90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240e94: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x240e94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240e98: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x240e98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240e9c: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240e9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240ea0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x240ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240ea4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240ea4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240ea8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x240ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240eac: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x240eacu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240eb0: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240eb4: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240eb8: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240eb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240ebc: 0xc086908  jal         func_21A420
    ctx->pc = 0x240EBCu;
    SET_GPR_U32(ctx, 31, 0x240EC4u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240EBCu, 0x240EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240EC4u;
label_240ec4:
    // 0x240ec4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x240ec4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240ec8: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x240ec8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240ecc: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x240eccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x240ed0: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x240ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240ed4: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240ed4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240ed8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x240ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240edc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240edcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240ee0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240ee4: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240ee8: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240eec: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240eecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240ef0: 0xc086908  jal         func_21A420
    ctx->pc = 0x240EF0u;
    SET_GPR_U32(ctx, 31, 0x240EF8u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240EF0u, 0x240EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240EF8u;
label_240ef8:
    // 0x240ef8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x240ef8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240efc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x240efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240f00: 0x3c08447a  lui         $t0, 0x447A
    ctx->pc = 0x240f00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17530 << 16));
    // 0x240f04: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x240f04u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240f08: 0x0  nop
    ctx->pc = 0x240f08u;
    // NOP
    // 0x240f0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240f10: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x240f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x240f14: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x240f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240f18: 0x3c09447a  lui         $t1, 0x447A
    ctx->pc = 0x240f18u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17530 << 16));
    // 0x240f1c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x240f1cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240f20: 0x0  nop
    ctx->pc = 0x240f20u;
    // NOP
    // 0x240f24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x240f24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x240f28: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x240f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x240f2c: 0x8faa0058  lw          $t2, 0x58($sp)
    ctx->pc = 0x240f2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240f30: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x240f30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240f34: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x240f34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240f38: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240f38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240f3c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x240f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240f40: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240f40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240f44: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240f48: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240f4c: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240f4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240f50: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240f50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240f54: 0xc086908  jal         func_21A420
    ctx->pc = 0x240F54u;
    SET_GPR_U32(ctx, 31, 0x240F5Cu);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240F54u, 0x240F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F5Cu;
label_240f5c:
    // 0x240f5c: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x240f5cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240f60: 0x8faa0058  lw          $t2, 0x58($sp)
    ctx->pc = 0x240f60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240f64: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x240f64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240f68: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x240f68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240f6c: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x240f6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x240f70: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x240f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x240f74: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x240f74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x240f78: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x240f78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240f7c: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x240f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x240f80: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x240f80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x240f84: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x240f84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x240f88: 0xc086908  jal         func_21A420
    ctx->pc = 0x240F88u;
    SET_GPR_U32(ctx, 31, 0x240F90u);
    ctx->pc = 0x21A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A420u, 0x240F88u, 0x240F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F90u;
label_240f90:
    // 0x240f90: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x240f90u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_240f94:
    // 0x240f94: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x240f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x240f98: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x240f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240f9c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x240f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240fa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x240fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x240fa4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x240fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x240fa8: 0x26090150  addiu       $t1, $s0, 0x150
    ctx->pc = 0x240fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x240fac: 0x3c0a40a0  lui         $t2, 0x40A0
    ctx->pc = 0x240facu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16544 << 16));
    // 0x240fb0: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x240fb0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x240fb4: 0xc5200010  lwc1        $f0, 0x10($t1)
    ctx->pc = 0x240fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240fb8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x240fb8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x240fbc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x240fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x240fc0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x240fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240fc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x240fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x240fc8: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x240fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x240fcc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x240fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x240fd0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x240fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240fd4: 0x3c06442f  lui         $a2, 0x442F
    ctx->pc = 0x240fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17455 << 16));
    // 0x240fd8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x240fd8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240fdc: 0x0  nop
    ctx->pc = 0x240fdcu;
    // NOP
    // 0x240fe0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x240fe0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x240fe4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x240fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240fe8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x240fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240fec: 0x0  nop
    ctx->pc = 0x240fecu;
    // NOP
    // 0x240ff0: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x240FF0u;
    {
        const bool branch_taken_0x240ff0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x240ff0) {
            ctx->pc = 0x24102Cu;
            goto label_24102c;
        }
    }
    ctx->pc = 0x240FF8u;
    // 0x240ff8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x240ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x240ffc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x240ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241000: 0x3c07442f  lui         $a3, 0x442F
    ctx->pc = 0x241000u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17455 << 16));
    // 0x241004: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x241004u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241008: 0x0  nop
    ctx->pc = 0x241008u;
    // NOP
    // 0x24100c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24100cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x241010: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x241010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x241014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x241014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241018: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x241018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24101c: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x24101cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x241020: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x241020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241024: 0x260a0150  addiu       $t2, $s0, 0x150
    ctx->pc = 0x241024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x241028: 0xa1490001  sb          $t1, 0x1($t2)
    ctx->pc = 0x241028u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 9));
label_24102c:
    // 0x24102c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x24102cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x241030: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x241030u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x241034: 0xc040ca2  jal         func_103288
    ctx->pc = 0x241034u;
    SET_GPR_U32(ctx, 31, 0x24103Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x24103Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24103Cu) { return; }
    ctx->pc = 0x24103Cu;
label_24103c:
    // 0x24103c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24103cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241040: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x241040u;
    {
        const bool branch_taken_0x241040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241040) {
            ctx->pc = 0x241114u;
            goto label_241114;
        }
    }
    ctx->pc = 0x241048u;
label_241048:
    // 0x241048: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x241048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24104c: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x24104cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x241050: 0xa1070001  sb          $a3, 0x1($t0)
    ctx->pc = 0x241050u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x241054: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x241054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241058: 0x26090150  addiu       $t1, $s0, 0x150
    ctx->pc = 0x241058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24105c: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x24105cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
label_241060:
    // 0x241060: 0x260a0150  addiu       $t2, $s0, 0x150
    ctx->pc = 0x241060u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x241064: 0xc5410010  lwc1        $f1, 0x10($t2)
    ctx->pc = 0x241064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241068: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x241068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24106c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24106cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x241070: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x241070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x241074: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x241074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x241078: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x241078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24107c: 0x3c083e99  lui         $t0, 0x3E99
    ctx->pc = 0x24107cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16025 << 16));
    // 0x241080: 0x3507999a  ori         $a3, $t0, 0x999A
    ctx->pc = 0x241080u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)39322);
    // 0x241084: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x241084u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241088: 0x0  nop
    ctx->pc = 0x241088u;
    // NOP
    // 0x24108c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24108cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x241090: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x241090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x241094: 0x26090150  addiu       $t1, $s0, 0x150
    ctx->pc = 0x241094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x241098: 0xc521000c  lwc1        $f1, 0xC($t1)
    ctx->pc = 0x241098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24109c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x24109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2410a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2410a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2410a4: 0x0  nop
    ctx->pc = 0x2410a4u;
    // NOP
    // 0x2410a8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2410A8u;
    {
        const bool branch_taken_0x2410a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2410a8) {
            ctx->pc = 0x241100u;
            goto label_241100;
        }
    }
    ctx->pc = 0x2410B0u;
    // 0x2410b0: 0x260a0150  addiu       $t2, $s0, 0x150
    ctx->pc = 0x2410b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2410b4: 0xc540000c  lwc1        $f0, 0xC($t2)
    ctx->pc = 0x2410b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2410b8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2410b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2410bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2410bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2410c0: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x2410c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2410c4: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x2410c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x2410c8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2410c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2410cc: 0x260a0150  addiu       $t2, $s0, 0x150
    ctx->pc = 0x2410ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2410d0: 0xa1490001  sb          $t1, 0x1($t2)
    ctx->pc = 0x2410d0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x2410d4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2410d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2410d8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2410d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2410dc: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2410dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2410e0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2410e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2410e4: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2410e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2410e8: 0x2409003c  addiu       $t1, $zero, 0x3C
    ctx->pc = 0x2410e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2410ec: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2410ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2410f0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2410f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2410f4: 0xc065580  jal         func_195600
    ctx->pc = 0x2410F4u;
    SET_GPR_U32(ctx, 31, 0x2410FCu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2410F4u, 0x2410FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410FCu;
label_2410fc:
    // 0x2410fc: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2410fcu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_241100:
    // 0x241100: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x241100u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x241104: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x241104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x241108: 0xc040ca2  jal         func_103288
    ctx->pc = 0x241108u;
    SET_GPR_U32(ctx, 31, 0x241110u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x241110u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x241110u) { return; }
    ctx->pc = 0x241110u;
label_241110:
    // 0x241110: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x241110u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_241114:
    // 0x241114: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x241114u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x241118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24111c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24111cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241120: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x241120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x241124: 0x3e00008  jr          $ra
    ctx->pc = 0x241124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24112Cu;
}
