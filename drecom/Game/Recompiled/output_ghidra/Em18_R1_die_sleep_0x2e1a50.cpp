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

// Function: Em18_R1_die_sleep
// Address: 0x2e1a50 - 0x2e1ee0
void Em18_R1_die_sleep_0x2e1a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_die_sleep_0x2e1a50");
#endif

    switch (ctx->pc) {
        case 0x2e1ad0u: goto label_2e1ad0;
        case 0x2e1b88u: goto label_2e1b88;
        case 0x2e1b98u: goto label_2e1b98;
        case 0x2e1ba4u: goto label_2e1ba4;
        case 0x2e1be8u: goto label_2e1be8;
        case 0x2e1c20u: goto label_2e1c20;
        case 0x2e1c34u: goto label_2e1c34;
        case 0x2e1c48u: goto label_2e1c48;
        case 0x2e1c9cu: goto label_2e1c9c;
        default: break;
    }

    ctx->pc = 0x2e1a50u;

    // 0x2e1a50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e1a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e1a54: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x2e1a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x2e1a58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e1a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e1a5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e1a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e1a60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e1a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e1a64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e1a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e1a68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e1a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e1a6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e1a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e1a70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e1a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e1a74: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x2e1a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x2e1a78: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1a7c: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x2e1a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e1a80: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1a84: 0x247610b0  addiu       $s6, $v1, 0x10B0
    ctx->pc = 0x2e1a84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x2e1a88: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1a8c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e1a8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e1a90: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e1a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e1a94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1a98: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2E1A98u;
    {
        const bool branch_taken_0x2e1a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1a98) {
            ctx->pc = 0x2E1B78u;
            goto label_2e1b78;
        }
    }
    ctx->pc = 0x2E1AA0u;
    // 0x2e1aa0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1AA0u;
    {
        const bool branch_taken_0x2e1aa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1aa0) {
            ctx->pc = 0x2E1AB0u;
            goto label_2e1ab0;
        }
    }
    ctx->pc = 0x2E1AA8u;
    // 0x2e1aa8: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x2E1AA8u;
    {
        const bool branch_taken_0x2e1aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1aa8) {
            ctx->pc = 0x2E1EB4u;
            goto label_2e1eb4;
        }
    }
    ctx->pc = 0x2E1AB0u;
label_2e1ab0:
    // 0x2e1ab0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1ab4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2e1ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1ab8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e1ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e1abc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2e1abcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1ac0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e1ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1ac4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e1ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e1ac8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E1AC8u;
    SET_GPR_U32(ctx, 31, 0x2E1AD0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E1AC8u, 0x2E1AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AD0u;
label_2e1ad0:
    // 0x2e1ad0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e1ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e1ad4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1ad8: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x2e1ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1adc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2e1adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e1ae0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1ae4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e1ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1ae8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2e1ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1aec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e1aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e1af0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2e1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e1af4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e1af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e1af8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e1af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e1afc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2e1afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1b00: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e1b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e1b04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2e1b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2e1b08: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e1b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e1b0c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e1b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e1b10: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e1b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e1b14: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x2e1b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x2e1b18: 0x8ec300f0  lw          $v1, 0xF0($s6)
    ctx->pc = 0x2e1b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 240)));
    // 0x2e1b1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e1b20: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e1b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e1b24: 0xaec200f0  sw          $v0, 0xF0($s6)
    ctx->pc = 0x2e1b24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 240), GPR_U32(ctx, 2));
    // 0x2e1b28: 0xa22000d6  sb          $zero, 0xD6($s1)
    ctx->pc = 0x2e1b28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1b2c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1b30: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2e1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2e1b34: 0x24502d50  addiu       $s0, $v0, 0x2D50
    ctx->pc = 0x2e1b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11600));
    // 0x2e1b38: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2e1b38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2e1b3c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2e1b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2e1b40: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2e1b40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1b44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1b48: 0x0  nop
    ctx->pc = 0x2e1b48u;
    // NOP
    // 0x2e1b4c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2e1b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2e1b50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1b54: 0x0  nop
    ctx->pc = 0x2e1b54u;
    // NOP
    // 0x2e1b58: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2e1b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2e1b5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1b60: 0x0  nop
    ctx->pc = 0x2e1b60u;
    // NOP
    // 0x2e1b64: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2e1b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2e1b68: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1b6c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e1b6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e1b70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e1b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e1b74: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e1b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e1b78:
    // 0x2e1b78: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2e1b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1b7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e1b7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1b80: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E1B80u;
    SET_GPR_U32(ctx, 31, 0x2E1B88u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E1B80u, 0x2E1B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B88u;
label_2e1b88:
    // 0x2e1b88: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2e1b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1b8c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e1b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e1b90: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E1B90u;
    SET_GPR_U32(ctx, 31, 0x2E1B98u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E1B90u, 0x2E1B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B98u;
label_2e1b98:
    // 0x2e1b98: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2e1b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1b9c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E1B9Cu;
    SET_GPR_U32(ctx, 31, 0x2E1BA4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E1B9Cu, 0x2E1BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BA4u;
label_2e1ba4:
    // 0x2e1ba4: 0x8e3500b0  lw          $s5, 0xB0($s1)
    ctx->pc = 0x2e1ba4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2e1ba8: 0x12a000c2  beqz        $s5, . + 4 + (0xC2 << 2)
    ctx->pc = 0x2E1BA8u;
    {
        const bool branch_taken_0x2e1ba8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1ba8) {
            ctx->pc = 0x2E1EB4u;
            goto label_2e1eb4;
        }
    }
    ctx->pc = 0x2E1BB0u;
    // 0x2e1bb0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2e1bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1bb4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e1bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e1bb8: 0x3c02afff  lui         $v0, 0xAFFF
    ctx->pc = 0x2e1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45055 << 16));
    // 0x2e1bbc: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x2e1bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x2e1bc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e1bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e1bc4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e1bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e1bc8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1bcc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e1bd0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e1bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2e1bd4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2e1bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2e1bd8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1bdc: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2e1bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1be0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E1BE0u;
    SET_GPR_U32(ctx, 31, 0x2E1BE8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E1BE0u, 0x2E1BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BE8u;
label_2e1be8:
    // 0x2e1be8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e1be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1bec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2e1becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e1bf0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2e1bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e1bf4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e1bf8: 0x244289c0  addiu       $v0, $v0, -0x7640
    ctx->pc = 0x2e1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937024));
    // 0x2e1bfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e1c00: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2e1c00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1c04: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1c08: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x2e1c08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1c0c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1c10: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2e1c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2e1c14: 0x26a50120  addiu       $a1, $s5, 0x120
    ctx->pc = 0x2e1c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
    // 0x2e1c18: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E1C18u;
    SET_GPR_U32(ctx, 31, 0x2E1C20u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E1C20u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E1C20u) { return; }
    ctx->pc = 0x2E1C20u;
label_2e1c20:
    // 0x2e1c20: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1c24: 0x24440170  addiu       $a0, $v0, 0x170
    ctx->pc = 0x2e1c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x2e1c28: 0x26a50170  addiu       $a1, $s5, 0x170
    ctx->pc = 0x2e1c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 368));
    // 0x2e1c2c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E1C2Cu;
    SET_GPR_U32(ctx, 31, 0x2E1C34u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E1C34u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E1C34u) { return; }
    ctx->pc = 0x2E1C34u;
label_2e1c34:
    // 0x2e1c34: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1c38: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x2e1c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2e1c3c: 0x26a500d0  addiu       $a1, $s5, 0xD0
    ctx->pc = 0x2e1c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
    // 0x2e1c40: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E1C40u;
    SET_GPR_U32(ctx, 31, 0x2E1C48u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E1C48u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E1C48u) { return; }
    ctx->pc = 0x2E1C48u;
label_2e1c48:
    // 0x2e1c48: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1c4c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e1c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e1c50: 0x24703390  addiu       $s0, $v1, 0x3390
    ctx->pc = 0x2e1c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13200));
    // 0x2e1c54: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2e1c54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2e1c58: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x2e1c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x2e1c5c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2e1c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1c60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e1c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1c64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1c64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1c68: 0x0  nop
    ctx->pc = 0x2e1c68u;
    // NOP
    // 0x2e1c6c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2e1c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2e1c70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e1c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1c78: 0x0  nop
    ctx->pc = 0x2e1c78u;
    // NOP
    // 0x2e1c7c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2e1c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2e1c80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e1c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1c84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1c88: 0x0  nop
    ctx->pc = 0x2e1c88u;
    // NOP
    // 0x2e1c8c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2e1c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2e1c90: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2e1c90u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1c94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E1C94u;
    {
        const bool branch_taken_0x2e1c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1c94) {
            ctx->pc = 0x2E1CD8u;
            goto label_2e1cd8;
        }
    }
    ctx->pc = 0x2E1C9Cu;
label_2e1c9c:
    // 0x2e1c9c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x2e1c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2e1ca0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2e1ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2e1ca4: 0x24638ac0  addiu       $v1, $v1, -0x7540
    ctx->pc = 0x2e1ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937280));
    // 0x2e1ca8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e1ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e1cac: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x2e1cacu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1cb0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2e1cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1cb4: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x2e1cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2e1cb8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2e1cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2e1cbc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e1cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e1cc0: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x2e1cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2e1cc4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x2e1cc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e1cc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1ccc: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x2e1cccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1cd0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e1cd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e1cd4: 0x0  nop
    ctx->pc = 0x2e1cd4u;
    // NOP
label_2e1cd8:
    // 0x2e1cd8: 0x2a630007  slti        $v1, $s3, 0x7
    ctx->pc = 0x2e1cd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e1cdc: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E1CDCu;
    {
        const bool branch_taken_0x2e1cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1cdc) {
            ctx->pc = 0x2E1C9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1c9c;
        }
    }
    ctx->pc = 0x2E1CE4u;
    // 0x2e1ce4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1ce8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2e1ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e1cec: 0x24720e10  addiu       $s2, $v1, 0xE10
    ctx->pc = 0x2e1cecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3600));
    // 0x2e1cf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1cf4: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x2e1cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1cf8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1cfc: 0x8c720058  lw          $s2, 0x58($v1)
    ctx->pc = 0x2e1cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e1d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1d04: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x2e1d04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1d08: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1d0c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2e1d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e1d10: 0x24720990  addiu       $s2, $v1, 0x990
    ctx->pc = 0x2e1d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 2448));
    // 0x2e1d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1d18: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x2e1d18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1d1c: 0xa22000ce  sb          $zero, 0xCE($s1)
    ctx->pc = 0x2e1d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 206), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1d20: 0xa22000d5  sb          $zero, 0xD5($s1)
    ctx->pc = 0x2e1d20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1d24: 0xa22000d6  sb          $zero, 0xD6($s1)
    ctx->pc = 0x2e1d24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1d28: 0xa22000d8  sb          $zero, 0xD8($s1)
    ctx->pc = 0x2e1d28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1d2c: 0xa22000d9  sb          $zero, 0xD9($s1)
    ctx->pc = 0x2e1d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 217), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1d30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1d30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1d34: 0x0  nop
    ctx->pc = 0x2e1d34u;
    // NOP
    // 0x2e1d38: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x2e1d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x2e1d3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1d40: 0x0  nop
    ctx->pc = 0x2e1d40u;
    // NOP
    // 0x2e1d44: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x2e1d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x2e1d48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1d4c: 0x0  nop
    ctx->pc = 0x2e1d4cu;
    // NOP
    // 0x2e1d50: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x2e1d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x2e1d54: 0xa22000db  sb          $zero, 0xDB($s1)
    ctx->pc = 0x2e1d54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 219), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1d58: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1d5c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e1d60: 0x24702d50  addiu       $s0, $v1, 0x2D50
    ctx->pc = 0x2e1d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11600));
    // 0x2e1d64: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2e1d64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2e1d68: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2e1d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2e1d6c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2e1d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1d70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1d70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1d74: 0x0  nop
    ctx->pc = 0x2e1d74u;
    // NOP
    // 0x2e1d78: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2e1d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2e1d7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1d80: 0x0  nop
    ctx->pc = 0x2e1d80u;
    // NOP
    // 0x2e1d84: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2e1d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2e1d88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1d8c: 0x0  nop
    ctx->pc = 0x2e1d8cu;
    // NOP
    // 0x2e1d90: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2e1d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2e1d94: 0x922300dc  lbu         $v1, 0xDC($s1)
    ctx->pc = 0x2e1d94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x2e1d98: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e1d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e1d9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e1da0: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2E1DA0u;
    {
        const bool branch_taken_0x2e1da0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1da0) {
            ctx->pc = 0x2E1E78u;
            goto label_2e1e78;
        }
    }
    ctx->pc = 0x2E1DA8u;
    // 0x2e1da8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1dac: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E1DACu;
    {
        const bool branch_taken_0x2e1dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1dac) {
            ctx->pc = 0x2E1E40u;
            goto label_2e1e40;
        }
    }
    ctx->pc = 0x2E1DB4u;
    // 0x2e1db4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1db8: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E1DB8u;
    {
        const bool branch_taken_0x2e1db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1db8) {
            ctx->pc = 0x2E1E08u;
            goto label_2e1e08;
        }
    }
    ctx->pc = 0x2E1DC0u;
    // 0x2e1dc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1DC0u;
    {
        const bool branch_taken_0x2e1dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1dc0) {
            ctx->pc = 0x2E1DD0u;
            goto label_2e1dd0;
        }
    }
    ctx->pc = 0x2E1DC8u;
    // 0x2e1dc8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E1DC8u;
    {
        const bool branch_taken_0x2e1dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1dc8) {
            ctx->pc = 0x2E1E08u;
            goto label_2e1e08;
        }
    }
    ctx->pc = 0x2E1DD0u;
label_2e1dd0:
    // 0x2e1dd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1dd4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1dd8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e1dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1ddc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2e1ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e1de0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1de4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e1de4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1de8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1dec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e1decu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1df0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1df4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e1df4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1df8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1dfc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e1e00: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2E1E00u;
    {
        const bool branch_taken_0x2e1e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1e00) {
            ctx->pc = 0x2E1EB4u;
            goto label_2e1eb4;
        }
    }
    ctx->pc = 0x2E1E08u;
label_2e1e08:
    // 0x2e1e08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1e0c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e1e10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1e14: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2e1e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e1e18: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e1c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e1e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1e20: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e24: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e1e24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1e28: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e2c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e1e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1e30: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e1e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e1e38: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2E1E38u;
    {
        const bool branch_taken_0x2e1e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1e38) {
            ctx->pc = 0x2E1EB4u;
            goto label_2e1eb4;
        }
    }
    ctx->pc = 0x2E1E40u;
label_2e1e40:
    // 0x2e1e40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1e44: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e48: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e1e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1e4c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2e1e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e1e50: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e54: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e1e54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1e58: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e1e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1e60: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e1e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1e68: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e1e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e1e70: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E1E70u;
    {
        const bool branch_taken_0x2e1e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1e70) {
            ctx->pc = 0x2E1EB4u;
            goto label_2e1eb4;
        }
    }
    ctx->pc = 0x2E1E78u;
label_2e1e78:
    // 0x2e1e78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e1e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1e7c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e1e80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1e84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1e88: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e1e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1e90: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e1e94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1e98: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e1e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1ea0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1ea4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e1ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e1ea8: 0xc6a011f8  lwc1        $f0, 0x11F8($s5)
    ctx->pc = 0x2e1ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1eac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1eb0: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x2e1eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
label_2e1eb4:
    // 0x2e1eb4: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x2e1eb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1eb8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e1eb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e1ebc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e1ebcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e1ec0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e1ec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1ec4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e1ec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1ec8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e1ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1ecc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e1eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1ed0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e1ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1ed4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2e1ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e1ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1EE0u;
}
