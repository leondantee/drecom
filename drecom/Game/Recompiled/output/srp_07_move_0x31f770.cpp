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

// Function: srp_07_move
// Address: 0x31f770 - 0x320074
void srp_07_move_0x31f770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_07_move_0x31f770");
#endif

    switch (ctx->pc) {
        case 0x31f7dcu: goto label_31f7dc;
        case 0x31f8c8u: goto label_31f8c8;
        case 0x31f8e4u: goto label_31f8e4;
        case 0x31f90cu: goto label_31f90c;
        case 0x31f93cu: goto label_31f93c;
        case 0x31f970u: goto label_31f970;
        case 0x31fa5cu: goto label_31fa5c;
        case 0x31faacu: goto label_31faac;
        case 0x31fad0u: goto label_31fad0;
        case 0x31fb30u: goto label_31fb30;
        case 0x31fb50u: goto label_31fb50;
        case 0x31fb68u: goto label_31fb68;
        case 0x31fb84u: goto label_31fb84;
        case 0x31fc68u: goto label_31fc68;
        case 0x31fc88u: goto label_31fc88;
        case 0x31fca0u: goto label_31fca0;
        case 0x31fcbcu: goto label_31fcbc;
        case 0x31fd90u: goto label_31fd90;
        case 0x31fdb0u: goto label_31fdb0;
        case 0x31fde8u: goto label_31fde8;
        case 0x31fedcu: goto label_31fedc;
        case 0x31ff40u: goto label_31ff40;
        case 0x31ff48u: goto label_31ff48;
        case 0x31ff80u: goto label_31ff80;
        case 0x31ffb8u: goto label_31ffb8;
        default: break;
    }

    ctx->pc = 0x31f770u;

    // 0x31f770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31f770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31f774: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x31f774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x31f778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31f778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31f77c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x31f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x31f780: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f784: 0xa0600348  sb          $zero, 0x348($v1)
    ctx->pc = 0x31f784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f788: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31f788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f78c: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x31f78cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x31f790: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31f790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f794: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x31f794u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x31f798: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x31f798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f79c: 0x90a30344  lbu         $v1, 0x344($a1)
    ctx->pc = 0x31f79cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 836)));
    // 0x31f7a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31f7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f7a4: 0xa0830346  sb          $v1, 0x346($a0)
    ctx->pc = 0x31f7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x31f7a8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x31f7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f7ac: 0xc4a1027c  lwc1        $f1, 0x27C($a1)
    ctx->pc = 0x31f7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f7b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31f7b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f7b4: 0x0  nop
    ctx->pc = 0x31f7b4u;
    // NOP
    // 0x31f7b8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31f7b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f7bc: 0x0  nop
    ctx->pc = 0x31f7bcu;
    // NOP
    // 0x31f7c0: 0x45010065  bc1t        . + 4 + (0x65 << 2)
    ctx->pc = 0x31F7C0u;
    {
        const bool branch_taken_0x31f7c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f7c0) {
            ctx->pc = 0x31F958u;
            goto label_31f958;
        }
    }
    ctx->pc = 0x31F7C8u;
    // 0x31f7c8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x31f7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f7cc: 0x90c30344  lbu         $v1, 0x344($a2)
    ctx->pc = 0x31f7ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 836)));
    // 0x31f7d0: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x31f7d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31f7d4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x31F7D4u;
    {
        const bool branch_taken_0x31f7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f7d4) {
            ctx->pc = 0x31F948u;
            goto label_31f948;
        }
    }
    ctx->pc = 0x31F7DCu;
label_31f7dc:
    // 0x31f7dc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x31f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f7e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f7e4: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x31f7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31f7e8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x31f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f7ec: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x31f7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f7f0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x31f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x31f7f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f7f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31f7fc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x31f7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f800: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31f800u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f804: 0x0  nop
    ctx->pc = 0x31f804u;
    // NOP
    // 0x31f808: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x31F808u;
    {
        const bool branch_taken_0x31f808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f808) {
            ctx->pc = 0x31F878u;
            goto label_31f878;
        }
    }
    ctx->pc = 0x31F810u;
    // 0x31f810: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f810u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f814: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f818: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x31f818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f81c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x31f81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f820: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x31f820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f824: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x31f824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x31f828: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f82c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x31f82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31f830: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x31f830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f834: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31f834u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f838: 0x0  nop
    ctx->pc = 0x31f838u;
    // NOP
    // 0x31f83c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x31F83Cu;
    {
        const bool branch_taken_0x31f83c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f83c) {
            ctx->pc = 0x31F878u;
            goto label_31f878;
        }
    }
    ctx->pc = 0x31F844u;
    // 0x31f844: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f848: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f84c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x31f84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f850: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x31f850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f854: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x31f854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f858: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31f858u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31f85c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f860: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x31f860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f864: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x31f864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f868: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31f868u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f86c: 0x0  nop
    ctx->pc = 0x31f86cu;
    // NOP
    // 0x31f870: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x31F870u;
    {
        const bool branch_taken_0x31f870 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f870) {
            ctx->pc = 0x31F918u;
            goto label_31f918;
        }
    }
    ctx->pc = 0x31F878u;
label_31f878:
    // 0x31f878: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x31f878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x31f87c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f880: 0xa0640345  sb          $a0, 0x345($v1)
    ctx->pc = 0x31f880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 4));
    // 0x31f884: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f888: 0x90640344  lbu         $a0, 0x344($v1)
    ctx->pc = 0x31f888u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x31f88c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x31f88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x31f890: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x31f890u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x31f894: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31f894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31f898: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f89c: 0xa0640348  sb          $a0, 0x348($v1)
    ctx->pc = 0x31f89cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x31f8a0: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x31f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f8a4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31f8a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f8ac: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x31f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f8b0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f8b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f8b8: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x31f8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f8bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31f8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31f8c0: 0xc040c80  jal         func_103200
    ctx->pc = 0x31F8C0u;
    SET_GPR_U32(ctx, 31, 0x31F8C8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x31F8C8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31F8C8u) { return; }
    ctx->pc = 0x31F8C8u;
label_31f8c8:
    // 0x31f8c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31f8c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31f8cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f8d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31f8d4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x31f8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31f8d8: 0xc46c027c  lwc1        $f12, 0x27C($v1)
    ctx->pc = 0x31f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31f8dc: 0xc040c8c  jal         func_103230
    ctx->pc = 0x31F8DCu;
    SET_GPR_U32(ctx, 31, 0x31F8E4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x31F8E4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31F8E4u) { return; }
    ctx->pc = 0x31F8E4u;
label_31f8e4:
    // 0x31f8e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31f8e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31f8e8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f8ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f8f0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31f8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f8f4: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x31f8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f8f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f8fc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x31f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31f900: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x31f900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31f904: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x31F904u;
    SET_GPR_U32(ctx, 31, 0x31F90Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x31F904u, 0x31F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F90Cu;
label_31f90c:
    // 0x31f90c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31f90cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31f910: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31F910u;
    {
        const bool branch_taken_0x31f910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f910) {
            ctx->pc = 0x31F940u;
            goto label_31f940;
        }
    }
    ctx->pc = 0x31F918u;
label_31f918:
    // 0x31f918: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f918u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f91c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f920: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31f920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f924: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x31f924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f928: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x31f928u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31f92c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f930: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x31f930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31f934: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x31F934u;
    SET_GPR_U32(ctx, 31, 0x31F93Cu);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x31F93Cu;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31F93Cu) { return; }
    ctx->pc = 0x31F93Cu;
label_31f93c:
    // 0x31f93c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x31f93cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31f940:
    // 0x31f940: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x31f940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f944: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x31f944u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_31f948:
    // 0x31f948: 0x1600ffa4  bnez        $s0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x31F948u;
    {
        const bool branch_taken_0x31f948 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f948) {
            ctx->pc = 0x31F7DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f7dc;
        }
    }
    ctx->pc = 0x31F950u;
    // 0x31f950: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x31F950u;
    {
        const bool branch_taken_0x31f950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f950) {
            ctx->pc = 0x31FAE0u;
            goto label_31fae0;
        }
    }
    ctx->pc = 0x31F958u;
label_31f958:
    // 0x31f958: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f95c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x31f95cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x31f960: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31f960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31f964: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x31f964u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x31f968: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x31F968u;
    {
        const bool branch_taken_0x31f968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f968) {
            ctx->pc = 0x31FAD8u;
            goto label_31fad8;
        }
    }
    ctx->pc = 0x31F970u;
label_31f970:
    // 0x31f970: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f974: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f978: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31f978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f97c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x31f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f980: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x31f980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f984: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31f984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31f988: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f98c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f990: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31f990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f994: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31f994u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f998: 0x0  nop
    ctx->pc = 0x31f998u;
    // NOP
    // 0x31f99c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x31F99Cu;
    {
        const bool branch_taken_0x31f99c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f99c) {
            ctx->pc = 0x31FA10u;
            goto label_31fa10;
        }
    }
    ctx->pc = 0x31F9A4u;
    // 0x31f9a4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x31f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f9a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f9ac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f9b0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31f9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f9b4: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x31f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f9b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31f9bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f9c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f9c4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31f9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f9c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31f9c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f9cc: 0x0  nop
    ctx->pc = 0x31f9ccu;
    // NOP
    // 0x31f9d0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x31F9D0u;
    {
        const bool branch_taken_0x31f9d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f9d0) {
            ctx->pc = 0x31FA10u;
            goto label_31fa10;
        }
    }
    ctx->pc = 0x31F9D8u;
    // 0x31f9d8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x31f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f9dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f9e0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f9e4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x31f9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f9e8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x31f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f9ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31f9f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f9f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31f9f8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x31f9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f9fc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31f9fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fa00: 0x0  nop
    ctx->pc = 0x31fa00u;
    // NOP
    // 0x31fa04: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x31FA04u;
    {
        const bool branch_taken_0x31fa04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fa04) {
            ctx->pc = 0x31FA68u;
            goto label_31fa68;
        }
    }
    ctx->pc = 0x31FA0Cu;
    // 0x31fa0c: 0x0  nop
    ctx->pc = 0x31fa0cu;
    // NOP
label_31fa10:
    // 0x31fa10: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x31fa10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x31fa14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa18: 0xa0640345  sb          $a0, 0x345($v1)
    ctx->pc = 0x31fa18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 4));
    // 0x31fa1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa20: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x31fa20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x31fa24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31fa24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31fa28: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x31fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x31fa2c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31fa2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31fa30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa34: 0xa0640348  sb          $a0, 0x348($v1)
    ctx->pc = 0x31fa34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x31fa38: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31fa3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa40: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31fa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31fa44: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x31fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31fa48: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x31fa48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31fa4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa50: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x31fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31fa54: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x31FA54u;
    SET_GPR_U32(ctx, 31, 0x31FA5Cu);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x31FA5Cu;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31FA5Cu) { return; }
    ctx->pc = 0x31FA5Cu;
label_31fa5c:
    // 0x31fa5c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31fa5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31fa60: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x31FA60u;
    {
        const bool branch_taken_0x31fa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fa60) {
            ctx->pc = 0x31FAD0u;
            goto label_31fad0;
        }
    }
    ctx->pc = 0x31FA68u;
label_31fa68:
    // 0x31fa68: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x31fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31fa6c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31fa70: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x31fa70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa74: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x31fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x31fa78: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31fa78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fa7c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x31fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31fa80: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31fa80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31fa84: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31fa88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa8c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x31fa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31fa90: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x31fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31fa94: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31fa98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa9c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x31fa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31faa0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31faa4: 0xc040c80  jal         func_103200
    ctx->pc = 0x31FAA4u;
    SET_GPR_U32(ctx, 31, 0x31FAACu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x31FAACu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31FAACu) { return; }
    ctx->pc = 0x31FAACu;
label_31faac:
    // 0x31faac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x31faacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31fab0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fab4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x31fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31fab8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x31fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31fabc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31fac0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fac4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x31fac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31fac8: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x31FAC8u;
    SET_GPR_U32(ctx, 31, 0x31FAD0u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x31FAD0u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31FAD0u) { return; }
    ctx->pc = 0x31FAD0u;
label_31fad0:
    // 0x31fad0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x31fad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31fad4: 0x0  nop
    ctx->pc = 0x31fad4u;
    // NOP
label_31fad8:
    // 0x31fad8: 0x1600ffa5  bnez        $s0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x31FAD8u;
    {
        const bool branch_taken_0x31fad8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fad8) {
            ctx->pc = 0x31F970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f970;
        }
    }
    ctx->pc = 0x31FAE0u;
label_31fae0:
    // 0x31fae0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fae4: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x31fae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x31fae8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31fae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31faec: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x31faecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x31faf0: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x31FAF0u;
    {
        const bool branch_taken_0x31faf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31faf0) {
            ctx->pc = 0x31FD70u;
            goto label_31fd70;
        }
    }
    ctx->pc = 0x31FAF8u;
    // 0x31faf8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fafc: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x31fafcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x31fb00: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x31fb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31fb04: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31fb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31fb08: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x31FB08u;
    {
        const bool branch_taken_0x31fb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fb08) {
            ctx->pc = 0x31FC30u;
            goto label_31fc30;
        }
    }
    ctx->pc = 0x31FB10u;
    // 0x31fb10: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb1c: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x31fb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x31fb20: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x31fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x31fb24: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x31fb24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x31fb28: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x31FB28u;
    SET_GPR_U32(ctx, 31, 0x31FB30u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x31FB28u, 0x31FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FB30u;
label_31fb30:
    // 0x31fb30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb3c: 0x248402b0  addiu       $a0, $a0, 0x2B0
    ctx->pc = 0x31fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x31fb40: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x31fb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x31fb44: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x31fb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x31fb48: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x31FB48u;
    SET_GPR_U32(ctx, 31, 0x31FB50u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x31FB48u, 0x31FB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FB50u;
label_31fb50:
    // 0x31fb50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb58: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x31fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x31fb5c: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x31fb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x31fb60: 0xc040ca2  jal         func_103288
    ctx->pc = 0x31FB60u;
    SET_GPR_U32(ctx, 31, 0x31FB68u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x31FB68u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31FB68u) { return; }
    ctx->pc = 0x31FB68u;
label_31fb68:
    // 0x31fb68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fb74: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x31fb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x31fb78: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x31fb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x31fb7c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x31FB7Cu;
    SET_GPR_U32(ctx, 31, 0x31FB84u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x31FB84u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31FB84u) { return; }
    ctx->pc = 0x31FB84u;
label_31fb84:
    // 0x31fb84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31fb88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31fb88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31fb8c: 0x0  nop
    ctx->pc = 0x31fb8cu;
    // NOP
    // 0x31fb90: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x31fb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31fb94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb98: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x31fb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fb9c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x31fb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fba0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31fba0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fba4: 0x0  nop
    ctx->pc = 0x31fba4u;
    // NOP
    // 0x31fba8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x31FBA8u;
    {
        const bool branch_taken_0x31fba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fba8) {
            ctx->pc = 0x31FBE8u;
            goto label_31fbe8;
        }
    }
    ctx->pc = 0x31FBB0u;
    // 0x31fbb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fbb4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31fbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fbb8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x31fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fbbc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31fbbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fbc0: 0x0  nop
    ctx->pc = 0x31fbc0u;
    // NOP
    // 0x31fbc4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x31FBC4u;
    {
        const bool branch_taken_0x31fbc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fbc4) {
            ctx->pc = 0x31FBE8u;
            goto label_31fbe8;
        }
    }
    ctx->pc = 0x31FBCCu;
    // 0x31fbcc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fbd0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x31fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fbd4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x31fbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fbd8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31fbd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fbdc: 0x0  nop
    ctx->pc = 0x31fbdcu;
    // NOP
    // 0x31fbe0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x31FBE0u;
    {
        const bool branch_taken_0x31fbe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fbe0) {
            ctx->pc = 0x31FC20u;
            goto label_31fc20;
        }
    }
    ctx->pc = 0x31FBE8u;
label_31fbe8:
    // 0x31fbe8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fbec: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x31fbecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x31fbf0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31fbf4: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x31fbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x31fbf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fbfc: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x31fbfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x31fc00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31fc04: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x31fc04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x31fc08: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x31fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fc0c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31fc0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fc10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc14: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31fc14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31fc18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31FC18u;
    {
        const bool branch_taken_0x31fc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fc18) {
            ctx->pc = 0x31FC30u;
            goto label_31fc30;
        }
    }
    ctx->pc = 0x31FC20u;
label_31fc20:
    // 0x31fc20: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x31fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fc24: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31fc24u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fc28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc2c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31fc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_31fc30:
    // 0x31fc30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc34: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x31fc34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x31fc38: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x31fc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31fc3c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x31fc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x31fc40: 0x106000a3  beqz        $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x31FC40u;
    {
        const bool branch_taken_0x31fc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fc40) {
            ctx->pc = 0x31FED0u;
            goto label_31fed0;
        }
    }
    ctx->pc = 0x31FC48u;
    // 0x31fc48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc54: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x31fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x31fc58: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x31fc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x31fc5c: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x31fc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x31fc60: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x31FC60u;
    SET_GPR_U32(ctx, 31, 0x31FC68u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x31FC60u, 0x31FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC68u;
label_31fc68:
    // 0x31fc68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc74: 0x248402b0  addiu       $a0, $a0, 0x2B0
    ctx->pc = 0x31fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x31fc78: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x31fc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x31fc7c: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x31fc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x31fc80: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x31FC80u;
    SET_GPR_U32(ctx, 31, 0x31FC88u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x31FC80u, 0x31FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC88u;
label_31fc88:
    // 0x31fc88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc90: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x31fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x31fc94: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x31fc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x31fc98: 0xc040ca2  jal         func_103288
    ctx->pc = 0x31FC98u;
    SET_GPR_U32(ctx, 31, 0x31FCA0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x31FCA0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31FCA0u) { return; }
    ctx->pc = 0x31FCA0u;
label_31fca0:
    // 0x31fca0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fca4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fca8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31fca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fcac: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x31fcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x31fcb0: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x31fcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x31fcb4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x31FCB4u;
    SET_GPR_U32(ctx, 31, 0x31FCBCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x31FCBCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31FCBCu) { return; }
    ctx->pc = 0x31FCBCu;
label_31fcbc:
    // 0x31fcbc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31fcc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31fcc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31fcc4: 0x0  nop
    ctx->pc = 0x31fcc4u;
    // NOP
    // 0x31fcc8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x31fcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31fccc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fcd0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x31fcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fcd4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x31fcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fcd8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31fcd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fcdc: 0x0  nop
    ctx->pc = 0x31fcdcu;
    // NOP
    // 0x31fce0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x31FCE0u;
    {
        const bool branch_taken_0x31fce0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fce0) {
            ctx->pc = 0x31FD20u;
            goto label_31fd20;
        }
    }
    ctx->pc = 0x31FCE8u;
    // 0x31fce8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fcec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31fcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fcf0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x31fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fcf4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31fcf4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fcf8: 0x0  nop
    ctx->pc = 0x31fcf8u;
    // NOP
    // 0x31fcfc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x31FCFCu;
    {
        const bool branch_taken_0x31fcfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fcfc) {
            ctx->pc = 0x31FD20u;
            goto label_31fd20;
        }
    }
    ctx->pc = 0x31FD04u;
    // 0x31fd04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd08: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x31fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fd0c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x31fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fd10: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31fd10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fd14: 0x0  nop
    ctx->pc = 0x31fd14u;
    // NOP
    // 0x31fd18: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x31FD18u;
    {
        const bool branch_taken_0x31fd18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fd18) {
            ctx->pc = 0x31FD58u;
            goto label_31fd58;
        }
    }
    ctx->pc = 0x31FD20u;
label_31fd20:
    // 0x31fd20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd24: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x31fd24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x31fd28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31fd2c: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x31fd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x31fd30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd34: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x31fd34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x31fd38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31fd3c: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x31fd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x31fd40: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x31fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fd44: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31fd44u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fd48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd4c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31fd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31fd50: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x31FD50u;
    {
        const bool branch_taken_0x31fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fd50) {
            ctx->pc = 0x31FED0u;
            goto label_31fed0;
        }
    }
    ctx->pc = 0x31FD58u;
label_31fd58:
    // 0x31fd58: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x31fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fd5c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31fd5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fd60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd64: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31fd64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31fd68: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x31FD68u;
    {
        const bool branch_taken_0x31fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fd68) {
            ctx->pc = 0x31FED0u;
            goto label_31fed0;
        }
    }
    ctx->pc = 0x31FD70u;
label_31fd70:
    // 0x31fd70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd74: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x31fd74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd7c: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x31fd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x31fd80: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x31fd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x31fd84: 0x24660300  addiu       $a2, $v1, 0x300
    ctx->pc = 0x31fd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
    // 0x31fd88: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x31FD88u;
    SET_GPR_U32(ctx, 31, 0x31FD90u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x31FD88u, 0x31FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD90u;
label_31fd90:
    // 0x31fd90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31fd90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31fd94: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x31fd94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31fd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fda0: 0x260502f0  addiu       $a1, $s0, 0x2F0
    ctx->pc = 0x31fda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x31fda4: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x31fda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x31fda8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x31FDA8u;
    SET_GPR_U32(ctx, 31, 0x31FDB0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x31FDA8u, 0x31FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FDB0u;
label_31fdb0:
    // 0x31fdb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31fdb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31fdb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31fdb8: 0x0  nop
    ctx->pc = 0x31fdb8u;
    // NOP
    // 0x31fdbc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x31fdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31fdc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fdc4: 0x8c640270  lw          $a0, 0x270($v1)
    ctx->pc = 0x31fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x31fdc8: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x31fdc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x31fdcc: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x31FDCCu;
    {
        const bool branch_taken_0x31fdcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fdcc) {
            ctx->pc = 0x31FE48u;
            goto label_31fe48;
        }
    }
    ctx->pc = 0x31FDD4u;
    // 0x31fdd4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fdd8: 0x244402b0  addiu       $a0, $v0, 0x2B0
    ctx->pc = 0x31fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x31fddc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x31fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fde0: 0xc0c802c  jal         func_3200B0
    ctx->pc = 0x31FDE0u;
    SET_GPR_U32(ctx, 31, 0x31FDE8u);
    ctx->pc = 0x3200B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3200B0u, 0x31FDE0u, 0x31FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FDE8u;
label_31fde8:
    // 0x31fde8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31FDE8u;
    {
        const bool branch_taken_0x31fde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fde8) {
            ctx->pc = 0x31FE2Cu;
            goto label_31fe2c;
        }
    }
    ctx->pc = 0x31FDF0u;
    // 0x31fdf0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x31fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fdf4: 0x90a40345  lbu         $a0, 0x345($a1)
    ctx->pc = 0x31fdf4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 837)));
    // 0x31fdf8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x31fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31fdfc: 0xa0a30345  sb          $v1, 0x345($a1)
    ctx->pc = 0x31fdfcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x31fe00: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x31fe00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe04: 0x90a30348  lbu         $v1, 0x348($a1)
    ctx->pc = 0x31fe04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x31fe08: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x31fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31fe0c: 0xa0a40348  sb          $a0, 0x348($a1)
    ctx->pc = 0x31fe0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x31fe10: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x31fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fe14: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x31fe14u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fe18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe1c: 0x248302b0  addiu       $v1, $a0, 0x2B0
    ctx->pc = 0x31fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x31fe20: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x31fe20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x31fe24: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31FE24u;
    {
        const bool branch_taken_0x31fe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fe24) {
            ctx->pc = 0x31FE7Cu;
            goto label_31fe7c;
        }
    }
    ctx->pc = 0x31FE2Cu;
label_31fe2c:
    // 0x31fe2c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x31fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fe30: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31fe30u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fe34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe38: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x31fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x31fe3c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31fe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31fe40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31FE40u;
    {
        const bool branch_taken_0x31fe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fe40) {
            ctx->pc = 0x31FE7Cu;
            goto label_31fe7c;
        }
    }
    ctx->pc = 0x31FE48u;
label_31fe48:
    // 0x31fe48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe4c: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x31fe4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x31fe50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31fe54: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x31fe54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x31fe58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe5c: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x31fe5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x31fe60: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x31fe60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31fe64: 0xa0850348  sb          $a1, 0x348($a0)
    ctx->pc = 0x31fe64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 5));
    // 0x31fe68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31fe68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fe6c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x31fe6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31fe70: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x31fe70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe74: 0x24c402b0  addiu       $a0, $a2, 0x2B0
    ctx->pc = 0x31fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 688));
    // 0x31fe78: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x31fe78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_31fe7c:
    // 0x31fe7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe80: 0x8c630270  lw          $v1, 0x270($v1)
    ctx->pc = 0x31fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x31fe84: 0x30640004  andi        $a0, $v1, 0x4
    ctx->pc = 0x31fe84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x31fe88: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x31FE88u;
    {
        const bool branch_taken_0x31fe88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fe88) {
            ctx->pc = 0x31FEBCu;
            goto label_31febc;
        }
    }
    ctx->pc = 0x31FE90u;
    // 0x31fe90: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x31fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe94: 0x90a30348  lbu         $v1, 0x348($a1)
    ctx->pc = 0x31fe94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x31fe98: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31fe98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31fe9c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31FE9Cu;
    {
        const bool branch_taken_0x31fe9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fe9c) {
            ctx->pc = 0x31FEBCu;
            goto label_31febc;
        }
    }
    ctx->pc = 0x31FEA4u;
    // 0x31fea4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fea8: 0x8c640358  lw          $a0, 0x358($v1)
    ctx->pc = 0x31fea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 856)));
    // 0x31feac: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x31feacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31feb0: 0xac650358  sw          $a1, 0x358($v1)
    ctx->pc = 0x31feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 5));
    // 0x31feb4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x31FEB4u;
    {
        const bool branch_taken_0x31feb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31feb4) {
            ctx->pc = 0x320060u;
            goto label_320060;
        }
    }
    ctx->pc = 0x31FEBCu;
label_31febc:
    // 0x31febc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31febcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fec0: 0x246502b0  addiu       $a1, $v1, 0x2B0
    ctx->pc = 0x31fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x31fec4: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x31fec4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31fec8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fecc: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x31feccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_31fed0:
    // 0x31fed0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31fed0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31fed4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31FED4u;
    {
        const bool branch_taken_0x31fed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fed4) {
            ctx->pc = 0x31FF18u;
            goto label_31ff18;
        }
    }
    ctx->pc = 0x31FEDCu;
label_31fedc:
    // 0x31fedc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fee0: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x31fee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x31fee4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31fee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31fee8: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x31fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x31feec: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x31feecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31fef0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fef4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x31fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31fef8: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x31fef8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31fefc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31ff00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ff04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31ff08: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x31ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x31ff0c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x31ff0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x31ff10: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x31ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31ff14: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x31ff14u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_31ff18:
    // 0x31ff18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ff1c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x31ff1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x31ff20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31ff20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31ff24: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x31ff24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x31ff28: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x31FF28u;
    {
        const bool branch_taken_0x31ff28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ff28) {
            ctx->pc = 0x31FEDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31fedc;
        }
    }
    ctx->pc = 0x31FF30u;
    // 0x31ff30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ff34: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x31ff34u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x31ff38: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x31FF38u;
    {
        const bool branch_taken_0x31ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ff38) {
            ctx->pc = 0x31FFF0u;
            goto label_31fff0;
        }
    }
    ctx->pc = 0x31FF40u;
label_31ff40:
    // 0x31ff40: 0xc067648  jal         func_19D920
    ctx->pc = 0x31FF40u;
    SET_GPR_U32(ctx, 31, 0x31FF48u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x31FF40u, 0x31FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FF48u;
label_31ff48:
    // 0x31ff48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ff4c: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x31ff4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ff50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31ff50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31ff54: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x31ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31ff58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31ff58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ff5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31ff60: 0xc4400480  lwc1        $f0, 0x480($v0)
    ctx->pc = 0x31ff60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ff64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31ff64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31ff68: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x31ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31ff6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ff70: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ff74: 0xe4600480  swc1        $f0, 0x480($v1)
    ctx->pc = 0x31ff74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1152), bits); }
    // 0x31ff78: 0xc067648  jal         func_19D920
    ctx->pc = 0x31FF78u;
    SET_GPR_U32(ctx, 31, 0x31FF80u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x31FF78u, 0x31FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FF80u;
label_31ff80:
    // 0x31ff80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ff84: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x31ff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ff88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31ff88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31ff8c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x31ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31ff90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ff94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31ff98: 0xc4400484  lwc1        $f0, 0x484($v0)
    ctx->pc = 0x31ff98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ff9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31ff9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31ffa0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x31ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31ffa4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ffa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ffac: 0xe4400484  swc1        $f0, 0x484($v0)
    ctx->pc = 0x31ffacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1156), bits); }
    // 0x31ffb0: 0xc067648  jal         func_19D920
    ctx->pc = 0x31FFB0u;
    SET_GPR_U32(ctx, 31, 0x31FFB8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x31FFB0u, 0x31FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FFB8u;
label_31ffb8:
    // 0x31ffb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ffbc: 0xc4610274  lwc1        $f1, 0x274($v1)
    ctx->pc = 0x31ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ffc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31ffc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31ffc4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x31ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31ffc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ffcc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x31ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31ffd0: 0xc4600488  lwc1        $f0, 0x488($v1)
    ctx->pc = 0x31ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ffd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31ffd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31ffd8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31ffd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31ffdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ffe0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31ffe4: 0xe4600488  swc1        $f0, 0x488($v1)
    ctx->pc = 0x31ffe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1160), bits); }
    // 0x31ffe8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x31ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31ffec: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x31ffecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_31fff0:
    // 0x31fff0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fff4: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x31fff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x31fff8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31fff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31fffc: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x31fffcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x320000: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x320000u;
    {
        const bool branch_taken_0x320000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x320000) {
            ctx->pc = 0x31FF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ff40;
        }
    }
    ctx->pc = 0x320008u;
    // 0x320008: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32000c: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x32000cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x320010: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x320010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x320014: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x320014u;
    {
        const bool branch_taken_0x320014 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x320014) {
            ctx->pc = 0x32004Cu;
            goto label_32004c;
        }
    }
    ctx->pc = 0x32001Cu;
    // 0x32001c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320020: 0x90650348  lbu         $a1, 0x348($v1)
    ctx->pc = 0x320020u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320024: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x320024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x320028: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32002c: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x32002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x320030: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x320030u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x320034: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x320034u;
    {
        const bool branch_taken_0x320034 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320034) {
            ctx->pc = 0x32004Cu;
            goto label_32004c;
        }
    }
    ctx->pc = 0x32003Cu;
    // 0x32003c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x32003cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320040: 0x8ca30b18  lw          $v1, 0xB18($a1)
    ctx->pc = 0x320040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2840)));
    // 0x320044: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x320044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x320048: 0xaca40b18  sw          $a0, 0xB18($a1)
    ctx->pc = 0x320048u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2840), GPR_U32(ctx, 4));
label_32004c:
    // 0x32004c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32004cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320050: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x320050u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320054: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x320054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x320058: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32005c: 0xaca30278  sw          $v1, 0x278($a1)
    ctx->pc = 0x32005cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 632), GPR_U32(ctx, 3));
label_320060:
    // 0x320060: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x320060u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320068: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x320068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x32006c: 0x3e00008  jr          $ra
    ctx->pc = 0x32006Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32006Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320074u;
}
