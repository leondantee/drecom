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

// Function: Em02_R1_mv0b
// Address: 0x2a2bc0 - 0x2a2fb4
void Em02_R1_mv0b_0x2a2bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_mv0b_0x2a2bc0");
#endif

    switch (ctx->pc) {
        case 0x2a2c58u: goto label_2a2c58;
        case 0x2a2c64u: goto label_2a2c64;
        case 0x2a2cbcu: goto label_2a2cbc;
        case 0x2a2cc8u: goto label_2a2cc8;
        case 0x2a2d10u: goto label_2a2d10;
        case 0x2a2d1cu: goto label_2a2d1c;
        case 0x2a2d2cu: goto label_2a2d2c;
        case 0x2a2d70u: goto label_2a2d70;
        case 0x2a2d8cu: goto label_2a2d8c;
        case 0x2a2e14u: goto label_2a2e14;
        case 0x2a2e30u: goto label_2a2e30;
        case 0x2a2e60u: goto label_2a2e60;
        case 0x2a2e70u: goto label_2a2e70;
        case 0x2a2e7cu: goto label_2a2e7c;
        case 0x2a2e88u: goto label_2a2e88;
        case 0x2a2f14u: goto label_2a2f14;
        case 0x2a2f2cu: goto label_2a2f2c;
        case 0x2a2f3cu: goto label_2a2f3c;
        case 0x2a2f84u: goto label_2a2f84;
        default: break;
    }

    ctx->pc = 0x2a2bc0u;

    // 0x2a2bc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a2bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a2bc4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2a2bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2a2bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a2bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a2bcc: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2a2bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2a2bd0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a2bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2bd4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x2a2bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a2bd8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a2bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2bdc: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2a2bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a2be0: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x2a2be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2a2be4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2a2be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2a2be8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2a2be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a2bec: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2a2becu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x2a2bf0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a2bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2bf4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2a2bf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2a2bf8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a2bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a2bfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a2bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2c00: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2A2C00u;
    {
        const bool branch_taken_0x2a2c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a2c00) {
            ctx->pc = 0x2A2D1Cu;
            goto label_2a2d1c;
        }
    }
    ctx->pc = 0x2A2C08u;
    // 0x2a2c08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2C08u;
    {
        const bool branch_taken_0x2a2c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2c08) {
            ctx->pc = 0x2A2C18u;
            goto label_2a2c18;
        }
    }
    ctx->pc = 0x2A2C10u;
    // 0x2a2c10: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x2A2C10u;
    {
        const bool branch_taken_0x2a2c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2c10) {
            ctx->pc = 0x2A2FA0u;
            goto label_2a2fa0;
        }
    }
    ctx->pc = 0x2A2C18u;
label_2a2c18:
    // 0x2a2c18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a2c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2c1c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2c20: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a2c20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a2c24: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2a2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2a2c28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2c2c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2c30: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a2c34: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2a2c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2a2c38: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2c3c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2c40: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a2c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a2c44: 0x24061e24  addiu       $a2, $zero, 0x1E24
    ctx->pc = 0x2a2c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7716));
    // 0x2a2c48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a2c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2c4c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a2c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a2c50: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A2C50u;
    SET_GPR_U32(ctx, 31, 0x2A2C58u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A2C50u, 0x2A2C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C58u;
label_2a2c58:
    // 0x2a2c58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a2c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a2c5c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A2C5Cu;
    SET_GPR_U32(ctx, 31, 0x2A2C64u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A2C5Cu, 0x2A2C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C64u;
label_2a2c64:
    // 0x2a2c64: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a2c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2c6c: 0x0  nop
    ctx->pc = 0x2a2c6cu;
    // NOP
    // 0x2a2c70: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a2c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a2c74: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2a2c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2a2c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2c7c: 0x0  nop
    ctx->pc = 0x2a2c7cu;
    // NOP
    // 0x2a2c80: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a2c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a2c84: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2c88: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a2c8c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2a2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2a2c90: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a2c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a2c94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a2c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a2c98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a2c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a2c9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a2c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a2ca0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a2ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a2ca4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2a2ca4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2ca8: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2a2ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2a2cac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a2cacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a2cb0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a2cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a2cb4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2A2CB4u;
    SET_GPR_U32(ctx, 31, 0x2A2CBCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2A2CB4u, 0x2A2CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2CBCu;
label_2a2cbc:
    // 0x2a2cbc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a2cbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a2cc0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2A2CC0u;
    SET_GPR_U32(ctx, 31, 0x2A2CC8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2A2CC0u, 0x2A2CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2CC8u;
label_2a2cc8:
    // 0x2a2cc8: 0x3c02c28c  lui         $v0, 0xC28C
    ctx->pc = 0x2a2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49804 << 16));
    // 0x2a2ccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2cd0: 0x0  nop
    ctx->pc = 0x2a2cd0u;
    // NOP
    // 0x2a2cd4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a2cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a2cd8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2cdc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a2ce0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2a2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2a2ce4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a2ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a2ce8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a2ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a2cec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a2cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a2cf0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a2cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a2cf4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a2cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a2cf8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2a2cf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2cfc: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2a2cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2a2d00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a2d00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a2d04: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a2d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a2d08: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2A2D08u;
    SET_GPR_U32(ctx, 31, 0x2A2D10u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2A2D08u, 0x2A2D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D10u;
label_2a2d10:
    // 0x2a2d10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a2d10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a2d14: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2A2D14u;
    SET_GPR_U32(ctx, 31, 0x2A2D1Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2A2D14u, 0x2A2D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D1Cu;
label_2a2d1c:
    // 0x2a2d1c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2d20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a2d20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a2d24: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A2D24u;
    SET_GPR_U32(ctx, 31, 0x2A2D2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A2D24u, 0x2A2D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D2Cu;
label_2a2d2c:
    // 0x2a2d2c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2d30: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2a2d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2a2d34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a2d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a2d38: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2a2d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2a2d3c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A2D3Cu;
    {
        const bool branch_taken_0x2a2d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d3c) {
            ctx->pc = 0x2A2DD0u;
            goto label_2a2dd0;
        }
    }
    ctx->pc = 0x2A2D44u;
    // 0x2a2d44: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2a2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2a2d48: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a2d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a2d4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a2d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a2d50: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2d54: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2d58: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2a2d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a2d5c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a2d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a2d60: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a2d64: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a2d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a2d68: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A2D68u;
    SET_GPR_U32(ctx, 31, 0x2A2D70u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A2D68u, 0x2A2D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D70u;
label_2a2d70:
    // 0x2a2d70: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a2d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2a2d74: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2d78: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a2d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2d7c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a2d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2d80: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a2d80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2d84: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A2D84u;
    SET_GPR_U32(ctx, 31, 0x2A2D8Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A2D84u, 0x2A2D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D8Cu;
label_2a2d8c:
    // 0x2a2d8c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2d90: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a2d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a2d94: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2d98: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a2d9c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2a2d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2da0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2da4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2a2da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2da8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a2da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a2dac: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2a2dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2a2db0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2db4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2a2db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a2db8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2a2db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2a2dbc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2a2dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2a2dc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2dc4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2a2dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2dc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a2dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a2dcc: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2a2dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_2a2dd0:
    // 0x2a2dd0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2dd4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2a2dd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2a2dd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a2dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a2ddc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2a2ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2a2de0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A2DE0u;
    {
        const bool branch_taken_0x2a2de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2de0) {
            ctx->pc = 0x2A2E54u;
            goto label_2a2e54;
        }
    }
    ctx->pc = 0x2A2DE8u;
    // 0x2a2de8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2dec: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a2decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2df0: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2a2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2a2df4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2a2df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2a2df8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a2df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a2dfc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a2dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a2e00: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a2e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a2e04: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a2e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a2e08: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a2e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a2e0c: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A2E0Cu;
    SET_GPR_U32(ctx, 31, 0x2A2E14u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A2E0Cu, 0x2A2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E14u;
label_2a2e14:
    // 0x2a2e14: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a2e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2a2e18: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e1c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a2e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2e20: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a2e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2e24: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a2e24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2e28: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A2E28u;
    SET_GPR_U32(ctx, 31, 0x2A2E30u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A2E28u, 0x2A2E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E30u;
label_2a2e30:
    // 0x2a2e30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e34: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a2e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a2e38: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a2e40: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2a2e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2e44: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e48: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2a2e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2e4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a2e4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a2e50: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2a2e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2a2e54:
    // 0x2a2e54: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e58: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2A2E58u;
    SET_GPR_U32(ctx, 31, 0x2A2E60u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2A2E58u, 0x2A2E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E60u;
label_2a2e60:
    // 0x2a2e60: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a2e64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a2e68: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A2E68u;
    SET_GPR_U32(ctx, 31, 0x2A2E70u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A2E68u, 0x2A2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E70u;
label_2a2e70:
    // 0x2a2e70: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e74: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A2E74u;
    SET_GPR_U32(ctx, 31, 0x2A2E7Cu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A2E74u, 0x2A2E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E7Cu;
label_2a2e7c:
    // 0x2a2e7c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e80: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A2E80u;
    SET_GPR_U32(ctx, 31, 0x2A2E88u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A2E80u, 0x2A2E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E88u;
label_2a2e88:
    // 0x2a2e88: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a2e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e8c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x2a2e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x2a2e90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a2e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a2e94: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2a2e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2a2e98: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2A2E98u;
    {
        const bool branch_taken_0x2a2e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2e98) {
            ctx->pc = 0x2A2F3Cu;
            goto label_2a2f3c;
        }
    }
    ctx->pc = 0x2A2EA0u;
    // 0x2a2ea0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2ea4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a2ea8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2a2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2a2eac: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2a2eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2a2eb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2eb4: 0x0  nop
    ctx->pc = 0x2a2eb4u;
    // NOP
    // 0x2a2eb8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a2eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a2ebc: 0x3c02c448  lui         $v0, 0xC448
    ctx->pc = 0x2a2ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50248 << 16));
    // 0x2a2ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2ec4: 0x0  nop
    ctx->pc = 0x2a2ec4u;
    // NOP
    // 0x2a2ec8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2a2ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a2ecc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2eccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2ed0: 0x0  nop
    ctx->pc = 0x2a2ed0u;
    // NOP
    // 0x2a2ed4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2a2ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2a2ed8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a2edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2ee0: 0x0  nop
    ctx->pc = 0x2a2ee0u;
    // NOP
    // 0x2a2ee4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2a2ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2a2ee8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2a2eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2ef0: 0x0  nop
    ctx->pc = 0x2a2ef0u;
    // NOP
    // 0x2a2ef4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2a2ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a2ef8: 0xa7a00054  sh          $zero, 0x54($sp)
    ctx->pc = 0x2a2ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a2efc: 0xa3a00056  sb          $zero, 0x56($sp)
    ctx->pc = 0x2a2efcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2f00: 0xa3a00057  sb          $zero, 0x57($sp)
    ctx->pc = 0x2a2f00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2f04: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f08: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a2f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a2f0c: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x2A2F0Cu;
    SET_GPR_U32(ctx, 31, 0x2A2F14u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x2A2F0Cu, 0x2A2F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F14u;
label_2a2f14:
    // 0x2a2f14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2F14u;
    {
        const bool branch_taken_0x2a2f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f14) {
            ctx->pc = 0x2A2F3Cu;
            goto label_2a2f3c;
        }
    }
    ctx->pc = 0x2A2F1Cu;
    // 0x2a2f1c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2a2f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2a2f20: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x2a2f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x2a2f24: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2A2F24u;
    SET_GPR_U32(ctx, 31, 0x2A2F2Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2A2F24u, 0x2A2F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F2Cu;
label_2a2f2c:
    // 0x2a2f2c: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x2a2f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x2a2f30: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x2a2f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x2a2f34: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2A2F34u;
    SET_GPR_U32(ctx, 31, 0x2A2F3Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2A2F34u, 0x2A2F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F3Cu;
label_2a2f3c:
    // 0x2a2f3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a2f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f40: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2a2f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a2f44: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A2F44u;
    {
        const bool branch_taken_0x2a2f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f44) {
            ctx->pc = 0x2A2FA0u;
            goto label_2a2fa0;
        }
    }
    ctx->pc = 0x2A2F4Cu;
    // 0x2a2f4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a2f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2f50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f54: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2a2f54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a2f58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a2f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2f5c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f60: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2a2f60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a2f64: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f68: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2a2f68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2f6c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f70: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a2f70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2f74: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f78: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a2f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a2f7c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A2F7Cu;
    SET_GPR_U32(ctx, 31, 0x2A2F84u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A2F7Cu, 0x2A2F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F84u;
label_2a2f84:
    // 0x2a2f84: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a2f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a2f88: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2a2f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2a2f8c: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x2a2f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x2a2f90: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2a2f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a2f94: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a2f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a2f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a2f9c: 0xa4640042  sh          $a0, 0x42($v1)
    ctx->pc = 0x2a2f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 4));
label_2a2fa0:
    // 0x2a2fa0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2a2fa0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2fa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2fa8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2a2fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a2fac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2FB4u;
}
