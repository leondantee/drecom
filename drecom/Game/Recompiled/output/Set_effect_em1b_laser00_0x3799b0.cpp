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

// Function: Set_effect_em1b_laser00
// Address: 0x3799b0 - 0x379c50
void Set_effect_em1b_laser00_0x3799b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em1b_laser00_0x3799b0");
#endif

    switch (ctx->pc) {
        case 0x379b60u: goto label_379b60;
        default: break;
    }

    ctx->pc = 0x3799b0u;

    // 0x3799b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3799b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3799b4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x3799b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x3799b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3799b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3799bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3799bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3799c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3799c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3799c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3799c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3799c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3799c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3799cc: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x3799ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x3799d0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x3799d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x3799d4: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x3799d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x3799d8: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x3799d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x3799dc: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x3799dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
    // 0x3799e0: 0xafa90090  sw          $t1, 0x90($sp)
    ctx->pc = 0x3799e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 9));
    // 0x3799e4: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x3799e4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3799e8: 0xe7ad00a0  swc1        $f13, 0xA0($sp)
    ctx->pc = 0x3799e8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3799ec: 0xe7ae00a8  swc1        $f14, 0xA8($sp)
    ctx->pc = 0x3799ecu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3799f0: 0xafaa00b0  sw          $t2, 0xB0($sp)
    ctx->pc = 0x3799f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 10));
    // 0x3799f4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x3799f4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3799f8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x3799f8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3799fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3799fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379a00: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x379A00u;
    {
        const bool branch_taken_0x379a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x379a00) {
            ctx->pc = 0x379A30u;
            goto label_379a30;
        }
    }
    ctx->pc = 0x379A08u;
    // 0x379a08: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x379a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x379a0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x379A0Cu;
    {
        const bool branch_taken_0x379a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x379a0c) {
            ctx->pc = 0x379A20u;
            goto label_379a20;
        }
    }
    ctx->pc = 0x379A14u;
    // 0x379a14: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x379a14u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x379a18: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x379A18u;
    {
        const bool branch_taken_0x379a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379a18) {
            ctx->pc = 0x379A54u;
            goto label_379a54;
        }
    }
    ctx->pc = 0x379A20u;
label_379a20:
    // 0x379a20: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x379a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379a24: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x379a24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379a28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x379A28u;
    {
        const bool branch_taken_0x379a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379a28) {
            ctx->pc = 0x379A54u;
            goto label_379a54;
        }
    }
    ctx->pc = 0x379A30u;
label_379a30:
    // 0x379a30: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x379a30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379a34: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x379a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x379a38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x379A38u;
    {
        const bool branch_taken_0x379a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x379a38) {
            ctx->pc = 0x379A4Cu;
            goto label_379a4c;
        }
    }
    ctx->pc = 0x379A40u;
    // 0x379a40: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x379a40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x379a44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x379A44u;
    {
        const bool branch_taken_0x379a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379a44) {
            ctx->pc = 0x379A54u;
            goto label_379a54;
        }
    }
    ctx->pc = 0x379A4Cu;
label_379a4c:
    // 0x379a4c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x379a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379a50: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x379a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_379a54:
    // 0x379a54: 0x24140035  addiu       $s4, $zero, 0x35
    ctx->pc = 0x379a54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x379a58: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x379a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x379a5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x379a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x379a60: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x379a60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x379a64: 0x34430200  ori         $v1, $v0, 0x200
    ctx->pc = 0x379a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x379a68: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x379a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x379a6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x379a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x379a70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x379a70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x379a74: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x379a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x379a78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x379a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x379a7c: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x379a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
    // 0x379a80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x379a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x379a84: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x379a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x379a88: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x379a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x379a8c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x379a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x379a90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x379a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x379a94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x379a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x379a98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x379a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x379a9c: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x379a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x379aa0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x379aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x379aa4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x379aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x379aa8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x379aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x379aac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x379aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x379ab0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x379ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x379ab4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x379ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x379ab8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x379ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x379abc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x379abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x379ac0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x379ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x379ac4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x379ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x379ac8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x379ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x379acc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x379accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x379ad0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x379ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x379ad4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x379ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x379ad8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x379ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x379adc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x379adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x379ae0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x379ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379ae4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x379ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x379ae8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x379ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x379aec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x379aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x379af0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x379af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x379af4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x379af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x379af8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x379af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x379afc: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x379afcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x379b00: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x379b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x379b04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x379b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x379b08: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x379b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x379b0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x379b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x379b10: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x379b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x379b14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x379b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x379b18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x379b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x379b1c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x379b1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x379b20: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x379b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x379b24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x379b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x379b28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x379b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x379b2c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x379b2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x379b30: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x379b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x379b34: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x379b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
    // 0x379b38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x379b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x379b3c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x379b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x379b40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x379b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x379b44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x379b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x379b48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x379b48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x379b4c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x379b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x379b50: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x379b50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x379b54: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x379b54u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x379b58: 0xc0634c8  jal         func_18D320
    ctx->pc = 0x379B58u;
    SET_GPR_U32(ctx, 31, 0x379B60u);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x379B58u, 0x379B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B60u;
label_379b60:
    // 0x379b60: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x379b60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x379b64: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x379b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x379b68: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x379b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x379b6c: 0x1203002f  beq         $s0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x379B6Cu;
    {
        const bool branch_taken_0x379b6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x379b6c) {
            ctx->pc = 0x379C2Cu;
            goto label_379c2c;
        }
    }
    ctx->pc = 0x379B74u;
    // 0x379b74: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x379b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x379b78: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x379b78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x379b7c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x379b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x379b80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379b84: 0x0  nop
    ctx->pc = 0x379b84u;
    // NOP
    // 0x379b88: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x379b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x379b8c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x379b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x379b90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379b90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379b94: 0x0  nop
    ctx->pc = 0x379b94u;
    // NOP
    // 0x379b98: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x379b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x379b9c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x379b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x379ba0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379ba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379ba4: 0x0  nop
    ctx->pc = 0x379ba4u;
    // NOP
    // 0x379ba8: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x379ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x379bac: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x379bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x379bb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379bb4: 0x0  nop
    ctx->pc = 0x379bb4u;
    // NOP
    // 0x379bb8: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x379bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x379bbc: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x379bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379bc0: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x379bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x379bc4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x379bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379bc8: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x379bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x379bcc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x379bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379bd0: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x379bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x379bd4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x379bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379bd8: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x379bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x379bdc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x379bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x379be0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x379be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379be4: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x379be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x379be8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x379be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x379bec: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x379becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379bf0: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x379bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x379bf4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x379bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x379bf8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x379bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379bfc: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x379bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x379c00: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x379c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379c04: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x379c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x379c08: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x379c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x379c0c: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x379c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x379c10: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x379c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x379c14: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x379c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x379c18: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x379c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x379c1c: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x379c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x379c20: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x379c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x379c24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x379c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x379c28: 0xa20302ab  sb          $v1, 0x2AB($s0)
    ctx->pc = 0x379c28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 683), (uint8_t)GPR_U32(ctx, 3));
label_379c2c:
    // 0x379c2c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x379c2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x379c30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x379c30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x379c34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x379c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379c38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x379c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379c3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x379c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379c40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x379c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379c44: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x379c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x379c48: 0x3e00008  jr          $ra
    ctx->pc = 0x379C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379C50u;
}
