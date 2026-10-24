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

// Function: Eff_amm_set
// Address: 0x18b0b0 - 0x18b4e0
void Eff_amm_set_0x18b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_amm_set_0x18b0b0");
#endif

    switch (ctx->pc) {
        case 0x18b118u: goto label_18b118;
        case 0x18b14cu: goto label_18b14c;
        case 0x18b1bcu: goto label_18b1bc;
        case 0x18b1d8u: goto label_18b1d8;
        case 0x18b23cu: goto label_18b23c;
        case 0x18b2c0u: goto label_18b2c0;
        case 0x18b2f8u: goto label_18b2f8;
        case 0x18b380u: goto label_18b380;
        case 0x18b3b8u: goto label_18b3b8;
        case 0x18b490u: goto label_18b490;
        default: break;
    }

    ctx->pc = 0x18b0b0u;

    // 0x18b0b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x18b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x18b0b4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x18b0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x18b0b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x18b0bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18b0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18b0c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18b0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18b0c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18b0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18b0c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18b0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18b0cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18b0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18b0d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b0d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b0d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b0dc: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x18b0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x18b0e0: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x18b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x18b0e4: 0xafa600c8  sw          $a2, 0xC8($sp)
    ctx->pc = 0x18b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 6));
    // 0x18b0e8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18b0ec: 0x2470a630  addiu       $s0, $v1, -0x59D0
    ctx->pc = 0x18b0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944304));
    // 0x18b0f0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x18b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x18b0f4: 0x2463bb00  addiu       $v1, $v1, -0x4500
    ctx->pc = 0x18b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949632));
    // 0x18b0f8: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x18b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x18b0fc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x18b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x18b100: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x18b100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x18b104: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x18b104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18b108: 0x8c7e0000  lw          $fp, 0x0($v1)
    ctx->pc = 0x18b108u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18b10c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x18b10cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18b110: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x18B110u;
    {
        const bool branch_taken_0x18b110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b110) {
            ctx->pc = 0x18B4A0u;
            goto label_18b4a0;
        }
    }
    ctx->pc = 0x18B118u;
label_18b118:
    // 0x18b118: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x18b118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b11c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x18b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x18b120: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x18b120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18b124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b128: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x18b128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18b12c: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x18b12cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b130: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x18b130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18b134: 0x578821  addu        $s1, $v0, $s7
    ctx->pc = 0x18b134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x18b138: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x18b138u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18b13c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x18b13cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x18b140: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x18b140u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18b144: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x18B144u;
    {
        const bool branch_taken_0x18b144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b144) {
            ctx->pc = 0x18B1E0u;
            goto label_18b1e0;
        }
    }
    ctx->pc = 0x18B14Cu;
label_18b14c:
    // 0x18b14c: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x18b14cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x18b150: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x18b150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x18b154: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x18b154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18b158: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x18b158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18b15c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b160: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18B160u;
    {
        const bool branch_taken_0x18b160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b160) {
            ctx->pc = 0x18B1C8u;
            goto label_18b1c8;
        }
    }
    ctx->pc = 0x18B168u;
    // 0x18b168: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18b168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b16c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B16Cu;
    {
        const bool branch_taken_0x18b16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b16c) {
            ctx->pc = 0x18B17Cu;
            goto label_18b17c;
        }
    }
    ctx->pc = 0x18B174u;
    // 0x18b174: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18B174u;
    {
        const bool branch_taken_0x18b174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b174) {
            ctx->pc = 0x18B1C8u;
            goto label_18b1c8;
        }
    }
    ctx->pc = 0x18B17Cu;
label_18b17c:
    // 0x18b17c: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x18b17cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x18b180: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x18b180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18b184: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18b184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18b188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b18c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18b190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b194: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18b194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18b198: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18b198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18b19c: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18b1a0: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x18b1a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b1a4: 0x96440006  lhu         $a0, 0x6($s2)
    ctx->pc = 0x18b1a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x18b1a8: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x18b1a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x18b1ac: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x18b1acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x18b1b0: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x18b1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18b1b4: 0xc062d38  jal         func_18B4E0
    ctx->pc = 0x18B1B4u;
    SET_GPR_U32(ctx, 31, 0x18B1BCu);
    ctx->pc = 0x18B4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B4E0u, 0x18B1B4u, 0x18B1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1BCu;
label_18b1bc:
    // 0x18b1bc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18b1bcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18b1c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18B1C0u;
    {
        const bool branch_taken_0x18b1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b1c0) {
            ctx->pc = 0x18B1D8u;
            goto label_18b1d8;
        }
    }
    ctx->pc = 0x18B1C8u;
label_18b1c8:
    // 0x18b1c8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x18b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x18b1cc: 0x2444edd0  addiu       $a0, $v0, -0x1230
    ctx->pc = 0x18b1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962640));
    // 0x18b1d0: 0xc046760  jal         func_119D80
    ctx->pc = 0x18B1D0u;
    SET_GPR_U32(ctx, 31, 0x18B1D8u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x18B1D8u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18B1D8u) { return; }
    ctx->pc = 0x18B1D8u;
label_18b1d8:
    // 0x18b1d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18b1d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18b1dc: 0x0  nop
    ctx->pc = 0x18b1dcu;
    // NOP
label_18b1e0:
    // 0x18b1e0: 0x275102b  sltu        $v0, $s3, $s5
    ctx->pc = 0x18b1e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x18b1e4: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x18B1E4u;
    {
        const bool branch_taken_0x18b1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b1e4) {
            ctx->pc = 0x18B14Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b14c;
        }
    }
    ctx->pc = 0x18B1ECu;
    // 0x18b1ec: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x18b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18b1f0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x18b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18b1f4: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x18B1F4u;
    {
        const bool branch_taken_0x18b1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b1f4) {
            ctx->pc = 0x18B2CCu;
            goto label_18b2cc;
        }
    }
    ctx->pc = 0x18B1FCu;
    // 0x18b1fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b200: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B200u;
    {
        const bool branch_taken_0x18b200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18b200) {
            ctx->pc = 0x18B210u;
            goto label_18b210;
        }
    }
    ctx->pc = 0x18B208u;
    // 0x18b208: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x18B208u;
    {
        const bool branch_taken_0x18b208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b208) {
            ctx->pc = 0x18B38Cu;
            goto label_18b38c;
        }
    }
    ctx->pc = 0x18B210u;
label_18b210:
    // 0x18b210: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x18b210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x18b214: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b218: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18B218u;
    {
        const bool branch_taken_0x18b218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b218) {
            ctx->pc = 0x18B248u;
            goto label_18b248;
        }
    }
    ctx->pc = 0x18B220u;
    // 0x18b220: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x18b220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18b224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b228: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x18b228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b22c: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x18b22cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x18b230: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b234: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18B234u;
    SET_GPR_U32(ctx, 31, 0x18B23Cu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18B234u, 0x18B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B23Cu;
label_18b23c:
    // 0x18b23c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x18b23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x18b240: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x18B240u;
    {
        const bool branch_taken_0x18b240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b240) {
            ctx->pc = 0x18B498u;
            goto label_18b498;
        }
    }
    ctx->pc = 0x18B248u;
label_18b248:
    // 0x18b248: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x18b248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18b24c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b250: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b254: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x18b254u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x18b258: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b25c: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x18b25cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x18b260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b264: 0xa2020019  sb          $v0, 0x19($s0)
    ctx->pc = 0x18b264u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b268: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x18b268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18b26c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b270: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b274: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x18b274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x18b278: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B278u;
    {
        const bool branch_taken_0x18b278 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b278) {
            ctx->pc = 0x18B28Cu;
            goto label_18b28c;
        }
    }
    ctx->pc = 0x18B280u;
    // 0x18b280: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18B280u;
    {
        const bool branch_taken_0x18b280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b280) {
            ctx->pc = 0x18B28Cu;
            goto label_18b28c;
        }
    }
    ctx->pc = 0x18B288u;
    // 0x18b288: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x18b288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_18b28c:
    // 0x18b28c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B28Cu;
    {
        const bool branch_taken_0x18b28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b28c) {
            ctx->pc = 0x18B2A0u;
            goto label_18b2a0;
        }
    }
    ctx->pc = 0x18B294u;
    // 0x18b294: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x18b294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x18b298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b29c: 0xa2020019  sb          $v0, 0x19($s0)
    ctx->pc = 0x18b29cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 2));
label_18b2a0:
    // 0x18b2a0: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x18b2a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18b2a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b2a8: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x18b2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b2ac: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x18b2acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x18b2b0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b2b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b2b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18b2b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18b2b8: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18B2B8u;
    SET_GPR_U32(ctx, 31, 0x18B2C0u);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18B2B8u, 0x18B2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B2C0u;
label_18b2c0:
    // 0x18b2c0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x18b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x18b2c4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x18B2C4u;
    {
        const bool branch_taken_0x18b2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b2c4) {
            ctx->pc = 0x18B498u;
            goto label_18b498;
        }
    }
    ctx->pc = 0x18B2CCu;
label_18b2cc:
    // 0x18b2cc: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x18b2ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x18b2d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b2d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18B2D4u;
    {
        const bool branch_taken_0x18b2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b2d4) {
            ctx->pc = 0x18B304u;
            goto label_18b304;
        }
    }
    ctx->pc = 0x18B2DCu;
    // 0x18b2dc: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x18b2dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18b2e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b2e4: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x18b2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b2e8: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x18b2e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x18b2ec: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b2f0: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18B2F0u;
    SET_GPR_U32(ctx, 31, 0x18B2F8u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18B2F0u, 0x18B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B2F8u;
label_18b2f8:
    // 0x18b2f8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x18b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x18b2fc: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x18B2FCu;
    {
        const bool branch_taken_0x18b2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b2fc) {
            ctx->pc = 0x18B498u;
            goto label_18b498;
        }
    }
    ctx->pc = 0x18B304u;
label_18b304:
    // 0x18b304: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x18b304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18b308: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b30c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b310: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x18b310u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x18b314: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b318: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x18b318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x18b31c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b320: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x18b320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b324: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x18b324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18b328: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b32c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b330: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x18b330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x18b334: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B334u;
    {
        const bool branch_taken_0x18b334 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b334) {
            ctx->pc = 0x18B348u;
            goto label_18b348;
        }
    }
    ctx->pc = 0x18B33Cu;
    // 0x18b33c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18B33Cu;
    {
        const bool branch_taken_0x18b33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b33c) {
            ctx->pc = 0x18B348u;
            goto label_18b348;
        }
    }
    ctx->pc = 0x18B344u;
    // 0x18b344: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x18b344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_18b348:
    // 0x18b348: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B348u;
    {
        const bool branch_taken_0x18b348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b348) {
            ctx->pc = 0x18B360u;
            goto label_18b360;
        }
    }
    ctx->pc = 0x18B350u;
    // 0x18b350: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x18b350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x18b354: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b358: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x18b358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b35c: 0x0  nop
    ctx->pc = 0x18b35cu;
    // NOP
label_18b360:
    // 0x18b360: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x18b360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18b364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b368: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x18b368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b36c: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x18b36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x18b370: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b374: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18b374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18b378: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18B378u;
    SET_GPR_U32(ctx, 31, 0x18B380u);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18B378u, 0x18B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B380u;
label_18b380:
    // 0x18b380: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x18b380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x18b384: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x18B384u;
    {
        const bool branch_taken_0x18b384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b384) {
            ctx->pc = 0x18B498u;
            goto label_18b498;
        }
    }
    ctx->pc = 0x18B38Cu;
label_18b38c:
    // 0x18b38c: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x18b38cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x18b390: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b394: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18B394u;
    {
        const bool branch_taken_0x18b394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b394) {
            ctx->pc = 0x18B3C4u;
            goto label_18b3c4;
        }
    }
    ctx->pc = 0x18B39Cu;
    // 0x18b39c: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18b39cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18b3a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b3a4: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x18b3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b3a8: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x18b3a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x18b3ac: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b3b0: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18B3B0u;
    SET_GPR_U32(ctx, 31, 0x18B3B8u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18B3B0u, 0x18B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3B8u;
label_18b3b8:
    // 0x18b3b8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x18b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x18b3bc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x18B3BCu;
    {
        const bool branch_taken_0x18b3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b3bc) {
            ctx->pc = 0x18B498u;
            goto label_18b498;
        }
    }
    ctx->pc = 0x18B3C4u;
label_18b3c4:
    // 0x18b3c4: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x18b3c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18b3c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b3cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b3d0: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x18b3d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x18b3d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b3d8: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x18b3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x18b3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b3e0: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x18b3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b3e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x18b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18b3e8: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x18b3e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x18b3ec: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x18B3ECu;
    {
        const bool branch_taken_0x18b3ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b3ec) {
            ctx->pc = 0x18B418u;
            goto label_18b418;
        }
    }
    ctx->pc = 0x18B3F4u;
    // 0x18b3f4: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x18b3f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18b3f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b3fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b400: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x18b400u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x18b404: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b408: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x18b408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x18b40c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b410: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x18b410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b414: 0x0  nop
    ctx->pc = 0x18b414u;
    // NOP
label_18b418:
    // 0x18b418: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x18b418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18b41c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b420: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b424: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x18b424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x18b428: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B428u;
    {
        const bool branch_taken_0x18b428 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b428) {
            ctx->pc = 0x18B43Cu;
            goto label_18b43c;
        }
    }
    ctx->pc = 0x18B430u;
    // 0x18b430: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18B430u;
    {
        const bool branch_taken_0x18b430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b430) {
            ctx->pc = 0x18B43Cu;
            goto label_18b43c;
        }
    }
    ctx->pc = 0x18B438u;
    // 0x18b438: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x18b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_18b43c:
    // 0x18b43c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18B43Cu;
    {
        const bool branch_taken_0x18b43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b43c) {
            ctx->pc = 0x18B470u;
            goto label_18b470;
        }
    }
    ctx->pc = 0x18B444u;
    // 0x18b444: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x18b444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x18b448: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b44c: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x18b44cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b450: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x18b450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18b454: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x18b454u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x18b458: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B458u;
    {
        const bool branch_taken_0x18b458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b458) {
            ctx->pc = 0x18B470u;
            goto label_18b470;
        }
    }
    ctx->pc = 0x18B460u;
    // 0x18b460: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x18b460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x18b464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b468: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x18b468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b46c: 0x0  nop
    ctx->pc = 0x18b46cu;
    // NOP
label_18b470:
    // 0x18b470: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18b470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18b474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b478: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x18b478u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b47c: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x18b47cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x18b480: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b484: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18b484u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18b488: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18B488u;
    SET_GPR_U32(ctx, 31, 0x18B490u);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18B488u, 0x18B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B490u;
label_18b490:
    // 0x18b490: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x18b490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x18b494: 0x0  nop
    ctx->pc = 0x18b494u;
    // NOP
label_18b498:
    // 0x18b498: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x18b498u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x18b49c: 0x0  nop
    ctx->pc = 0x18b49cu;
    // NOP
label_18b4a0:
    // 0x18b4a0: 0x2de182b  sltu        $v1, $s6, $fp
    ctx->pc = 0x18b4a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x18b4a4: 0x1460ff1c  bnez        $v1, . + 4 + (-0xE4 << 2)
    ctx->pc = 0x18B4A4u;
    {
        const bool branch_taken_0x18b4a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b4a4) {
            ctx->pc = 0x18B118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b118;
        }
    }
    ctx->pc = 0x18B4ACu;
    // 0x18b4ac: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x18b4acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18b4b0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18b4b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18b4b4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18b4b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18b4b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18b4b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b4bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18b4bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b4c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b4c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b4c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b4c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b4c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b4c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b4cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b4ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b4d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b4d4: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x18b4d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x18b4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x18B4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B4E0u;
}
