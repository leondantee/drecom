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

// Function: Set_effect_pl00_kaminari03
// Address: 0x2efcb0 - 0x2eff88
void Set_effect_pl00_kaminari03_0x2efcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_kaminari03_0x2efcb0");
#endif

    switch (ctx->pc) {
        case 0x2efe7cu: goto label_2efe7c;
        default: break;
    }

    ctx->pc = 0x2efcb0u;

    // 0x2efcb0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2efcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2efcb4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x2efcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x2efcb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2efcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2efcbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2efcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2efcc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2efcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2efcc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2efcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2efcc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2efcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2efccc: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2efcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2efcd0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2efcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2efcd4: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x2efcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x2efcd8: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x2efcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x2efcdc: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x2efcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
    // 0x2efce0: 0xafa90090  sw          $t1, 0x90($sp)
    ctx->pc = 0x2efce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 9));
    // 0x2efce4: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x2efce4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2efce8: 0xe7ad00a0  swc1        $f13, 0xA0($sp)
    ctx->pc = 0x2efce8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2efcec: 0xe7ae00a8  swc1        $f14, 0xA8($sp)
    ctx->pc = 0x2efcecu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2efcf0: 0xafaa00b0  sw          $t2, 0xB0($sp)
    ctx->pc = 0x2efcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 10));
    // 0x2efcf4: 0xa3ab00b8  sb          $t3, 0xB8($sp)
    ctx->pc = 0x2efcf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 11));
    // 0x2efcf8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2efcf8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2efcfc: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2efcfcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2efd00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2efd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2efd04: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EFD04u;
    {
        const bool branch_taken_0x2efd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efd04) {
            ctx->pc = 0x2EFD34u;
            goto label_2efd34;
        }
    }
    ctx->pc = 0x2EFD0Cu;
    // 0x2efd0c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2efd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2efd10: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFD10u;
    {
        const bool branch_taken_0x2efd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efd10) {
            ctx->pc = 0x2EFD24u;
            goto label_2efd24;
        }
    }
    ctx->pc = 0x2EFD18u;
    // 0x2efd18: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2efd18u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2efd1c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2EFD1Cu;
    {
        const bool branch_taken_0x2efd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd1c) {
            ctx->pc = 0x2EFD58u;
            goto label_2efd58;
        }
    }
    ctx->pc = 0x2EFD24u;
label_2efd24:
    // 0x2efd24: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2efd24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efd28: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2efd28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efd2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EFD2Cu;
    {
        const bool branch_taken_0x2efd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd2c) {
            ctx->pc = 0x2EFD58u;
            goto label_2efd58;
        }
    }
    ctx->pc = 0x2EFD34u;
label_2efd34:
    // 0x2efd34: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2efd34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efd38: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2efd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2efd3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFD3Cu;
    {
        const bool branch_taken_0x2efd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efd3c) {
            ctx->pc = 0x2EFD50u;
            goto label_2efd50;
        }
    }
    ctx->pc = 0x2EFD44u;
    // 0x2efd44: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2efd44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2efd48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EFD48u;
    {
        const bool branch_taken_0x2efd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd48) {
            ctx->pc = 0x2EFD58u;
            goto label_2efd58;
        }
    }
    ctx->pc = 0x2EFD50u;
label_2efd50:
    // 0x2efd50: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2efd50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2efd54: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2efd54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2efd58:
    // 0x2efd58: 0x93a200b8  lbu         $v0, 0xB8($sp)
    ctx->pc = 0x2efd58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2efd5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2efd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2efd60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFD60u;
    {
        const bool branch_taken_0x2efd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efd60) {
            ctx->pc = 0x2EFD74u;
            goto label_2efd74;
        }
    }
    ctx->pc = 0x2EFD68u;
    // 0x2efd68: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2efd68u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2efd6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EFD6Cu;
    {
        const bool branch_taken_0x2efd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd6c) {
            ctx->pc = 0x2EFD78u;
            goto label_2efd78;
        }
    }
    ctx->pc = 0x2EFD74u;
label_2efd74:
    // 0x2efd74: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2efd74u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2efd78:
    // 0x2efd78: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2efd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2efd7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efd80: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2efd80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2efd84: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2efd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x2efd88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efd8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2efd8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2efd90: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2efd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2efd94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2efd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2efd98: 0x3c021800  lui         $v0, 0x1800
    ctx->pc = 0x2efd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6144 << 16));
    // 0x2efd9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2efd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2efda0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2efda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2efda4: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2efda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2efda8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2efda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2efdac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efdb0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2efdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2efdb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efdb8: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2efdb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2efdbc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2efdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2efdc0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efdc4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2efdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2efdc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2efdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2efdcc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2efdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2efdd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2efdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2efdd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2efdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2efdd8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2efdd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efddc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2efddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2efde0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efde4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2efde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2efde8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2efde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2efdec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2efdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2efdf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2efdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2efdf4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2efdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2efdf8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2efdf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2efdfc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2efdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2efe00: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efe00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efe04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2efe04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2efe08: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2efe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2efe0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2efe0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2efe10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2efe10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2efe14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2efe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2efe18: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2efe18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efe1c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2efe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2efe20: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efe20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efe24: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2efe24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2efe28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2efe28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2efe2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2efe2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2efe30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2efe30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2efe34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2efe34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2efe38: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2efe38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2efe3c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2efe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2efe40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2efe40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2efe44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efe44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efe48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2efe48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2efe4c: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2efe4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x2efe50: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x2efe50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x2efe54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2efe54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2efe58: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2efe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2efe5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2efe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2efe60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efe64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2efe64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2efe68: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2efe68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2efe6c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2efe6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efe70: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2efe70u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2efe74: 0xc0634c8  jal         func_18D320
    ctx->pc = 0x2EFE74u;
    SET_GPR_U32(ctx, 31, 0x2EFE7Cu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2EFE74u, 0x2EFE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE7Cu;
label_2efe7c:
    // 0x2efe7c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2efe7cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2efe80: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2efe80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2efe84: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2efe84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2efe88: 0x12030034  beq         $s0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2EFE88u;
    {
        const bool branch_taken_0x2efe88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2efe88) {
            ctx->pc = 0x2EFF5Cu;
            goto label_2eff5c;
        }
    }
    ctx->pc = 0x2EFE90u;
    // 0x2efe90: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2efe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2efe94: 0xa203034d  sb          $v1, 0x34D($s0)
    ctx->pc = 0x2efe94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 3));
    // 0x2efe98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2efe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efe9c: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x2efe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x2efea0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2efea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2efea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2efea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efea8: 0x0  nop
    ctx->pc = 0x2efea8u;
    // NOP
    // 0x2efeac: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2efeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2efeb0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2efeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2efeb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2efeb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efeb8: 0x0  nop
    ctx->pc = 0x2efeb8u;
    // NOP
    // 0x2efebc: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2efebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2efec0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2efec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2efec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2efec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efec8: 0x0  nop
    ctx->pc = 0x2efec8u;
    // NOP
    // 0x2efecc: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2efeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2efed0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2efed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2efed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2efed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efed8: 0x0  nop
    ctx->pc = 0x2efed8u;
    // NOP
    // 0x2efedc: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2efedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x2efee0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2efee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efee4: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2efee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x2efee8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2efee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2efeec: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2efeecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2efef0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2efef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2efef4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2efef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efef8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2efef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2efefc: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x2efefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x2eff00: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2eff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff04: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2eff04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x2eff08: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2eff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff0c: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2eff0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x2eff10: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2eff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff14: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2eff14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x2eff18: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2eff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2eff1c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2eff1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff20: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2eff20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x2eff24: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2eff24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2eff28: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2eff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff2c: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2eff2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x2eff30: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2eff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2eff34: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2eff34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff38: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2eff38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x2eff3c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2eff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff40: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2eff40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x2eff44: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2eff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2eff48: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x2eff48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x2eff4c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2eff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2eff50: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x2eff50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x2eff54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EFF54u;
    {
        const bool branch_taken_0x2eff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eff54) {
            ctx->pc = 0x2EFF64u;
            goto label_2eff64;
        }
    }
    ctx->pc = 0x2EFF5Cu;
label_2eff5c:
    // 0x2eff5c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2EFF5Cu;
    {
        const bool branch_taken_0x2eff5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eff5c) {
            ctx->pc = 0x2EFF64u;
            goto label_2eff64;
        }
    }
    ctx->pc = 0x2EFF64u;
label_2eff64:
    // 0x2eff64: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2eff64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eff68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2eff68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eff6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2eff6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eff70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2eff70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eff74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eff74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eff78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2eff78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eff7c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2eff7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2eff80: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFF88u;
}
