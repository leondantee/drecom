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

// Function: entry_002a2c18
// Address: 0x2a2c18 - 0x2a2d1c
void entry_002a2c18_0x2a2c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a2c18_0x2a2c18");
#endif

    switch (ctx->pc) {
        case 0x2a2c58u: goto label_2a2c58;
        case 0x2a2c64u: goto label_2a2c64;
        case 0x2a2cbcu: goto label_2a2cbc;
        case 0x2a2cc8u: goto label_2a2cc8;
        case 0x2a2d10u: goto label_2a2d10;
        default: break;
    }

    ctx->pc = 0x2a2c18u;

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
}
