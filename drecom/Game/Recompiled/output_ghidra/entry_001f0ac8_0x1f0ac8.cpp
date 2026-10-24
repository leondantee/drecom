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

// Function: entry_001f0ac8
// Address: 0x1f0ac8 - 0x1f0b7c
void entry_001f0ac8_0x1f0ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0ac8_0x1f0ac8");
#endif

    switch (ctx->pc) {
        case 0x1f0b18u: goto label_1f0b18;
        case 0x1f0b28u: goto label_1f0b28;
        case 0x1f0b38u: goto label_1f0b38;
        case 0x1f0b60u: goto label_1f0b60;
        default: break;
    }

    ctx->pc = 0x1f0ac8u;

    // 0x1f0ac8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f0ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0acc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f0accu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f0ad0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f0ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1f0ad4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0ad8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1f0ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f0adc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1f0adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1f0ae0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1f0ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f0ae4: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x1f0ae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x1f0ae8: 0x34a2ffff  ori         $v0, $a1, 0xFFFF
    ctx->pc = 0x1f0ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1f0aec: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x1f0aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f0af0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1f0af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1f0af4: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1f0af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1f0af8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0afc: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1f0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1f0b00: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1f0b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f0b04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f0b04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0b08: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x1f0b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x1f0b0c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f0b0cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0b10: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F0B10u;
    SET_GPR_U32(ctx, 31, 0x1F0B18u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F0B10u, 0x1F0B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B18u;
label_1f0b18:
    // 0x1f0b18: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1f0b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1f0b1c: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x1f0b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x1f0b20: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F0B20u;
    SET_GPR_U32(ctx, 31, 0x1F0B28u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F0B20u, 0x1F0B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B28u;
label_1f0b28:
    // 0x1f0b28: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x1f0b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x1f0b2c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1f0b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1f0b30: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F0B30u;
    SET_GPR_U32(ctx, 31, 0x1F0B38u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F0B30u, 0x1F0B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B38u;
label_1f0b38:
    // 0x1f0b38: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1f0b38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f0b3c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0b40: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1f0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1f0b44: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1f0b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1f0b48: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f0b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0b4c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x1f0b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x1f0b50: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1f0b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f0b54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f0b54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0b58: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F0B58u;
    SET_GPR_U32(ctx, 31, 0x1F0B60u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F0B58u, 0x1F0B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B60u;
label_1f0b60:
    // 0x1f0b60: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f0b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0b64: 0x84a3127c  lh          $v1, 0x127C($a1)
    ctx->pc = 0x1f0b64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
    // 0x1f0b68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f0b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f0b6c: 0xa4a3127c  sh          $v1, 0x127C($a1)
    ctx->pc = 0x1f0b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f0b70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f0b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0b74: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0b78: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x1f0b78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1f0b7cu;
}
