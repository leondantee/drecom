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

// Function: ectrl03_init00_t01
// Address: 0x24bc40 - 0x24bde4
void ectrl03_init00_t01_0x24bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl03_init00_t01_0x24bc40");
#endif

    switch (ctx->pc) {
        case 0x24bce8u: goto label_24bce8;
        case 0x24bcf4u: goto label_24bcf4;
        case 0x24bd38u: goto label_24bd38;
        case 0x24bd4cu: goto label_24bd4c;
        case 0x24bdbcu: goto label_24bdbc;
        case 0x24bdc8u: goto label_24bdc8;
        default: break;
    }

    ctx->pc = 0x24bc40u;

    // 0x24bc40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x24bc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x24bc44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x24bc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x24bc48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24bc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24bc4c: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x24bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x24bc50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x24bc54: 0x2442b5d0  addiu       $v0, $v0, -0x4A30
    ctx->pc = 0x24bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948304));
    // 0x24bc58: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x24bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24bc5c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x24bc5cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38B5D0u));
    // 0x24bc60: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x24bc60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x24bc64: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x24bc68: 0x2442b5e0  addiu       $v0, $v0, -0x4A20
    ctx->pc = 0x24bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948320));
    // 0x24bc6c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x24bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24bc70: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x24bc70u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38B5E0u));
    // 0x24bc74: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x24bc74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x24bc78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bc7c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24bc80: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x24bc80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x24bc84: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x24bc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24bc88: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x24bc88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24bc8c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24bc90: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24bc94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24bc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bc98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24bc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24bc9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bca0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24bca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24bca4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24bca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bca8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24bca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24bcac: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24bcacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bcb0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24bcb4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24bcb8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24bcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bcbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24bcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24bcc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bcc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24bcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24bcc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24bcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bccc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24bcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24bcd0: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24bcd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24bcd4: 0x3404a701  ori         $a0, $zero, 0xA701
    ctx->pc = 0x24bcd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42753);
    // 0x24bcd8: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24bcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24bcdc: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24bcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24bce0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24BCE0u;
    SET_GPR_U32(ctx, 31, 0x24BCE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24BCE0u, 0x24BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCE8u;
label_24bce8:
    // 0x24bce8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24bce8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24bcec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24BCECu;
    SET_GPR_U32(ctx, 31, 0x24BCF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24BCECu, 0x24BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCF4u;
label_24bcf4:
    // 0x24bcf4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x24bcf4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24bcf8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24bcfc: 0xac700100  sw          $s0, 0x100($v1)
    ctx->pc = 0x24bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 16));
    // 0x24bd00: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24bd04: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24bd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24bd08: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24BD08u;
    {
        const bool branch_taken_0x24bd08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x24bd08) {
            ctx->pc = 0x24BD2Cu;
            goto label_24bd2c;
        }
    }
    ctx->pc = 0x24BD10u;
    // 0x24bd10: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24bd14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24bd18: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x24bd18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24bd1c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24bd20: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x24bd20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x24bd24: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x24BD24u;
    {
        const bool branch_taken_0x24bd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bd24) {
            ctx->pc = 0x24BDD0u;
            goto label_24bdd0;
        }
    }
    ctx->pc = 0x24BD2Cu;
label_24bd2c:
    // 0x24bd2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24bd30: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24BD30u;
    SET_GPR_U32(ctx, 31, 0x24BD38u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24BD38u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24BD38u) { return; }
    ctx->pc = 0x24BD38u;
label_24bd38:
    // 0x24bd38: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x24bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x24bd3c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x24bd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24bd40: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x24bd40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x24bd44: 0xc040c92  jal         func_103248
    ctx->pc = 0x24BD44u;
    SET_GPR_U32(ctx, 31, 0x24BD4Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x24BD4Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24BD4Cu) { return; }
    ctx->pc = 0x24BD4Cu;
label_24bd4c:
    // 0x24bd4c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24bd50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24bd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bd54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24bd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24bd58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bd5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24bd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24bd60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24bd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bd64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24bd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24bd68: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24bd68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bd6c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24bd70: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24bd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bd74: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24bd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24bd78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bd7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24bd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24bd80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24bd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bd84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24bd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24bd88: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24bd88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24bd8c: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x24bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x24bd90: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24bd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bd94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24bd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24bd98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bd9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24bd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24bda0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24bda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bda4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24bda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24bda8: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24bda8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bdac: 0x24042400  addiu       $a0, $zero, 0x2400
    ctx->pc = 0x24bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
    // 0x24bdb0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24bdb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24bdb4: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24BDB4u;
    SET_GPR_U32(ctx, 31, 0x24BDBCu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24BDB4u, 0x24BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDBCu;
label_24bdbc:
    // 0x24bdbc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24bdbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24bdc0: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24BDC0u;
    SET_GPR_U32(ctx, 31, 0x24BDC8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24BDC0u, 0x24BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDC8u;
label_24bdc8:
    // 0x24bdc8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24bdcc: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x24bdccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
label_24bdd0:
    // 0x24bdd0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x24bdd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bdd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24bdd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bdd8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x24bdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24bddc: 0x3e00008  jr          $ra
    ctx->pc = 0x24BDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BDE4u;
}
